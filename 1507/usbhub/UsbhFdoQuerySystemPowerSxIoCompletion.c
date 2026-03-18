/*
 * XREFs of UsbhFdoQuerySystemPowerSxIoCompletion @ 0x1C0002500
 * Callers:
 *     <none>
 * Callees:
 *     UsbhPoStartNextPowerIrp_Fdo @ 0x1C0001D30 (UsbhPoStartNextPowerIrp_Fdo.c)
 *     UsbhCanSuspend @ 0x1C00025A0 (UsbhCanSuspend.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 */

__int64 __fastcall UsbhFdoQuerySystemPowerSxIoCompletion(PDEVICE_OBJECT DeviceObject, PIRP Irp, PVOID Context)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  __int64 v6; // rbp
  unsigned int v7; // r10d
  char CanSuspend; // al
  NTSTATUS v9; // eax
  unsigned int v10; // ebx

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v6 = FdoExt(DeviceObject);
  Log((_DWORD)DeviceObject, 16, 1901295731, CurrentStackLocation->Parameters.Read.ByteOffset.LowPart, (__int64)Irp);
  CanSuspend = UsbhCanSuspend(DeviceObject, v7);
  v9 = PoRequestPowerIrp(
         DeviceObject,
         3u,
         (POWER_STATE)(4 - (CanSuspend != 0)),
         (PREQUEST_POWER_COMPLETE)UsbhFdoQueryDevicePowerDxPoCompletion,
         Irp,
         0LL);
  v10 = v9;
  if ( v9 == 259 )
    return 3221225494LL;
  Irp->IoStatus.Status = v9;
  UsbhPoStartNextPowerIrp_Fdo((__int64)DeviceObject, Irp, 1273);
  IofCompleteRequest(Irp, 0);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v6 + 1224), Irp, 0x20u);
  return v10;
}
