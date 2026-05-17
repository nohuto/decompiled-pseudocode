/*
 * XREFs of ZwAssociateWaitCompletionPacket @ 0x1800941C0
 * Callers:
 *     TppTimerQueueExpiration @ 0x18003CAA0 (TppTimerQueueExpiration.c)
 *     TppSetupNextWait @ 0x18003D670 (TppSetupNextWait.c)
 *     TppInitializeTimerSubQueue @ 0x18007CEC8 (TppInitializeTimerSubQueue.c)
 * Callees:
 *     <none>
 */

__int64 ZwAssociateWaitCompletionPacket()
{
  __int64 result; // rax

  result = 140LL;
  __asm { syscall; Low latency system call }
  return result;
}
