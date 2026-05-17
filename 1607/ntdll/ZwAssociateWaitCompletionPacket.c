/*
 * XREFs of ZwAssociateWaitCompletionPacket @ 0x1800A7590
 * Callers:
 *     TppSetupNextWait @ 0x18003C714 (TppSetupNextWait.c)
 *     TppTimerQueueExpiration @ 0x18003C880 (TppTimerQueueExpiration.c)
 *     TppInitializeTimerSubQueue @ 0x180073350 (TppInitializeTimerSubQueue.c)
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
