/*
 * XREFs of UsbhFdoReturnDeviceBusInfo @ 0x1C003ED14
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x1C0012F60 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     UsbhDecPdoIoCount @ 0x1C00139E0 (UsbhDecPdoIoCount.c)
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 *     UsbhGetDeviceBusInfo @ 0x1C003BD68 (UsbhGetDeviceBusInfo.c)
 *     WPP_RECORDER_SF_q @ 0x1C003D1E8 (WPP_RECORDER_SF_q.c)
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
