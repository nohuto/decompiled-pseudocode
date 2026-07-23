/*
 * XREFs of ZwUnlockFile @ 0x140182590
 * Callers:
 *     VerifierZwUnlockFile @ 0x140742644 (VerifierZwUnlockFile.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwUnlockFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PLARGE_INTEGER ByteOffset,
        PLARGE_INTEGER Length,
        ULONG Key)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
