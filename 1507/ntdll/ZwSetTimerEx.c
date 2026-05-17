/*
 * XREFs of ZwSetTimerEx @ 0x180095230
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwSetTimerEx()
{
  __int64 result; // rax

  result = 403LL;
  __asm { syscall; Low latency system call }
  return result;
}
