/*
 * XREFs of NtDeleteBootEntry @ 0x180094520
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtDeleteBootEntry(ULONG Id)
{
  NTSTATUS result; // eax

  result = 194;
  __asm { syscall; Low latency system call }
  return result;
}
