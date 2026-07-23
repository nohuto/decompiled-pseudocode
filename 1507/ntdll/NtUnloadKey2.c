/*
 * XREFs of NtUnloadKey2 @ 0x1800953B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtUnloadKey2(POBJECT_ATTRIBUTES TargetKey, ULONG Flags)
{
  NTSTATUS result; // eax

  result = 427;
  __asm { syscall; Low latency system call }
  return result;
}
