/*
 * XREFs of NtWaitLowEventPair @ 0x180095480
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtWaitLowEventPair(HANDLE EventPairHandle)
{
  NTSTATUS result; // eax

  result = 440;
  __asm { syscall; Low latency system call }
  return result;
}
