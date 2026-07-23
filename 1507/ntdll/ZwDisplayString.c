/*
 * XREFs of ZwDisplayString @ 0x1800945C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwDisplayString(PUNICODE_STRING String)
{
  NTSTATUS result; // eax

  result = 204;
  __asm { syscall; Low latency system call }
  return result;
}
