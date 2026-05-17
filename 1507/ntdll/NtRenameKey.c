/*
 * XREFs of NtRenameKey @ 0x180094E80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall NtRenameKey(HANDLE KeyHandle, PUNICODE_STRING NewName)
{
  NTSTATUS result; // eax

  result = 344;
  __asm { syscall; Low latency system call }
  return result;
}
