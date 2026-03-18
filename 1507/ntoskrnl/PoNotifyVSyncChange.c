/*
 * XREFs of PoNotifyVSyncChange @ 0x1400ED1EC
 * Callers:
 *     <none>
 * Callees:
 *     PoFxSendSystemLatencyUpdate @ 0x1400ED21C (PoFxSendSystemLatencyUpdate.c)
 *     PpmAcquireLock @ 0x1400ED5A0 (PpmAcquireLock.c)
 */

int __fastcall PoNotifyVSyncChange(char a1)
{
  PpmAcquireLock(&PopFxSystemLatencyLock);
  PopFxVSyncEnabled = a1;
  PoFxSendSystemLatencyUpdate();
  return PpmReleaseLock(&PopFxSystemLatencyLock);
}
