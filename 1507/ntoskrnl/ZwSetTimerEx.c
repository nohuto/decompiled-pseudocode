/*
 * XREFs of ZwSetTimerEx @ 0x140182250
 * Callers:
 *     VerifierZwSetTimerEx @ 0x140742634 (VerifierZwSetTimerEx.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetTimerEx(
        HANDLE TimerHandle,
        TIMER_SET_INFORMATION_CLASS TimerSetInformationClass,
        PVOID TimerSetInformation,
        ULONG TimerSetInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TimerHandle);
}
