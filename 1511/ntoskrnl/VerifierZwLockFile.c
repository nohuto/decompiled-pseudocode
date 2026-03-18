/*
 * XREFs of VerifierZwLockFile @ 0x1406C0D64
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierZwLockFile(
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
  return pXdvZwLockFile(
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
