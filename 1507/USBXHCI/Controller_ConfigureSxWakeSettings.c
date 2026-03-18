/*
 * XREFs of Controller_ConfigureSxWakeSettings @ 0x1C0047444
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x1C0047200 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00038C0 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C0007B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Controller_ConfigureSxWakeSettings(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax
  int v4; // [rsp+28h] [rbp-30h]
  _QWORD v5[2]; // [rsp+30h] [rbp-28h] BYREF
  int v6; // [rsp+40h] [rbp-18h]

  v1 = *a1;
  v5[0] = 0x500000014LL;
  v6 = 257;
  v5[1] = 1LL;
  result = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, _QWORD *))(WdfFunctions_01015 + 376))(
             WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
             v1,
             v5);
  if ( (int)result < 0 )
  {
    v4 = result;
    return WPP_RECORDER_SF_d(a1[8], 2u, 3u, 0x1Fu, (__int64)&WPP_71d031db04c83962e2b4b0195700cb23_Traceguids, v4);
  }
  return result;
}
