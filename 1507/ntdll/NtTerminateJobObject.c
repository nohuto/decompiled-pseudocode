/*
 * XREFs of NtTerminateJobObject @ 0x180095320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtTerminateJobObject(HANDLE JobHandle, NTSTATUS ExitStatus)
{
  NTSTATUS result; // eax

  result = 418;
  __asm { syscall; Low latency system call }
  return result;
}
