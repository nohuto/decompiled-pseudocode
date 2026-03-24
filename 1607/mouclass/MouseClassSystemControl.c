/*
 * XREFs of MouseClassSystemControl @ 0x1C000C010
 * Callers:
 *     <none>
 * Callees:
 *     MouseClassPassThrough @ 0x1C000C0E0 (MouseClassPassThrough.c)
 */

__int64 __fastcall MouseClassSystemControl(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  char *DeviceExtension; // rdi
  struct _IO_REMOVE_LOCK *v5; // rsi
  int v6; // eax
  unsigned int v7; // r14d
  unsigned int v8; // edi
  _SYSCTL_IRP_DISPOSITION IrpDisposition; // [rsp+50h] [rbp+8h] BYREF

  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  v5 = (struct _IO_REMOVE_LOCK *)(DeviceExtension + 32);
  v6 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 1, Irp, &byte_1C000C240, 1u, 0x20u);
  v7 = v6;
  if ( v6 < 0 )
  {
    Irp->IoStatus.Status = v6;
    Irp->IoStatus.Information = 0LL;
    IofCompleteRequest(Irp, 0);
    return v7;
  }
  else
  {
    v8 = WmiSystemControl((PWMILIB_CONTEXT)(DeviceExtension + 184), DeviceObject, Irp, &IrpDisposition);
    if ( IrpDisposition == IrpNotCompleted )
    {
      IofCompleteRequest(Irp, 0);
    }
    else if ( IrpDisposition )
    {
      if ( (unsigned int)(IrpDisposition - 2) > 1 )
      {
        v8 = MouseClassPassThrough(DeviceObject, Irp);
      }
      else
      {
        ++Irp->CurrentLocation;
        ++Irp->Tail.Overlay.CurrentStackLocation;
        v8 = IofCallDriver(*((PDEVICE_OBJECT *)DeviceObject->DeviceExtension + 2), Irp);
      }
    }
    IoReleaseRemoveLockEx(v5, Irp, 0x20u);
    return v8;
  }
}
