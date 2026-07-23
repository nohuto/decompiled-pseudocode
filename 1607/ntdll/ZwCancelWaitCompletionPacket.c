/*
 * XREFs of ZwCancelWaitCompletionPacket @ 0x1800A7610
 * Callers:
 *     TppCancelWait @ 0x18003BE68 (TppCancelWait.c)
 *     TppSingleTimerExpiration @ 0x18003CC18 (TppSingleTimerExpiration.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCancelWaitCompletionPacket(HANDLE WaitCompletionPacketHandle, BOOLEAN RemoveSignaledPacket)
{
  NTSTATUS result; // eax

  result = 144;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
