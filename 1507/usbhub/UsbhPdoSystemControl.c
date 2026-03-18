/*
 * XREFs of UsbhPdoSystemControl @ 0x1C0007950
 * Callers:
 *     <none>
 * Callees:
 *     UsbhIncPdoIoCount @ 0x1C0007B30 (UsbhIncPdoIoCount.c)
 *     UsbhDecPdoIoCount @ 0x1C00139E0 (UsbhDecPdoIoCount.c)
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 *     Log @ 0x1C0014B50 (Log.c)
 */

__int64 __fastcall UsbhPdoSystemControl(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  unsigned int Status; // ebx
  __int64 v5; // rbx
  NTSTATUS v6; // esi
  _SYSCTL_IRP_DISPOSITION IrpDisposition; // [rsp+48h] [rbp+10h] BYREF

  Status = Irp->IoStatus.Status;
  if ( (UsbhIncPdoIoCount(DeviceObject, Irp, 1398362953LL, 0LL) & 0xC0000000) == 0xC0000000 )
  {
    Irp->IoStatus.Status = Status;
    IofCompleteRequest(Irp, 0);
    return Status;
  }
  else
  {
    v5 = PdoExt(DeviceObject);
    Log(*(_QWORD *)(v5 + 1176), 256, 1347898697, (_DWORD)Irp, 0LL);
    v6 = WmiSystemControl((PWMILIB_CONTEXT)(v5 + 1328), DeviceObject, Irp, &IrpDisposition);
    Log(*(_QWORD *)(v5 + 1176), 256, 1884769609, (_DWORD)Irp, v6);
    if ( IrpDisposition )
    {
      if ( IrpDisposition == IrpNotWmi )
        v6 = Irp->IoStatus.Status;
      Irp->IoStatus.Status = v6;
      IofCompleteRequest(Irp, 0);
    }
    UsbhDecPdoIoCount((ULONG_PTR)DeviceObject, (ULONG_PTR)Irp);
    return (unsigned int)v6;
  }
}
