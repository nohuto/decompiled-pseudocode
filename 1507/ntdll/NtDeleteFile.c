/*
 * XREFs of NtDeleteFile @ 0x180094540
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtDeleteFile(POBJECT_ATTRIBUTES ObjectAttributes)
{
  NTSTATUS result; // eax

  result = 196;
  __asm { syscall; Low latency system call }
  return result;
}
