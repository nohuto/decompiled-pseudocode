/*
 * XREFs of EtwpGetSystemTime @ 0x1400F471C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
LARGE_INTEGER EtwpGetSystemTime(void)
{
  return RtlGetSystemTimePrecise();
}
