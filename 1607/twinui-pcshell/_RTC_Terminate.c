/*
 * XREFs of _RTC_Terminate @ 0x18002EE1C
 * Callers:
 *     dllmain_crt_process_detach @ 0x18002E2E4 (dllmain_crt_process_detach.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

void __cdecl RTC_Terminate()
{
  void (**i)(void); // rbx

  for ( i = _rtc_tzz; i < _rtc_tzz; ++i )
  {
    if ( *i )
      (*i)();
  }
}
