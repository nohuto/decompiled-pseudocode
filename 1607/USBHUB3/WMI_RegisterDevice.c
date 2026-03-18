/*
 * XREFs of WMI_RegisterDevice @ 0x1C007134C
 * Callers:
 *     HUBPDO_EvtDevicePrepareHardware @ 0x1C00674F0 (HUBPDO_EvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C0034DE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0035240 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00355C0 (memset.c)
 */

__int64 __fastcall WMI_RegisterDevice(__int64 a1)
{
  __int64 v2; // rdi
  __int64 result; // rax
  int v4; // [rsp+28h] [rbp-80h]
  _QWORD v5[8]; // [rsp+30h] [rbp-78h] BYREF
  _DWORD v6[10]; // [rsp+70h] [rbp-38h] BYREF

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0058070);
  memset(v6, 0, sizeof(v6));
  v6[0] = 40;
  *(GUID *)&v6[1] = GUID_USB_WMI_NODE_INFO;
  memset(v5, 0, sizeof(v5));
  v5[2] = v6;
  LODWORD(v5[0]) = 64;
  v5[4] = WMI_QueryInstanceDeviceNodeInfo;
  BYTE1(v5[3]) = 1;
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, _QWORD, _QWORD))(WdfFunctions_01015 + 2984))(
             WdfDriverGlobals,
             a1,
             v5,
             0LL,
             0LL);
  if ( (int)result < 0 )
  {
    v4 = result;
    return WPP_RECORDER_SF_d(
             *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 24) + 8LL) + 1432LL),
             2u,
             5u,
             0x11u,
             (__int64)&WPP_3a51c1c5eac233f38134566dc14bd4ed_Traceguids,
             v4);
  }
  return result;
}
