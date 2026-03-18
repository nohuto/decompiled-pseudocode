/*
 * XREFs of ZwCancelTimer @ 0x140151240
 * Callers:
 *     VfZwCancelTimer @ 0x1406D1854 (VfZwCancelTimer.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCancelTimer(HANDLE TimerHandle, PBOOLEAN CurrentState)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(TimerHandle, CurrentState, v2);
}
