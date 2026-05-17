/*
 * XREFs of NtNotifyChangeMultipleKeys @ 0x180094960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall NtNotifyChangeMultipleKeys(
        HANDLE MasterKeyHandle,
        ULONG Count,
        OBJECT_ATTRIBUTES SubordinateObjects[],
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG CompletionFilter,
        BOOLEAN WatchTree,
        PVOID Buffer,
        ULONG BufferSize,
        BOOLEAN Asynchronous)
{
  NTSTATUS result; // eax

  result = 262;
  __asm { syscall; Low latency system call }
  return result;
}
