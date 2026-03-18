/*
 * XREFs of VerifierFsRtlFastUnlockSingle @ 0x140741CEC
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
