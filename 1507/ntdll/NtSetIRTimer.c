/*
 * XREFs of NtSetIRTimer @ 0x180095080
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtSetIRTimer(HANDLE TimerHandle, PLARGE_INTEGER DueTime)
{
  NTSTATUS result; // eax

  result = 376;
  __asm { syscall; Low latency system call }
  return result;
}
