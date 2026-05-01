/*
 * XREFs of _execute_onexit_table @ 0x18002F2B6
 * Callers:
 *     __scrt_dllmain_uninitialize_c @ 0x18002E850 (__scrt_dllmain_uninitialize_c.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl execute_onexit_table(_onexit_table_t *Table)
{
  return _execute_onexit_table(Table);
}
