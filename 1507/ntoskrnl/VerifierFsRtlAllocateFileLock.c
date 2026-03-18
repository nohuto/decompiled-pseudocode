/*
 * XREFs of VerifierFsRtlAllocateFileLock @ 0x140741C5C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
PFILE_LOCK __stdcall VerifierFsRtlAllocateFileLock(
        PCOMPLETE_LOCK_IRP_ROUTINE CompleteLockIrpRoutine,
        PUNLOCK_ROUTINE UnlockRoutine)
{
  return pXdvFsRtlAllocateFileLock(CompleteLockIrpRoutine, UnlockRoutine);
}
