/*
 * XREFs of VerifierNtLockFile @ 0x1406D08D4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierNtLockFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PLARGE_INTEGER ByteOffset,
        PLARGE_INTEGER Length,
        ULONG Key,
        BOOLEAN FailImmediately,
        BOOLEAN ExclusiveLock)
{
  return pXdvNtLockFile(
           FileHandle,
           Event,
           ApcRoutine,
           ApcContext,
           IoStatusBlock,
           ByteOffset,
           Length,
           Key,
           FailImmediately,
           ExclusiveLock);
}
