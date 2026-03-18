/*
 * XREFs of UsbhFdoHandleFreeDumpDataIoctl @ 0x1C003E728
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x1C0018D90 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhDecPdoIoCount @ 0x1C001C2C0 (UsbhDecPdoIoCount.c)
 */

__int64 __fastcall UsbhFdoHandleFreeDumpDataIoctl(__int64 a1, ULONG_PTR a2, IRP *a3, __int64 a4)
{
  PDEVICE_OBJECT *v6; // rax
  unsigned int v7; // ebx
  __int64 v8; // r8
  __int64 v9; // r9

  v6 = (PDEVICE_OBJECT *)FdoExt(a1, a2, (__int64)a3, a4);
  ++a3->CurrentLocation;
  ++a3->Tail.Overlay.CurrentStackLocation;
  v7 = IofCallDriver(v6[151], a3);
  UsbhDecPdoIoCount(a2, (ULONG_PTR)a3, v8, v9);
  return v7;
}
