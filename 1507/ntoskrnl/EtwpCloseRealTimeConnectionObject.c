/*
 * XREFs of EtwpCloseRealTimeConnectionObject @ 0x14054D234
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpCloseRealTimeConnectionObject(__int64 a1, __int64 a2)
{
  return EtwpRealtimeDisconnectConsumer(a2);
}
