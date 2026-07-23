/*
 * XREFs of NtNotifyChangeDirectoryFile @ 0x180094940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtNotifyChangeDirectoryFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG Length,
        ULONG CompletionFilter,
        BOOLEAN WatchTree)
{
  NTSTATUS result; // eax

  result = 260;
  __asm { syscall; Low latency system call }
  return result;
}
