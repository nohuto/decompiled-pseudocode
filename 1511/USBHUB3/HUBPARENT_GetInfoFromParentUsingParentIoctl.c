/*
 * XREFs of HUBPARENT_GetInfoFromParentUsingParentIoctl @ 0x1C0006CB0
 * Callers:
 *     HUBHSM_GettingAdditionalInfoFromParent @ 0x1C0008570 (HUBHSM_GettingAdditionalInfoFromParent.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C0009730 (HUBSM_AddEvent.c)
 *     __security_check_cookie @ 0x1C0034B70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0034FF0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0035340 (memset.c)
 */

__int64 __fastcall HUBPARENT_GetInfoFromParentUsingParentIoctl(__int64 a1)
{
  __int64 v2; // rsi
  int v3; // eax
  int v4; // ebx
  unsigned __int16 v5; // r9
  __int64 result; // rax
  __int64 v7; // [rsp+38h] [rbp-39h] BYREF
  _QWORD v8[7]; // [rsp+40h] [rbp-31h] BYREF
  _QWORD v9[9]; // [rsp+78h] [rbp+7h] BYREF

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 336))(
         WdfDriverGlobals,
         *(_QWORD *)(a1 + 16));
  memset(v8, 0, sizeof(v8));
  v8[4] = *(_QWORD *)(a1 + 16);
  LODWORD(v8[0]) = 56;
  v8[3] = 0x100000001LL;
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, __int64, __int64 *))(WdfFunctions_01015 + 1976))(
         WdfDriverGlobals,
         v8,
         v2,
         &v7);
  v4 = v3;
  if ( v3 >= 0 )
  {
    memset(v9, 0, sizeof(v9));
    v9[1] = a1 + 2392;
    LOBYTE(v9[0]) = 15;
    LODWORD(v9[3]) = 4788291;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2016))(
      WdfDriverGlobals,
      v7,
      v9);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, __int64, __int64), _QWORD))(WdfFunctions_01015 + 2080))(
      WdfDriverGlobals,
      v7,
      HUBPARENT_GetInfoFromParentUsingParentIoctlComplete,
      0LL);
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _QWORD))(WdfFunctions_01015 + 2024))(
               WdfDriverGlobals,
               v7,
               v2,
               0LL);
    if ( (_BYTE)result )
      goto LABEL_6;
    v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2032))(WdfDriverGlobals, v7);
    v4 = v3;
    v5 = 23;
  }
  else
  {
    v5 = 22;
  }
  result = WPP_RECORDER_SF_d(
             *(_QWORD *)(a1 + 2464),
             2u,
             3u,
             v5,
             (__int64)&WPP_2b51b137d13ebbaf9b46485eeab58040_Traceguids,
             v3);
LABEL_6:
  if ( v4 < 0 )
  {
    if ( v7 )
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
    return HUBSM_AddEvent(a1 + 1208, 2038LL);
  }
  return result;
}
