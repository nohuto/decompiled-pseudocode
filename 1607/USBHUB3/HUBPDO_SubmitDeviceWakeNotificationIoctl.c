/*
 * XREFs of HUBPDO_SubmitDeviceWakeNotificationIoctl @ 0x1C0014E74
 * Callers:
 *     HUBPDO_EvtDeviceEnableWakeAtBus @ 0x1C00150A0 (HUBPDO_EvtDeviceEnableWakeAtBus.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C0034DE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0035240 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00355C0 (memset.c)
 */

__int64 __fastcall HUBPDO_SubmitDeviceWakeNotificationIoctl(_QWORD *a1)
{
  unsigned int v2; // edi
  __int64 v3; // r15
  __int64 v4; // r14
  int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // rbx
  int v8; // eax
  __int64 v10; // [rsp+28h] [rbp-41h]
  _QWORD v11[3]; // [rsp+30h] [rbp-39h] BYREF
  _QWORD v12[9]; // [rsp+48h] [rbp-21h] BYREF

  v2 = 0;
  v3 = *(_QWORD *)(*a1 + 32LL);
  v4 = *(_QWORD *)(a1[2] + 264LL);
  v11[1] = 0LL;
  v11[2] = 0LL;
  v11[0] = 24LL;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 1992))(
         WdfDriverGlobals,
         v4,
         v11);
  if ( v5 < 0 )
  {
    v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
           WdfDriverGlobals,
           WdfDriverGlobals->Driver,
           off_1C00580E8);
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v6 + 64),
      2u,
      2u,
      0x3Au,
      (__int64)&WPP_ad6d99566eff37ab7f3364317bcf702c_Traceguids,
      v5);
  }
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v4,
         off_1C00581D8);
  *(_QWORD *)v7 = 0LL;
  *(_QWORD *)(v7 + 8) = 0LL;
  *(_QWORD *)(v7 + 16) = 0LL;
  *(_DWORD *)(v7 + 16) = 0;
  *(_WORD *)(v7 + 2) = 24;
  KeClearEvent((PRKEVENT)(v7 + 24));
  memset(v12, 0, sizeof(v12));
  v12[2] = a1[3];
  LOBYTE(v12[0]) = 15;
  LODWORD(v12[3]) = 4784139;
  v12[1] = v7;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2016))(
    WdfDriverGlobals,
    v4,
    v12);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, __int64, __int64, __int64), _QWORD *))(WdfFunctions_01015 + 2080))(
    WdfDriverGlobals,
    v4,
    HUBPDO_WakeNotificationIoctlComplete,
    a1);
  if ( !(*(unsigned __int8 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _QWORD))(WdfFunctions_01015 + 2024))(
          WdfDriverGlobals,
          v4,
          v3,
          0LL) )
  {
    v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2032))(WdfDriverGlobals, v4);
    v2 = v8;
    if ( v8 < 0 )
    {
      LODWORD(v10) = v8;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 1432LL),
        4u,
        5u,
        0x76u,
        (__int64)&WPP_54842a9813333d375964e0f94b002c66_Traceguids,
        v10);
    }
  }
  return v2;
}
