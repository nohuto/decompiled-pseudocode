/*
 * XREFs of ZwEnumerateDriverEntries @ 0x180094600
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwEnumerateDriverEntries(PVOID Buffer, PULONG BufferLength)
{
  NTSTATUS result; // eax

  result = 208;
  __asm { syscall; Low latency system call }
  return result;
}
