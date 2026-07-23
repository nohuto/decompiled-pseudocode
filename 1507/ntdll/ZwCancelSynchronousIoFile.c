/*
 * XREFs of ZwCancelSynchronousIoFile @ 0x1800941E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCancelSynchronousIoFile(
        HANDLE ThreadHandle,
        PIO_STATUS_BLOCK IoRequestToCancel,
        PIO_STATUS_BLOCK IoStatusBlock)
{
  NTSTATUS result; // eax

  result = 142;
  __asm { syscall; Low latency system call }
  return result;
}
