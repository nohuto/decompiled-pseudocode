/*
 * XREFs of ZwSetTimer2 @ 0x1401538C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetTimer2(
        HANDLE TimerHandle,
        PLARGE_INTEGER DueTime,
        PLARGE_INTEGER Period,
        PT2_SET_PARAMETERS Parameters)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TimerHandle);
}
