/*
 * XREFs of UsbhFdoPower_QueryPower @ 0x1C0001BB0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhStartThisPowerIrp_Fdo @ 0x1C0001C24 (UsbhStartThisPowerIrp_Fdo.c)
 *     UsbhFdoQuerySystemPowerState @ 0x1C0001C98 (UsbhFdoQuerySystemPowerState.c)
 *     UsbhFdoQueryDevicePowerState @ 0x1C0001E24 (UsbhFdoQueryDevicePowerState.c)
 *     UsbhPoStartNextPowerIrp_Fdo @ 0x1C0001F30 (UsbhPoStartNextPowerIrp_Fdo.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 */

NTSTATUS __fastcall UsbhFdoPower_QueryPower(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  __int64 v5; // rbp
  unsigned int Options; // ecx

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v5 = FdoExt(DeviceObject);
  UsbhStartThisPowerIrp_Fdo(DeviceObject, Irp, 1161LL);
  Options = CurrentStackLocation->Parameters.Create.Options;
  if ( !Options )
    return UsbhFdoQuerySystemPowerState(DeviceObject, Irp);
  if ( Options == 1 )
    return UsbhFdoQueryDevicePowerState(DeviceObject, Irp);
  UsbhPoStartNextPowerIrp_Fdo(DeviceObject, Irp, 1172LL);
  ++Irp->CurrentLocation;
  ++Irp->Tail.Overlay.CurrentStackLocation;
  return PoCallDriver(*(PDEVICE_OBJECT *)(v5 + 1208), Irp);
}
