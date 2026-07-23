/*
 * XREFs of NtUnloadKey @ 0x1800953A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtUnloadKey(POBJECT_ATTRIBUTES TargetKey)
{
  NTSTATUS result; // eax

  result = 426;
  __asm { syscall; Low latency system call }
  return result;
}
