/*
 * XREFs of ZwUnlockFile @ 0x1800953D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwUnlockFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PLARGE_INTEGER ByteOffset,
        PLARGE_INTEGER Length,
        ULONG Key)
{
  NTSTATUS result; // eax

  result = 429;
  __asm { syscall; Low latency system call }
  return result;
}
