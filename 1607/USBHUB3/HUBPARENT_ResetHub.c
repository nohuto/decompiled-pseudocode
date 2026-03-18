/*
 * XREFs of HUBPARENT_ResetHub @ 0x1C0006A1C
 * Callers:
 *     HUBHSM_ResettingHubOnResume @ 0x1C0007910 (HUBHSM_ResettingHubOnResume.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     Template_p @ 0x1C0006168 (Template_p.c)
 *     HUBSM_AddEvent @ 0x1C00097E0 (HUBSM_AddEvent.c)
 *     __security_check_cookie @ 0x1C0034DE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0035240 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00355C0 (memset.c)
 */

__int64 __fastcall HUBPARENT_ResetHub(__int64 a1)
{
  __int64 v2; // r14
  __int64 v3; // rcx
  int v4; // eax
  int v5; // esi
  unsigned __int16 v6; // r9
  __int64 result; // rax
  __int64 v8; // [rsp+30h] [rbp-49h] BYREF
  _QWORD v9[7]; // [rsp+38h] [rbp-41h] BYREF
  _QWORD v10[9]; // [rsp+70h] [rbp-9h] BYREF

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 336))(
         WdfDriverGlobals,
         *(_QWORD *)(a1 + 16));
  memset(v9, 0, sizeof(v9));
  v3 = *(_QWORD *)(a1 + 16);
  v9[3] = 0x100000001LL;
  v9[4] = v3;
  LODWORD(v9[0]) = 56;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x400) != 0 )
    Template_p(v3, &USBHUB3_ETW_EVENT_HUB_RESET_REQUEST_START, 0LL, *(_QWORD *)(a1 + 224));
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, __int64, __int64 *))(WdfFunctions_01015 + 1976))(
         WdfDriverGlobals,
         v9,
         v2,
         &v8);
  v5 = v4;
  if ( v4 >= 0 )
  {
    *(_DWORD *)(a1 + 2352) = 0;
    memset(v10, 0, sizeof(v10));
    LOBYTE(v10[0]) = 15;
    LODWORD(v10[3]) = 2232243;
    v10[1] = a1 + 2352;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2016))(
      WdfDriverGlobals,
      v8,
      v10);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, __int64, __int64), _QWORD))(WdfFunctions_01015 + 2080))(
      WdfDriverGlobals,
      v8,
      HUBPARENT_ResetHubComplete,
      0LL);
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _QWORD))(WdfFunctions_01015 + 2024))(
               WdfDriverGlobals,
               v8,
               v2,
               0LL);
    if ( (_BYTE)result )
      goto LABEL_8;
    v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2032))(WdfDriverGlobals, v8);
    v5 = v4;
    v6 = 20;
  }
  else
  {
    v6 = 19;
  }
  result = WPP_RECORDER_SF_d(
             *(_QWORD *)(a1 + 2464),
             2u,
             3u,
             v6,
             (__int64)&WPP_d887d9a76eb73ffd9207a7a58ef2b697_Traceguids,
             v4);
LABEL_8:
  if ( v5 < 0 )
  {
    if ( v8 )
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
    return HUBSM_AddEvent(a1 + 1208, 2070LL);
  }
  return result;
}
