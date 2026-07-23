/*
 * XREFs of ZwCancelIoFileEx @ 0x1800941D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCancelIoFileEx(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoRequestToCancel,
        PIO_STATUS_BLOCK IoStatusBlock)
{
  NTSTATUS result; // eax

  result = 141;
  __asm { syscall; Low latency system call }
  return result;
}
