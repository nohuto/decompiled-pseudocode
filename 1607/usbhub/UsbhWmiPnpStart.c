/*
 * XREFs of UsbhWmiPnpStart @ 0x1C000B780
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D3C0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall UsbhWmiPnpStart(PDEVICE_OBJECT DeviceObject)
{
  __int64 v2; // rbx

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      11,
      (__int64)&WPP_b17c68f1d29d390fab33e43047c86516_Traceguids);
  v2 = FdoExt(DeviceObject);
  *(_DWORD *)(v2 + 2872) = 6;
  *(_QWORD *)(v2 + 2880) = &USB_WmiGuidList;
  *(_QWORD *)(v2 + 2888) = UsbhQueryWmiRegInfo;
  *(_QWORD *)(v2 + 2896) = UsbhQueryWmiDataBlock;
  *(_QWORD *)(v2 + 2904) = UsbhSetWmiDataBlock;
  *(_QWORD *)(v2 + 2920) = UsbhExecuteWmiMethod;
  *(_QWORD *)(v2 + 2912) = 0LL;
  *(_QWORD *)(v2 + 2928) = 0LL;
  IoWMIRegistrationControl(DeviceObject, 1u);
  *(_DWORD *)(v2 + 2560) |= 2u;
  Log((_DWORD)DeviceObject, 64, 1098345833, 0, 0LL);
  return 0LL;
}
