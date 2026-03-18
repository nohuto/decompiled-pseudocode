/*
 * XREFs of UsbhFdoQueryDevicePowerDxPoCompletion @ 0x1C0001B90
 * Callers:
 *     <none>
 * Callees:
 *     UsbhPoStartNextPowerIrp_Fdo @ 0x1C0001D30 (UsbhPoStartNextPowerIrp_Fdo.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 */

void __fastcall UsbhFdoQueryDevicePowerDxPoCompletion(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        IRP *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  __int64 v7; // rdi
  int Status; // esi

  v7 = FdoExt(DeviceObject);
  Status = IoStatus->Status;
  Context->IoStatus.Status = IoStatus->Status;
  Log((_DWORD)DeviceObject, 16, 1902409795, Status, (__int64)Context);
  UsbhPoStartNextPowerIrp_Fdo(DeviceObject, Context, 1218LL);
  IofCompleteRequest(Context, 0);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v7 + 1224), Context, 0x20u);
}
