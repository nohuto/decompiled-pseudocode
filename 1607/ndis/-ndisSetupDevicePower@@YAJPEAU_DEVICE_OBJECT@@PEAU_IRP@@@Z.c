/*
 * XREFs of ?ndisSetupDevicePower@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C0073890
 * Callers:
 *     ndisPowerDispatch @ 0x1C001FC10 (ndisPowerDispatch.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall ndisSetupDevicePower(struct _DEVICE_OBJECT *a1, struct _IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r9
  PDEVICE_OBJECT *DeviceExtension; // rcx

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  DeviceExtension = (PDEVICE_OBJECT *)a1->DeviceExtension;
  if ( CurrentStackLocation->MinorFunction == 3 )
  {
    a2->IoStatus.Status = 0;
    IofCompleteRequest(a2, 0);
    return 0;
  }
  else
  {
    ++a2->CurrentLocation;
    a2->Tail.Overlay.CurrentStackLocation = CurrentStackLocation + 1;
    return IofCallDriver(DeviceExtension[5], a2);
  }
}
