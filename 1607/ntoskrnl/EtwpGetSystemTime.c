/*
 * XREFs of EtwpGetSystemTime @ 0x1400AB8E4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 EtwpGetSystemTime()
{
  return RtlGetSystemTimePrecise();
}
