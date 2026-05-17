/*
 * XREFs of ZwSetHighWaitLowEventPair @ 0x180095070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwSetHighWaitLowEventPair()
{
  __int64 result; // rax

  result = 375LL;
  __asm { syscall; Low latency system call }
  return result;
}
