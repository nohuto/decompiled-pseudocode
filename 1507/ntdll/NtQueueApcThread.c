/*
 * XREFs of NtQueueApcThread @ 0x180093D50
 * Callers:
 *     RtlQueueApcWow64Thread @ 0x1800C6E00 (RtlQueueApcWow64Thread.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtQueueApcThread(
        HANDLE ThreadHandle,
        PPS_APC_ROUTINE ApcRoutine,
        PVOID ApcArgument1,
        PVOID ApcArgument2,
        PVOID ApcArgument3)
{
  NTSTATUS result; // eax

  result = 69;
  __asm { syscall; Low latency system call }
  return result;
}
