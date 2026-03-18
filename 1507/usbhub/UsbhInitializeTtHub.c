/*
 * XREFs of UsbhInitializeTtHub @ 0x1C002555C
 * Callers:
 *     UsbhInitialize @ 0x1C00189A0 (UsbhInitialize.c)
 *     UsbhReinitialize @ 0x1C003C5CC (UsbhReinitialize.c)
 * Callees:
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     Usbh_HubInitialize20Hub @ 0x1C002563C (Usbh_HubInitialize20Hub.c)
 *     UsbhGetDeviceHandle @ 0x1C00256D4 (UsbhGetDeviceHandle.c)
 *     _guard_dispatch_icall_nop @ 0x1C0029E70 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CDB0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall UsbhInitializeTtHub(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v6; // r14
  unsigned int v7; // edi
  __int64 v8; // rdx
  __int64 DeviceHandle; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r14
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  _DWORD *v16; // rax

  v6 = FdoExt(a1, a2, a3, a4);
  v7 = 1;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      30,
      (__int64)&WPP_7089f250826f62cd62a41d7a765d92e3_Traceguids);
  DeviceHandle = UsbhGetDeviceHandle(a1, a2);
  if ( !DeviceHandle )
    return 3221225473LL;
  if ( (v6[640] & 0x80u) != 0 )
    v7 = *((unsigned __int8 *)FdoExt(a1, v8, v10, v11) + 2938);
  v12 = (int)Usbh_HubInitialize20Hub(a1, DeviceHandle, v7);
  Log(a1, 8, 1768838228, v12, v7);
  v16 = FdoExt(a1, v13, v14, v15);
  if ( *((_QWORD *)v16 + 559) )
    (*((void (__fastcall **)(_QWORD, __int64, __int64, __int64))v16 + 559))(
      *((_QWORD *)v16 + 529),
      DeviceHandle,
      a2,
      1212445810LL);
  return (unsigned int)v12;
}
