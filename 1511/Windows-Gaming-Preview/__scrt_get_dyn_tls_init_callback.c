/*
 * XREFs of __scrt_get_dyn_tls_init_callback @ 0x1800261CC
 * Callers:
 *     dllmain_crt_process_attach @ 0x1800256A8 (dllmain_crt_process_attach.c)
 * Callees:
 *     <none>
 */

void *_scrt_get_dyn_tls_init_callback()
{
  return &_dyn_tls_init_callback;
}
