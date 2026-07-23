/*
 * XREFs of EtwpGetSystemTime @ 0x1400A9E4C
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
