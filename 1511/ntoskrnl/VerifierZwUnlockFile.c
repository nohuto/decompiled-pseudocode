/*
 * XREFs of VerifierZwUnlockFile @ 0x1406C0E04
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierZwUnlockFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PLARGE_INTEGER ByteOffset,
        PLARGE_INTEGER Length,
        ULONG Key)
{
  return pXdvZwUnlockFile(FileHandle, IoStatusBlock, ByteOffset, Length, Key);
}
