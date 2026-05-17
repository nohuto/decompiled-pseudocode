/*
 * XREFs of ZwQueryTimerResolution @ 0x180094D80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwQueryTimerResolution()
{
  __int64 result; // rax

  result = 328LL;
  __asm { syscall; Low latency system call }
  return result;
}
