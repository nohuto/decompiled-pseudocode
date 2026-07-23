/*
 * XREFs of ZwLoadKey2 @ 0x180094870
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwLoadKey2(POBJECT_ATTRIBUTES TargetKey, POBJECT_ATTRIBUTES SourceFile, ULONG Flags)
{
  NTSTATUS result; // eax

  result = 247;
  __asm { syscall; Low latency system call }
  return result;
}
