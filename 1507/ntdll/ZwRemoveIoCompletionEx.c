/*
 * XREFs of ZwRemoveIoCompletionEx @ 0x180094E60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwRemoveIoCompletionEx(
        HANDLE IoCompletionHandle,
        PFILE_IO_COMPLETION_INFORMATION IoCompletionInformation,
        ULONG Count,
        PULONG NumEntriesRemoved,
        PLARGE_INTEGER Timeout,
        BOOLEAN Alertable)
{
  NTSTATUS result; // eax

  result = 342;
  __asm { syscall; Low latency system call }
  return result;
}
