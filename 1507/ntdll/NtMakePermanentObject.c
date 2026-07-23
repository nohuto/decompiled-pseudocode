/*
 * XREFs of NtMakePermanentObject @ 0x1800948D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtMakePermanentObject(HANDLE Handle)
{
  NTSTATUS result; // eax

  result = 253;
  __asm { syscall; Low latency system call }
  return result;
}
