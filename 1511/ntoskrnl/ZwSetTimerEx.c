/*
 * XREFs of ZwSetTimerEx @ 0x1401538E0
 * Callers:
 *     VerifierZwSetTimerEx @ 0x1406C0DF4 (VerifierZwSetTimerEx.c)
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
