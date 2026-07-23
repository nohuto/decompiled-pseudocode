/*
 * XREFs of ZwCancelWaitCompletionPacket @ 0x180094200
 * Callers:
 *     TppCancelWait @ 0x18003C930 (TppCancelWait.c)
 *     TppWaitTimerExpiration @ 0x18007746C (TppWaitTimerExpiration.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCancelWaitCompletionPacket(HANDLE WaitCompletionPacketHandle, BOOLEAN RemoveSignaledPacket)
{
  NTSTATUS result; // eax

  result = 144;
  __asm { syscall; Low latency system call }
  return result;
}
