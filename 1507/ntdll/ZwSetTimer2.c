/*
 * XREFs of ZwSetTimer2 @ 0x180095220
 * Callers:
 *     TppTimerQueueExpiration @ 0x18003CAA0 (TppTimerQueueExpiration.c)
 *     TppUpdateSubQueueTimer @ 0x18003D3C0 (TppUpdateSubQueueTimer.c)
 * Callees:
 *     <none>
 */

__int64 ZwSetTimer2()
{
  __int64 result; // rax

  result = 402LL;
  __asm { syscall; Low latency system call }
  return result;
}
