/*
 * XREFs of UsbhFdoPower_QueryPower @ 0x1C0001860
 * Callers:
 *     <none>
 * Callees:
 *     UsbhStartThisPowerIrp_Fdo @ 0x1C00018D4 (UsbhStartThisPowerIrp_Fdo.c)
 *     UsbhFdoQuerySystemPowerState @ 0x1C0001948 (UsbhFdoQuerySystemPowerState.c)
 *     UsbhFdoQueryDevicePowerState @ 0x1C0001C24 (UsbhFdoQueryDevicePowerState.c)
 *     UsbhPoStartNextPowerIrp_Fdo @ 0x1C0001D30 (UsbhPoStartNextPowerIrp_Fdo.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
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
