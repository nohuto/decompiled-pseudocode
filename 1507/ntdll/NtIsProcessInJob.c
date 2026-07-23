/*
 * XREFs of NtIsProcessInJob @ 0x180093DF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtIsProcessInJob(HANDLE ProcessHandle, HANDLE JobHandle)
{
  NTSTATUS result; // eax

  result = 79;
  __asm { syscall; Low latency system call }
  return result;
}
