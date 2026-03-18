/*
 * XREFs of PoNotifyVSyncChange @ 0x14000A270
 * Callers:
 *     <none>
 * Callees:
 *     PoFxSendSystemLatencyUpdate @ 0x14000A2A0 (PoFxSendSystemLatencyUpdate.c)
 *     PpmAcquireLock @ 0x14000A528 (PpmAcquireLock.c)
 */

__int64 __fastcall PoNotifyVSyncChange(char a1)
{
  PpmAcquireLock(&PopFxSystemLatencyLock);
  PopFxVSyncEnabled = a1;
  PoFxSendSystemLatencyUpdate();
  return PpmReleaseLock(&PopFxSystemLatencyLock);
}
