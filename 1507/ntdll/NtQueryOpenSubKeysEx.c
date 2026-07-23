/*
 * XREFs of NtQueryOpenSubKeysEx @ 0x180094CE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtQueryOpenSubKeysEx(
        POBJECT_ATTRIBUTES TargetKey,
        ULONG BufferLength,
        PVOID Buffer,
        PULONG RequiredSize)
{
  NTSTATUS result; // eax

  result = 318;
  __asm { syscall; Low latency system call }
  return result;
}
