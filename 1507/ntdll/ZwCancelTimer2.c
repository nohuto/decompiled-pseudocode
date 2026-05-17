/*
 * XREFs of ZwCancelTimer2 @ 0x1800941F0
 * Callers:
 *     TppUpdateSubQueueTimer @ 0x18003D3C0 (TppUpdateSubQueueTimer.c)
 * Callees:
 *     <none>
 */

__int64 ZwCancelTimer2()
{
  __int64 result; // rax

  result = 143LL;
  __asm { syscall; Low latency system call }
  return result;
}
