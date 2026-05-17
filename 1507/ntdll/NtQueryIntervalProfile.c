/*
 * XREFs of NtQueryIntervalProfile @ 0x180094C80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtQueryIntervalProfile()
{
  __int64 result; // rax

  result = 312LL;
  __asm { syscall; Low latency system call }
  return result;
}
