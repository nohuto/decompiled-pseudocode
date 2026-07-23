/*
 * XREFs of NtDrawText @ 0x1800945D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtDrawText(PUNICODE_STRING Text)
{
  NTSTATUS result; // eax

  result = 205;
  __asm { syscall; Low latency system call }
  return result;
}
