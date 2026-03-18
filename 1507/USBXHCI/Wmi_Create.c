/*
 * XREFs of Wmi_Create @ 0x1C0047750
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x1C0047200 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00038C0 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C0007B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0007F80 (memset.c)
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
  v10[6] = off_1C00401D0;
  LODWORD(v10[0]) = 56;
  v10[3] = 0x100000001LL;
  v10[1] = Wmi_WdfEvtCleanupCallback;
  BYTE1(v11[3]) = 1;
  v11[4] = &Wmi_WdfEvtWmi_GetControllerCapabilities;
  v6 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, _QWORD *, _QWORD *, __int64 *))(WdfFunctions_01015 + 2984))(
         WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
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
      (__int64)&WPP_908b54c7d6f6ffe6ea04f25220b9fe46_Traceguids,
      v6);
  v7 = (_QWORD *)(*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, void *))(WdfFunctions_01015 + 1616))(
                   WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
                   v9,
                   off_1C00401D0);
  *v7 = a2;
  *a3 = v7;
  return 0LL;
}
