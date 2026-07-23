/*
 * XREFs of ZwRemoveIoCompletion @ 0x180093990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwRemoveIoCompletion(
        HANDLE IoCompletionHandle,
        PVOID *KeyContext,
        PVOID *ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PLARGE_INTEGER Timeout)
{
  NTSTATUS result; // eax

  result = 9;
  __asm { syscall; Low latency system call }
  return result;
}
