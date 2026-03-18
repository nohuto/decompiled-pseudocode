/*
 * XREFs of VerifierFsRtlFastUnlockSingle @ 0x1406C04F8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierFsRtlFastUnlockSingle(
        PFILE_LOCK FileLock,
        PFILE_OBJECT FileObject,
        LARGE_INTEGER *FileOffset,
        PLARGE_INTEGER Length,
        PEPROCESS ProcessId,
        ULONG Key,
        PVOID Context,
        BOOLEAN AlreadySynchronized)
{
  return pXdvFsRtlFastUnlockSingle(
           FileLock,
           FileObject,
           FileOffset,
           Length,
           ProcessId,
           Key,
           Context,
           AlreadySynchronized);
}
