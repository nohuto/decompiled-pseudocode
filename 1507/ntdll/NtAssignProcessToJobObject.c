/*
 * XREFs of NtAssignProcessToJobObject @ 0x1800941B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtAssignProcessToJobObject(HANDLE JobHandle, HANDLE ProcessHandle)
{
  NTSTATUS result; // eax

  result = 139;
  __asm { syscall; Low latency system call }
  return result;
}
