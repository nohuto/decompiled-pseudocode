/*
 * XREFs of EtwpGetSystemTime @ 0x1400F471C
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
