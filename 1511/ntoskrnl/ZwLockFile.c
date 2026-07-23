/*
 * XREFs of ZwLockFile @ 0x1401525A0
 * Callers:
 *     VerifierZwLockFile @ 0x1406C0D64 (VerifierZwLockFile.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwLockFile(
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
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
