/*
 * XREFs of ZwCancelWaitCompletionPacket @ 0x180094200
 * Callers:
 *     TppCancelWait @ 0x18003C930 (TppCancelWait.c)
 *     TppWaitTimerExpiration @ 0x18007746C (TppWaitTimerExpiration.c)
 * Callees:
 *     <none>
 */

__int64 ZwCancelWaitCompletionPacket()
{
  __int64 result; // rax

  result = 144LL;
  __asm { syscall; Low latency system call }
  return result;
}
