/*
 * XREFs of UsbhPdoPnp_QueryDeviceRelations @ 0x1C000B8D0
 * Callers:
 *     <none>
 * Callees:
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 */

__int64 __fastcall UsbhPdoPnp_QueryDeviceRelations(PVOID Object, PIRP Irp)
{
  unsigned int Status; // edi
  _QWORD *PoolWithTag; // rsi

  PdoExt(Object);
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
