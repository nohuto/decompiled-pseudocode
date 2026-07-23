/*
 * XREFs of NtSetTimerResolution @ 0x180095240
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtSetTimerResolution(ULONG DesiredTime, BOOLEAN SetResolution, PULONG ActualTime)
{
  NTSTATUS result; // eax

  result = 404;
  __asm { syscall; Low latency system call }
  return result;
}
