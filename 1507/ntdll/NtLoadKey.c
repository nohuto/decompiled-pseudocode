/*
 * XREFs of NtLoadKey @ 0x180094860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtLoadKey(POBJECT_ATTRIBUTES TargetKey, POBJECT_ATTRIBUTES SourceFile)
{
  NTSTATUS result; // eax

  result = 246;
  __asm { syscall; Low latency system call }
  return result;
}
