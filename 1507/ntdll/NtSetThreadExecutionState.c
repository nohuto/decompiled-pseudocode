/*
 * XREFs of NtSetThreadExecutionState @ 0x180095210
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtSetThreadExecutionState(EXECUTION_STATE NewFlags, EXECUTION_STATE *PreviousFlags)
{
  NTSTATUS result; // eax

  result = 401;
  __asm { syscall; Low latency system call }
  return result;
}
