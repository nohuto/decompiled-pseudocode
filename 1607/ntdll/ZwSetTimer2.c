/*
 * XREFs of ZwSetTimer2 @ 0x1800A9770
 * Callers:
 *     TppUpdateSubQueueTimer @ 0x18003C4AC (TppUpdateSubQueueTimer.c)
 *     TppTimerQueueExpiration @ 0x18003C870 (TppTimerQueueExpiration.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetTimer2(
        HANDLE TimerHandle,
        PLARGE_INTEGER DueTime,
        PLARGE_INTEGER Period,
        PT2_SET_PARAMETERS Parameters)
{
  NTSTATUS result; // eax

  result = 411;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
