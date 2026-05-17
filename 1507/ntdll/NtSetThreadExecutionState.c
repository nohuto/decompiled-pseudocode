/*
 * XREFs of NtSetThreadExecutionState @ 0x180095210
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtSetThreadExecutionState()
{
  __int64 result; // rax

  result = 401LL;
  __asm { syscall; Low latency system call }
  return result;
}
