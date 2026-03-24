/*
 * XREFs of KeyboardClassSystemControl @ 0x1C000D2D0
 * Callers:
 *     <none>
 * Callees:
 *     KeyboardClassPassThrough @ 0x1C000D3A0 (KeyboardClassPassThrough.c)
 */

__int64 __fastcall KeyboardClassSystemControl(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  char *DeviceExtension; // rdi
  struct _IO_REMOVE_LOCK *v5; // rsi
  int v6; // eax
  unsigned int v7; // r14d
  unsigned int v8; // edi
  NTSTATUS v9; // eax
  _SYSCTL_IRP_DISPOSITION IrpDisposition; // [rsp+50h] [rbp+8h] BYREF

  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  v5 = (struct _IO_REMOVE_LOCK *)(DeviceExtension + 32);
  v6 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 1, Irp, &byte_1C000D540, 1u, 0x20u);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v8 = WmiSystemControl((PWMILIB_CONTEXT)(DeviceExtension + 200), DeviceObject, Irp, &IrpDisposition);
    switch ( IrpDisposition )
    {
      case IrpForward:
        goto LABEL_3;
      case IrpProcessed:
        goto LABEL_5;
      case IrpNotCompleted:
        IofCompleteRequest(Irp, 0);
        goto LABEL_5;
      case IrpNotWmi:
LABEL_3:
        ++Irp->CurrentLocation;
        ++Irp->Tail.Overlay.CurrentStackLocation;
        v9 = IofCallDriver(*((PDEVICE_OBJECT *)DeviceObject->DeviceExtension + 2), Irp);
        break;
      default:
        v9 = KeyboardClassPassThrough(DeviceObject, Irp);
        break;
    }
    v8 = v9;
LABEL_5:
    IoReleaseRemoveLockEx(v5, Irp, 0x20u);
    return v8;
  }
  Irp->IoStatus.Status = v6;
  Irp->IoStatus.Information = 0LL;
  IofCompleteRequest(Irp, 0);
  return v7;
}
