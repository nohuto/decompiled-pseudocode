/*
 * XREFs of __scrt_dllmain_uninitialize_c @ 0x180025CC0
 * Callers:
 *     dllmain_crt_process_detach @ 0x180025910 (dllmain_crt_process_detach.c)
 * Callees:
 *     <none>
 */

int _scrt_dllmain_uninitialize_c()
{
  return execute_onexit_table(&Table);
}
