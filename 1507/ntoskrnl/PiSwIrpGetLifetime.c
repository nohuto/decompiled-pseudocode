/*
 * XREFs of PiSwIrpGetLifetime @ 0x1406910C8
 * Callers:
 *     PiSwDispatch @ 0x14045A7DC (PiSwDispatch.c)
 * Callees:
 *     IofCompleteRequest @ 0x140048F70 (IofCompleteRequest.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 */

__int64 __fastcall PiSwIrpGetLifetime(PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  struct _IRP *MasterIrp; // r14
  unsigned int v4; // ebx
  _DWORD *FsContext2; // rsi
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v7; // rdx
  __int16 v8; // ax

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  v4 = 0;
  FsContext2 = CurrentStackLocation->FileObject->FsContext2;
  if ( CurrentStackLocation->Parameters.Read.Length >= 4 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
    if ( FsContext2 && *((_QWORD *)FsContext2 + 10) && !*((_QWORD *)FsContext2 + 11) )
    {
      *(_DWORD *)&MasterIrp->Type = FsContext2[45];
      Irp->IoStatus.Information = 4LL;
    }
    else
    {
      v4 = -1073741637;
    }
    ExReleaseResourceLite(&PiSwLockObj);
    v7 = KeGetCurrentThread();
    v8 = v7->KernelApcDisable + 1;
    v7->KernelApcDisable = v8;
    if ( !v8
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v7->ApcState.ApcListHead[0].Flink != &v7->152
      && !v7->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  else
  {
    v4 = -1073741811;
  }
  Irp->IoStatus.Status = v4;
  IofCompleteRequest(Irp, 0);
  return v4;
}
