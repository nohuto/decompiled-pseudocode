/*
 * XREFs of ZwWaitHighEventPair @ 0x180095470
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwWaitHighEventPair(HANDLE EventPairHandle)
{
  NTSTATUS result; // eax

  result = 439;
  __asm { syscall; Low latency system call }
  return result;
}
