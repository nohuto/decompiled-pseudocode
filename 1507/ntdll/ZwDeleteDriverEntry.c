/*
 * XREFs of ZwDeleteDriverEntry @ 0x180094530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwDeleteDriverEntry(ULONG Id)
{
  NTSTATUS result; // eax

  result = 195;
  __asm { syscall; Low latency system call }
  return result;
}
