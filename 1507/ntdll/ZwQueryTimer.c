/*
 * XREFs of ZwQueryTimer @ 0x180093C80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryTimer(
        HANDLE TimerHandle,
        TIMER_INFORMATION_CLASS TimerInformationClass,
        PVOID TimerInformation,
        ULONG TimerInformationLength,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 56;
  __asm { syscall; Low latency system call }
  return result;
}
