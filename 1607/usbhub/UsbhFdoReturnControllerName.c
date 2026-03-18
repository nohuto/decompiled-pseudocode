/*
 * XREFs of UsbhFdoReturnControllerName @ 0x1C003F20C
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x1C0014400 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     UsbhDecPdoIoCount @ 0x1C0007290 (UsbhDecPdoIoCount.c)
 *     UsbhGetControllerName @ 0x1C003C23C (UsbhGetControllerName.c)
 */

__int64 __fastcall UsbhFdoReturnControllerName(__int64 a1, ULONG_PTR a2, IRP *a3)
{
  int ControllerName; // eax
  unsigned int v6; // ebx
  __int64 v7; // r8
  __int64 v8; // r9

  ControllerName = UsbhGetControllerName(
                     a1,
                     a3->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext,
                     a3->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options);
  a3->IoStatus.Status = ControllerName;
  v6 = ControllerName;
  IofCompleteRequest(a3, 0);
  UsbhDecPdoIoCount(a2, (ULONG_PTR)a3, v7, v8);
  return v6;
}
