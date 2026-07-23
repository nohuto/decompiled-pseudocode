/*
 * XREFs of NtQueryIoCompletion @ 0x180094C90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtQueryIoCompletion(
        HANDLE IoCompletionHandle,
        IO_COMPLETION_INFORMATION_CLASS IoCompletionInformationClass,
        PVOID IoCompletionInformation,
        ULONG IoCompletionInformationLength,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 313;
  __asm { syscall; Low latency system call }
  return result;
}
