/*
 * XREFs of PiSwIrpSetLifetime @ 0x1404EBEC8
 * Callers:
 *     PiSwDispatch @ 0x140494568 (PiSwDispatch.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     IofCompleteRequest @ 0x140084CE0 (IofCompleteRequest.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     PiSwLock @ 0x140494B8C (PiSwLock.c)
 */

__int64 __fastcall PiSwIrpSetLifetime(PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  unsigned int v2; // ebx
  struct _IRP *MasterIrp; // r14
  _DWORD *FsContext2; // rdi

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v2 = 0;
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  FsContext2 = CurrentStackLocation->FileObject->FsContext2;
  if ( CurrentStackLocation->Parameters.Create.Options == 4 && *(int *)&MasterIrp->Type < 2 )
  {
    PiSwLock();
    if ( FsContext2 && *((_QWORD *)FsContext2 + 10) && !*((_QWORD *)FsContext2 + 11) )
      FsContext2[45] = *(_DWORD *)&MasterIrp->Type;
    else
      v2 = -1073741637;
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
