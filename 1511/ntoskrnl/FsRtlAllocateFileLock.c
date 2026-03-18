/*
 * XREFs of FsRtlAllocateFileLock @ 0x1400F2494
 * Callers:
 *     VerifierFsRtlAllocateFileLock @ 0x1406C0468 (VerifierFsRtlAllocateFileLock.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x1400BB7D4 (ExAllocateFromNPagedLookasideList.c)
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
