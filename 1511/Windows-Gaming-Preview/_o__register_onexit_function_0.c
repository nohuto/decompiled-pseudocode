/*
 * XREFs of _o__register_onexit_function_0 @ 0x18002684C
 * Callers:
 *     _onexit @ 0x180025C74 (_onexit.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl o__register_onexit_function_0(_onexit_table_t *Table, _onexit_t Function)
{
  return _register_onexit_function(Table, Function);
}
