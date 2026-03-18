/*
 * XREFs of WMI_RegisterSurpriseRemovalNotificationInstance @ 0x1C0070430
 * Callers:
 *     HUBPDO_EvtDeviceUsageNotificationEx @ 0x1C00152B0 (HUBPDO_EvtDeviceUsageNotificationEx.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C0034B70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0034FF0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0035340 (memset.c)
 */

__int64 __fastcall WMI_RegisterSurpriseRemovalNotificationInstance(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  __int64 result; // rax
  int v5; // [rsp+28h] [rbp-80h]
  _QWORD v6[8]; // [rsp+30h] [rbp-78h] BYREF
  _DWORD v7[10]; // [rsp+70h] [rbp-38h] BYREF

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0057118);
  memset(v7, 0, sizeof(v7));
  v7[0] = 40;
  v7[5] = 1;
  *(GUID *)&v7[1] = GUID_USB_WMI_SURPRISE_REMOVAL_NOTIFICATION;
  memset(v6, 0, sizeof(v6));
  v6[2] = v7;
  LODWORD(v6[0]) = 64;
  BYTE1(v6[3]) = 1;
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C00570E8);
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, _QWORD, __int64))(WdfFunctions_01015 + 2984))(
             WdfDriverGlobals,
             a1,
             v6,
             0LL,
             v3 + 80);
  if ( (int)result < 0 )
  {
    v5 = result;
    return WPP_RECORDER_SF_d(
             *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 24) + 8LL) + 1432LL),
             2u,
             5u,
             0x12u,
             (__int64)&WPP_0aebd9e813344ad5cfb424a7bef6ec1b_Traceguids,
             v5);
  }
  return result;
}
