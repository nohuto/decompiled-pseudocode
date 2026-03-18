/*
 * XREFs of UsbhFdoReturnDeviceBusInfo @ 0x1C003EF44
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x1C0018D90 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     UsbhDecPdoIoCount @ 0x1C001C2C0 (UsbhDecPdoIoCount.c)
 *     UsbhGetDeviceBusInfo @ 0x1C003BF94 (UsbhGetDeviceBusInfo.c)
 *     WPP_RECORDER_SF_q @ 0x1C003D418 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall UsbhFdoReturnDeviceBusInfo(__int64 a1, ULONG_PTR a2, IRP *a3, __int64 a4)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  int DeviceBusInfo; // eax
  __int64 v9; // r8
  __int64 v10; // r9

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_q(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      1u,
      0xAu,
      (__int64)&WPP_7d0af4831bcb17b64b3f297e612dab23_Traceguids,
      a2);
  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  PdoExt(a2, a2, (__int64)a3, a4);
  DeviceBusInfo = UsbhGetDeviceBusInfo(a1, a2, CurrentStackLocation->Parameters.Create.SecurityContext, 16LL);
  a3->IoStatus.Status = DeviceBusInfo;
  LODWORD(CurrentStackLocation) = DeviceBusInfo;
  IofCompleteRequest(a3, 0);
  UsbhDecPdoIoCount(a2, (ULONG_PTR)a3, v9, v10);
  return (unsigned int)CurrentStackLocation;
}
