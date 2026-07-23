/*
 * XREFs of ZwAlertResumeThread @ 0x180093FC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlertResumeThread(HANDLE ThreadHandle, PULONG PreviousSuspendCount)
{
  NTSTATUS result; // eax

  result = 108;
  __asm { syscall; Low latency system call }
  return result;
}
