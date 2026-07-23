/*
 * XREFs of ZwQueryBootEntryOrder @ 0x180094B80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryBootEntryOrder(PULONG Ids, PULONG Count)
{
  NTSTATUS result; // eax

  result = 296;
  __asm { syscall; Low latency system call }
  return result;
}
