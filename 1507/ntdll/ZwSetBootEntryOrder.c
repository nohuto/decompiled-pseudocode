/*
 * XREFs of ZwSetBootEntryOrder @ 0x180094FC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetBootEntryOrder(PULONG Ids, ULONG Count)
{
  NTSTATUS result; // eax

  result = 364;
  __asm { syscall; Low latency system call }
  return result;
}
