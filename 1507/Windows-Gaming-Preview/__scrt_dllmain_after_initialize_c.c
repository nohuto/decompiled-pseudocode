/*
 * XREFs of __scrt_dllmain_after_initialize_c @ 0x180025C78
 * Callers:
 *     dllmain_crt_process_attach @ 0x1800257D8 (dllmain_crt_process_attach.c)
 * Callees:
 *     __isa_available_init @ 0x180026514 (__isa_available_init.c)
 */

char _scrt_dllmain_after_initialize_c()
{
  _isa_available_init();
  return 1;
}
