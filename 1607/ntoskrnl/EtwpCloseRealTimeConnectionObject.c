/*
 * XREFs of EtwpCloseRealTimeConnectionObject @ 0x140493608
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpCloseRealTimeConnectionObject(__int64 a1, __int64 a2)
{
  return EtwpRealtimeDisconnectConsumer(a2);
}
