/*
 * XREFs of PiSwIrpGetLifetime @ 0x140611354
 * Callers:
 *     PiSwDispatch @ 0x140494568 (PiSwDispatch.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     IofCompleteRequest @ 0x140084CE0 (IofCompleteRequest.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     PiSwLock @ 0x140494B8C (PiSwLock.c)
 */

__int64 __fastcall PiSwIrpGetLifetime(PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  unsigned int v2; // ebx
  struct _IRP *MasterIrp; // r14
  _DWORD *FsContext2; // rsi

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v2 = 0;
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  FsContext2 = CurrentStackLocation->FileObject->FsContext2;
  if ( CurrentStackLocation->Parameters.Read.Length >= 4 )
  {
    PiSwLock();
    if ( FsContext2 && *((_QWORD *)FsContext2 + 10) && !*((_QWORD *)FsContext2 + 11) )
    {
      *(_DWORD *)&MasterIrp->Type = FsContext2[45];
      Irp->IoStatus.Information = 4LL;
    }
    else
    {
      v2 = -1073741637;
    }
    ExReleaseResourceLite(&PiSwLockObj);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  else
  {
    v2 = -1073741811;
  }
  Irp->IoStatus.Status = v2;
  IofCompleteRequest(Irp, 0);
  return v2;
}
