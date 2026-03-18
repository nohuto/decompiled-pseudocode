/*
 * XREFs of ZwSetSystemTime @ 0x14015CFA0
 * Callers:
 *     ExpTimeZoneWork @ 0x1406AD074 (ExpTimeZoneWork.c)
 *     Phase1InitializationDiscard @ 0x140794438 (Phase1InitializationDiscard.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetSystemTime(PLARGE_INTEGER SystemTime, PLARGE_INTEGER NewSystemTime)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(SystemTime, NewSystemTime, v2);
}
