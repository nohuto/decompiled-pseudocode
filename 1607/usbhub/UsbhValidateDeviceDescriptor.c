/*
 * XREFs of UsbhValidateDeviceDescriptor @ 0x1C0007C14
 * Callers:
 *     UsbhSetupDevice @ 0x1C0005530 (UsbhSetupDevice.c)
 *     UsbhGetHubDeviceInformation @ 0x1C0007A3C (UsbhGetHubDeviceInformation.c)
 *     UsbhGetUsbDeviceFlags @ 0x1C0007DC0 (UsbhGetUsbDeviceFlags.c)
 *     UsbhGetAlternateUsbDescriptors @ 0x1C0043894 (UsbhGetAlternateUsbDescriptors.c)
 *     UsbhGetDeviceDescriptor @ 0x1C00544FC (UsbhGetDeviceDescriptor.c)
 * Callees:
 *     Log @ 0x1C00159D0 (Log.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D3C0 (WPP_RECORDER_SF_.c)
 */

char __fastcall UsbhValidateDeviceDescriptor(int a1, __int64 a2, __int64 a3, _DWORD *a4, _BYTE *a5)
{
  PDEVICE_OBJECT v7; // rcx
  int v8; // r9d
  unsigned __int16 v9; // cx

  if ( *(_BYTE *)a2 < 0x12u )
  {
    if ( a4 )
      *a4 = -1072693247;
    v7 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return 0;
    v8 = 14;
LABEL_9:
    WPP_RECORDER_SF_(v7->DeviceExtension, 0, 1, v8, (__int64)&WPP_5bb179a8e8dc3d67ecd79814022ef394_Traceguids);
    return 0;
  }
  if ( *(_BYTE *)(a2 + 1) != 1 )
  {
    if ( a4 )
      *a4 = -1072693246;
    v7 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return 0;
    v8 = 15;
    goto LABEL_9;
  }
  if ( *(_BYTE *)(a2 + 4) != 17 || *(_BYTE *)(a2 + 5) || *(_BYTE *)(a2 + 6) )
    return 1;
  v9 = *(_WORD *)(a2 + 2);
  if ( (unsigned __int16)(v9 - 513) <= 0xFEu )
  {
    if ( a5 )
      *a5 = 1;
    return 1;
  }
  Log(a1, 256, 1447314481, v9, 0LL);
  return 0;
}
