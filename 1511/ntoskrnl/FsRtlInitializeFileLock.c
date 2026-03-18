/*
 * XREFs of FsRtlInitializeFileLock @ 0x1400F24D4
 * Callers:
 *     VerifierFsRtlInitializeFileLock @ 0x1406C0528 (VerifierFsRtlInitializeFileLock.c)
 * Callees:
 *     <none>
 */

void __stdcall FsRtlInitializeFileLock(
        PFILE_LOCK FileLock,
        PCOMPLETE_LOCK_IRP_ROUTINE CompleteLockIrpRoutine,
        PUNLOCK_ROUTINE UnlockRoutine)
{
  FileLock->CompleteLockIrpRoutine = CompleteLockIrpRoutine;
  FileLock->LockInformation = 0LL;
  FileLock->FastIoIsQuestionable = 0;
  FileLock->UnlockRoutine = UnlockRoutine;
  FileLock->LockRequestsInProgress = 0;
}
