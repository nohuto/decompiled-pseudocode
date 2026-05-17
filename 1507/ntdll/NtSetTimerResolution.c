/*
 * XREFs of NtSetTimerResolution @ 0x180095240
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtSetTimerResolution()
{
  __int64 result; // rax

  result = 404LL;
  __asm { syscall; Low latency system call }
  return result;
}
