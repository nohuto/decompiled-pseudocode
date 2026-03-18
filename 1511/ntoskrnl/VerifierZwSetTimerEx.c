/*
 * XREFs of VerifierZwSetTimerEx @ 0x1406C0DF4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierZwSetTimerEx(
        HANDLE TimerHandle,
        TIMER_SET_INFORMATION_CLASS TimerSetInformationClass,
        PVOID TimerSetInformation,
        ULONG TimerSetInformationLength)
{
  return pXdvZwSetTimerEx(TimerHandle, TimerSetInformationClass, TimerSetInformation, TimerSetInformationLength);
}
