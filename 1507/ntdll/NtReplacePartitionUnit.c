/*
 * XREFs of NtReplacePartitionUnit @ 0x180094EB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtReplacePartitionUnit(
        PUNICODE_STRING TargetInstancePath,
        PUNICODE_STRING SpareInstancePath,
        ULONG Flags)
{
  NTSTATUS result; // eax

  result = 347;
  __asm { syscall; Low latency system call }
  return result;
}
