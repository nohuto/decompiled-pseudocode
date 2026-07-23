/*
 * XREFs of ZwQueryTimerResolution @ 0x180094D80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryTimerResolution(PULONG MaximumTime, PULONG MinimumTime, PULONG CurrentTime)
{
  NTSTATUS result; // eax

  result = 328;
  __asm { syscall; Low latency system call }
  return result;
}
