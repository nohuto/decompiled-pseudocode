/*
 * XREFs of ZwSetSystemTime @ 0x14015D510
 * Callers:
 *     ExpTimeZoneWork @ 0x1406AD1AC (ExpTimeZoneWork.c)
 *     Phase1InitializationDiscard @ 0x140794438 (Phase1InitializationDiscard.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetSystemTime(PLARGE_INTEGER SystemTime, PLARGE_INTEGER NewSystemTime)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SystemTime);
}
