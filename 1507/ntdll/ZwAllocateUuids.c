/*
 * XREFs of ZwAllocateUuids @ 0x180094020
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAllocateUuids(PULARGE_INTEGER Time, PULONG Range, PULONG Sequence, PCHAR Seed)
{
  NTSTATUS result; // eax

  result = 114;
  __asm { syscall; Low latency system call }
  return result;
}
