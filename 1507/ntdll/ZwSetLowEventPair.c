/*
 * XREFs of ZwSetLowEventPair @ 0x180095180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetLowEventPair(HANDLE EventPairHandle)
{
  NTSTATUS result; // eax

  result = 392;
  __asm { syscall; Low latency system call }
  return result;
}
