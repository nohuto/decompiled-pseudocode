/*
 * XREFs of NtSetDriverEntryOrder @ 0x180095040
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtSetDriverEntryOrder(PULONG Ids, ULONG Count)
{
  NTSTATUS result; // eax

  result = 372;
  __asm { syscall; Low latency system call }
  return result;
}
