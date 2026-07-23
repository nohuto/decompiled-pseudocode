/*
 * XREFs of ZwSetHighWaitLowEventPair @ 0x180095070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetHighWaitLowEventPair(HANDLE EventPairHandle)
{
  NTSTATUS result; // eax

  result = 375;
  __asm { syscall; Low latency system call }
  return result;
}
