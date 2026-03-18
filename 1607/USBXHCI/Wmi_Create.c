/*
 * XREFs of Wmi_Create @ 0x1C004E5B0
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x1C004E2E0 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0005BA0 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C000FA40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010200 (memset.c)
 */

__int64 __fastcall Wmi_Create(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v6; // eax
  _QWORD *v7; // rax
  __int64 v9; // [rsp+30h] [rbp-69h] BYREF
  _QWORD v10[7]; // [rsp+38h] [rbp-61h] BYREF
  _QWORD v11[8]; // [rsp+70h] [rbp-29h] BYREF
  _DWORD v12[10]; // [rsp+B0h] [rbp+17h] BYREF

  memset(v12, 0, sizeof(v12));
  v12[0] = 40;
  *(GUID *)&v12[1] = GUID_USBXHCI_GET_CONTROLLER_CAPABILITIES;
  memset(v11, 0, sizeof(v11));
  LODWORD(v11[0]) = 64;
  v11[2] = v12;
  memset(v10, 0, sizeof(v10));
  v10[6] = off_1C0043278;
  LODWORD(v10[0]) = 56;
  v10[3] = 0x100000001LL;
  v10[1] = Wmi_WdfEvtCleanupCallback;
  v11[4] = &Wmi_WdfEvtWmi_GetControllerCapabilities;
  BYTE1(v11[3]) = 1;
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, _QWORD *, __int64 *))(WdfFunctions_01015 + 2984))(
         WdfDriverGlobals,
         a1,
         v11,
         v10,
         &v9);
  if ( v6 < 0 )
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a2 + 64),
      2u,
      0xEu,
      0xAu,
      (__int64)&WPP_cb071ada7b173da2fd0c6f854bd4e7d5_Traceguids,
      v6);
  v7 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                   WdfDriverGlobals,
                   v9,
                   off_1C0043278);
  *v7 = a2;
  *a3 = v7;
  return 0LL;
}
