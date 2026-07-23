/*
 * XREFs of NtQueryDriverEntryOrder @ 0x180094BC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtQueryDriverEntryOrder(PULONG Ids, PULONG Count)
{
  NTSTATUS result; // eax

  result = 300;
  __asm { syscall; Low latency system call }
  return result;
}
