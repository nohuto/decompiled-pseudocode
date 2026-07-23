/*
 * XREFs of ZwSetTimer @ 0x14017FC30
 * Callers:
 *     VfZwSetTimer @ 0x140758278 (VfZwSetTimer.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetTimer(
        HANDLE TimerHandle,
        PLARGE_INTEGER DueTime,
        PTIMER_APC_ROUTINE TimerApcRoutine,
        PVOID TimerContext,
        BOOLEAN ResumeTimer,
        LONG Period,
        PBOOLEAN PreviousState)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TimerHandle);
}
