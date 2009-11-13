/* Copyright (c) 2009 Nicira Networks
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at:
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef OVSDB_FILE_H
#define OVSDB_FILE_H 1

#include <stdbool.h>
#include "compiler.h"

struct ovsdb;

struct ovsdb_error *ovsdb_file_open(const char *file_name, bool read_only,
                                    struct ovsdb **)
    WARN_UNUSED_RESULT;

#endif /* ovsdb/file.h */
