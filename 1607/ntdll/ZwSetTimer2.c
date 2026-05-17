/*
 * XREFs of ZwSetTimer2 @ 0x1800A9770
 * Callers:
 *     TppUpdateSubQueueTimer @ 0x18003C4BC (TppUpdateSubQueueTimer.c)
 *     TppTimerQueueExpiration @ 0x18003C880 (TppTimerQueueExpiration.c)
 * Callees:
 *     <none>
 */

__int64 ZwSetTimer2()
{
  __int64 result; // rax

  result = 411LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
