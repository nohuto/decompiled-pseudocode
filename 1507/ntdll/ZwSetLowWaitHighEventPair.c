/*
 * XREFs of ZwSetLowWaitHighEventPair @ 0x180095190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwSetLowWaitHighEventPair()
{
  __int64 result; // rax

  result = 393LL;
  __asm { syscall; Low latency system call }
  return result;
}
