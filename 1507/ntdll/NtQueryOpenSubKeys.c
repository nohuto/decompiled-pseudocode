/*
 * XREFs of NtQueryOpenSubKeys @ 0x180094CD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtQueryOpenSubKeys(POBJECT_ATTRIBUTES TargetKey, PULONG HandleCount)
{
  NTSTATUS result; // eax

  result = 317;
  __asm { syscall; Low latency system call }
  return result;
}
