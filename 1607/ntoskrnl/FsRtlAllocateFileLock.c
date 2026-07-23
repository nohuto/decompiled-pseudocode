/*
 * XREFs of FsRtlAllocateFileLock @ 0x14008CBE8
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x14006FA30 (ExAllocateFromNPagedLookasideList.c)
 */

PFILE_LOCK __stdcall FsRtlAllocateFileLock(
        PCOMPLETE_LOCK_IRP_ROUTINE CompleteLockIrpRoutine,
        PUNLOCK_ROUTINE UnlockRoutine)
{
  PFILE_LOCK result; // rax

  result = (PFILE_LOCK)ExAllocateFromNPagedLookasideList(&FsRtlFileLockLookasideList);
  if ( result )
  {
    result->LockInformation = 0LL;
    result->CompleteLockIrpRoutine = CompleteLockIrpRoutine;
    result->UnlockRoutine = UnlockRoutine;
    result->FastIoIsQuestionable = 0;
    result->LockRequestsInProgress = 0;
  }
  return result;
}
