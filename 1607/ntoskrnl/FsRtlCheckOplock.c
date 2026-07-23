/*
 * XREFs of FsRtlCheckOplock @ 0x14007A050
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlCheckOplockEx @ 0x14007A100 (FsRtlCheckOplockEx.c)
 *     FsRtlpOplockStoreKeyForDeleteOperation @ 0x14007A9E0 (FsRtlpOplockStoreKeyForDeleteOperation.c)
 */

NTSTATUS __stdcall FsRtlCheckOplock(
        POPLOCK Oplock,
        PIRP Irp,
        PVOID Context,
        POPLOCK_WAIT_COMPLETE_ROUTINE CompletionRoutine,
        POPLOCK_FS_PREPOST_IRP PostIrpRoutine)
{
  ULONG v9; // esi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  ULONG Options; // eax

  v9 = 0;
  FsRtlpOplockStoreKeyForDeleteOperation(Oplock, Irp, 0LL);
  if ( !*Oplock && (!Irp || Irp->Tail.Overlay.CurrentStackLocation->MajorFunction) )
    return 0;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( !CurrentStackLocation->MajorFunction )
  {
    Options = CurrentStackLocation->Parameters.Create.Options;
    if ( (Options & 0x100) != 0 )
      v9 = 1;
    if ( (Options & 0x10000) != 0 )
      v9 |= 0x10000000u;
  }
  return FsRtlCheckOplockEx(Oplock, Irp, v9, Context, CompletionRoutine, PostIrpRoutine);
}
