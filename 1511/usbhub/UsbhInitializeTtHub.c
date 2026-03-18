/*
 * XREFs of UsbhInitializeTtHub @ 0x1C000503C
 * Callers:
 *     UsbhInitialize @ 0x1C000F6C0 (UsbhInitialize.c)
 *     UsbhReinitialize @ 0x1C003C7FC (UsbhReinitialize.c)
 * Callees:
 *     Usbh_HubInitialize20Hub @ 0x1C000511C (Usbh_HubInitialize20Hub.c)
 *     UsbhGetDeviceHandle @ 0x1C0006740 (UsbhGetDeviceHandle.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028E30 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CFE0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall UsbhInitializeTtHub(__int64 a1, __int64 a2)
{
  __int64 v4; // r14
  unsigned int v5; // edi
  __int64 DeviceHandle; // rsi
  unsigned int v7; // r14d
  __int64 v8; // rax

  v4 = FdoExt(a1);
  v5 = 1;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      30,
      (__int64)&WPP_a5ab263a51257b83d9b9ce18201b3fa5_Traceguids);
  DeviceHandle = UsbhGetDeviceHandle(a1, a2);
  if ( !DeviceHandle )
    return 3221225473LL;
  if ( (*(_DWORD *)(v4 + 2560) & 0x80u) != 0 )
    v5 = *(unsigned __int8 *)(FdoExt(a1) + 2938);
  v7 = Usbh_HubInitialize20Hub(a1, DeviceHandle, v5);
  Log(a1, 8, 1768838228, v7, v5);
  v8 = FdoExt(a1);
  if ( *(_QWORD *)(v8 + 4472) )
    (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64))(v8 + 4472))(
      *(_QWORD *)(v8 + 4232),
      DeviceHandle,
      a2,
      1212445810LL);
  return v7;
}
