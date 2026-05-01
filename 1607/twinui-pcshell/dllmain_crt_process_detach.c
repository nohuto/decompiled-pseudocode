/*
 * XREFs of dllmain_crt_process_detach @ 0x18002E2E4
 * Callers:
 *     dllmain_crt_dispatch @ 0x18002E170 (dllmain_crt_dispatch.c)
 * Callees:
 *     __scrt_acquire_startup_lock @ 0x18002E704 (__scrt_acquire_startup_lock.c)
 *     __scrt_dllmain_uninitialize_c @ 0x18002E850 (__scrt_dllmain_uninitialize_c.c)
 *     __scrt_dllmain_uninitialize_critical @ 0x18002E888 (__scrt_dllmain_uninitialize_critical.c)
 *     __scrt_release_startup_lock @ 0x18002EA68 (__scrt_release_startup_lock.c)
 *     __scrt_uninitialize_crt @ 0x18002EA94 (__scrt_uninitialize_crt.c)
 *     ?__scrt_uninitialize_type_info@@YAXXZ @ 0x18002EC34 (-__scrt_uninitialize_type_info@@YAXXZ.c)
 *     __scrt_fastfail @ 0x18002EC8C (__scrt_fastfail.c)
 *     _RTC_Terminate @ 0x18002EE1C (_RTC_Terminate.c)
 */

__int64 __fastcall dllmain_crt_process_detach(char a1)
{
  unsigned int v2; // ebx
  char v4; // di
  __int64 v5; // rcx
  __int64 v6; // rcx

  v2 = 0;
  if ( dword_18004C350 <= 0 )
    return 0LL;
  --dword_18004C350;
  v4 = _scrt_acquire_startup_lock();
  if ( _scrt_current_native_startup_state != 2 )
    _scrt_fastfail(7LL);
  _scrt_dllmain_uninitialize_c();
  __scrt_uninitialize_type_info();
  RTC_Terminate();
  _scrt_current_native_startup_state = 0;
  _scrt_dllmain_uninitialize_critical();
  LOBYTE(v5) = v4;
  _scrt_release_startup_lock(v5);
  LOBYTE(v6) = a1;
  LOBYTE(v2) = (unsigned __int8)_scrt_uninitialize_crt(v6, 0LL) != 0;
  return v2;
}
