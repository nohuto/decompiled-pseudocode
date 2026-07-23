/*
 * XREFs of NtReplaceKey @ 0x180094EA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtReplaceKey(POBJECT_ATTRIBUTES NewFile, HANDLE TargetHandle, POBJECT_ATTRIBUTES OldFile)
{
  NTSTATUS result; // eax

  result = 346;
  __asm { syscall; Low latency system call }
  return result;
}
