/*
 * XREFs of NtTerminateJobObject @ 0x180095320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtTerminateJobObject()
{
  __int64 result; // rax

  result = 418LL;
  __asm { syscall; Low latency system call }
  return result;
}
