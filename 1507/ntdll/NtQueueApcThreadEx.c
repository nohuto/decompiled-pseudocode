/*
 * XREFs of NtQueueApcThreadEx @ 0x180094DB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtQueueApcThreadEx(
        HANDLE ThreadHandle,
        HANDLE ReserveHandle,
        PPS_APC_ROUTINE ApcRoutine,
        PVOID ApcArgument1,
        PVOID ApcArgument2,
        PVOID ApcArgument3)
{
  NTSTATUS result; // eax

  result = 331;
  __asm { syscall; Low latency system call }
  return result;
}
