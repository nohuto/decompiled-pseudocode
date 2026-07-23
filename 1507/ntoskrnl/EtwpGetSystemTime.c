/*
 * XREFs of EtwpGetSystemTime @ 0x140017E6C
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
