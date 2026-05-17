/*
 * XREFs of NtAssignProcessToJobObject @ 0x1800941B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtAssignProcessToJobObject()
{
  __int64 result; // rax

  result = 139LL;
  __asm { syscall; Low latency system call }
  return result;
}
