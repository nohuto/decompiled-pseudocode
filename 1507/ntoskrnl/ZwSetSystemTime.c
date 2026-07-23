/*
 * XREFs of ZwSetSystemTime @ 0x1401821F0
 * Callers:
 *     ExpTimeZoneWork @ 0x1406EDCAC (ExpTimeZoneWork.c)
 *     VfZwSetSystemTime @ 0x140758220 (VfZwSetSystemTime.c)
 *     Phase1InitializationDiscard @ 0x1407D146C (Phase1InitializationDiscard.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetSystemTime(PLARGE_INTEGER SystemTime, PLARGE_INTEGER NewSystemTime)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SystemTime);
}
