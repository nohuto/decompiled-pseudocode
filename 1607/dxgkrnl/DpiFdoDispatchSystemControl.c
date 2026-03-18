/*
 * XREFs of DpiFdoDispatchSystemControl @ 0x1C0194830
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiFdoDispatchSystemControl(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  unsigned int v3; // ebx
  struct _WMILIB_CONTEXT *DeviceExtension; // rcx
  _SYSCTL_IRP_DISPOSITION IrpDisposition; // [rsp+30h] [rbp+8h] BYREF

  v3 = -1073741637;
  DeviceExtension = (struct _WMILIB_CONTEXT *)DeviceObject->DeviceExtension;
  if ( LOBYTE(DeviceExtension[54].WmiFunctionControl) == 1 )
  {
    v3 = WmiSystemControl(DeviceExtension + 55, DeviceObject, Irp, &IrpDisposition);
    if ( IrpDisposition )
    {
      if ( IrpDisposition == IrpNotCompleted )
        IofCompleteRequest(Irp, 0);
      else
        return (unsigned int)-1073741637;
    }
  }
  return v3;
}
