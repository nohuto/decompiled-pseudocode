/*
 * XREFs of ZwSetSystemTime @ 0x140153880
 * Callers:
 *     ExpTimeZoneWork @ 0x14066A6D4 (ExpTimeZoneWork.c)
 *     VfZwSetSystemTime @ 0x1406D4658 (VfZwSetSystemTime.c)
 *     Phase1InitializationDiscard @ 0x1407645E8 (Phase1InitializationDiscard.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetSystemTime(PLARGE_INTEGER SystemTime, PLARGE_INTEGER NewSystemTime)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SystemTime);
}
