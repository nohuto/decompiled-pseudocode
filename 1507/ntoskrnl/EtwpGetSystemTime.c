/*
 * XREFs of EtwpGetSystemTime @ 0x140017E6C
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
