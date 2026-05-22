/*
 * XREFs of __scrt_dllmain_after_initialize_c @ 0x18009CED4
 * Callers:
 *     dllmain_crt_process_attach @ 0x18009C990 (dllmain_crt_process_attach.c)
 * Callees:
 *     ?HasEndpoint@MobileCursorBroker@@UEAAHXZ @ 0x1800267A0 (-HasEndpoint@MobileCursorBroker@@UEAAHXZ.c)
 *     __isa_available_init @ 0x18009D590 (__isa_available_init.c)
 *     __scrt_is_ucrt_dll_in_use @ 0x18009D758 (__scrt_is_ucrt_dll_in_use.c)
 *     _o__configure_narrow_argv_0 @ 0x18009D7C4 (_o__configure_narrow_argv_0.c)
 *     _initialize_narrow_environment @ 0x18009D7D6 (_initialize_narrow_environment.c)
 */

char _scrt_dllmain_after_initialize_c()
{
  MobileCursorBroker *v0; // rcx
  _crt_argv_mode HasEndpoint; // eax

  if ( (unsigned int)_scrt_is_ucrt_dll_in_use() )
  {
    _isa_available_init();
  }
  else
  {
    HasEndpoint = (unsigned int)MobileCursorBroker::HasEndpoint(v0);
    if ( o__configure_narrow_argv_0(HasEndpoint) )
      return 0;
    initialize_narrow_environment();
  }
  return 1;
}
