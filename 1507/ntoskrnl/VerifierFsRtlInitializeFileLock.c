/*
 * XREFs of VerifierFsRtlInitializeFileLock @ 0x140741D1C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall VerifierFsRtlInitializeFileLock(
        PFILE_LOCK FileLock,
        PCOMPLETE_LOCK_IRP_ROUTINE CompleteLockIrpRoutine,
        PUNLOCK_ROUTINE UnlockRoutine)
{
  pXdvFsRtlInitializeFileLock(FileLock, CompleteLockIrpRoutine, UnlockRoutine);
}
