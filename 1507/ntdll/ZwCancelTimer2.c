/*
 * XREFs of ZwCancelTimer2 @ 0x1800941F0
 * Callers:
 *     TppUpdateSubQueueTimer @ 0x18003D3C0 (TppUpdateSubQueueTimer.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCancelTimer2(HANDLE TimerHandle, PT2_CANCEL_PARAMETERS Parameters)
{
  NTSTATUS result; // eax

  result = 143;
  __asm { syscall; Low latency system call }
  return result;
}
