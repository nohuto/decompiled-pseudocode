/*
 * XREFs of __scrt_dllmain_after_initialize_c @ 0x180025B48
 * Callers:
 *     dllmain_crt_process_attach @ 0x1800256A8 (dllmain_crt_process_attach.c)
 * Callees:
 *     __isa_available_init @ 0x1800263E4 (__isa_available_init.c)
 */

char _scrt_dllmain_after_initialize_c()
{
  _isa_available_init();
  return 1;
}
