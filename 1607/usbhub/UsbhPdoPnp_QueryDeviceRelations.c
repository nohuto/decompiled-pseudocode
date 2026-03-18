/*
 * XREFs of UsbhPdoPnp_QueryDeviceRelations @ 0x1C0027920
 * Callers:
 *     <none>
 * Callees:
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 */

__int64 __fastcall UsbhPdoPnp_QueryDeviceRelations(PVOID Object, PIRP Irp, __int64 a3, __int64 a4)
{
  unsigned int Status; // edi
  _QWORD *PoolWithTag; // rsi

  PdoExt((__int64)Object, (__int64)Irp, a3, a4);
  Status = Irp->IoStatus.Status;
  if ( Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length == 4 )
  {
    Status = 0;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x42554855u);
    if ( PoolWithTag )
    {
      ObfReferenceObject(Object);
      *(_DWORD *)PoolWithTag = 1;
      PoolWithTag[1] = Object;
    }
    else
    {
      Status = -1073741670;
    }
    Irp->IoStatus.Information = (unsigned __int64)PoolWithTag;
  }
  Irp->IoStatus.Status = Status;
  IofCompleteRequest(Irp, 0);
  return Status;
}
