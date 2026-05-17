/*
 * XREFs of ZwCancelWaitCompletionPacket @ 0x1800A7610
 * Callers:
 *     TppCancelWait @ 0x18003BE78 (TppCancelWait.c)
 *     TppSingleTimerExpiration @ 0x18003CC28 (TppSingleTimerExpiration.c)
 * Callees:
 *     <none>
 */

__int64 ZwCancelWaitCompletionPacket()
{
  __int64 result; // rax

  result = 144LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
