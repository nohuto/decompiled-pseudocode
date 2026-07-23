/*
 * XREFs of ZwSetLowWaitHighEventPair @ 0x180095190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetLowWaitHighEventPair(HANDLE EventPairHandle)
{
  NTSTATUS result; // eax

  result = 393;
  __asm { syscall; Low latency system call }
  return result;
}
