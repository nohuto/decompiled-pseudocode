/*
 * XREFs of ZwSetTimerEx @ 0x180095230
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetTimerEx(
        HANDLE TimerHandle,
        TIMER_SET_INFORMATION_CLASS TimerSetInformationClass,
        PVOID TimerSetInformation,
        ULONG TimerSetInformationLength)
{
  NTSTATUS result; // eax

  result = 403;
  __asm { syscall; Low latency system call }
  return result;
}
