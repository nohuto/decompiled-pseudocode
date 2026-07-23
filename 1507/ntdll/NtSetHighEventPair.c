/*
 * XREFs of NtSetHighEventPair @ 0x180095060
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtSetHighEventPair(HANDLE EventPairHandle)
{
  NTSTATUS result; // eax

  result = 374;
  __asm { syscall; Low latency system call }
  return result;
}
