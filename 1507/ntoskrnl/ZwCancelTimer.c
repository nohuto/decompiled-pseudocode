/*
 * XREFs of ZwCancelTimer @ 0x14017FC10
 * Callers:
 *     VfZwCancelTimer @ 0x14075541C (VfZwCancelTimer.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCancelTimer(HANDLE TimerHandle, PBOOLEAN CurrentState)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TimerHandle);
}
