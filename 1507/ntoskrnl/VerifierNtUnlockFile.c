/*
 * XREFs of VerifierNtUnlockFile @ 0x1407544B8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierNtUnlockFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PLARGE_INTEGER ByteOffset,
        PLARGE_INTEGER Length,
        ULONG Key)
{
  return pXdvNtUnlockFile(FileHandle, IoStatusBlock, ByteOffset, Length, Key);
}
