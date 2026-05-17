/*
 * XREFs of ZwAssociateWaitCompletionPacket @ 0x1800A6230
 * Callers:
 *     TppInitializeTimerSubQueue @ 0x180007CA4 (TppInitializeTimerSubQueue.c)
 *     TppTimerQueueExpiration @ 0x18000AC60 (TppTimerQueueExpiration.c)
 *     TppSetupNextWait @ 0x18000B9E4 (TppSetupNextWait.c)
 * Callees:
 *     <none>
 */

__int64 ZwAssociateWaitCompletionPacket()
{
  __int64 result; // rax

  result = 140LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
