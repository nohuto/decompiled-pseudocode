/*
 * XREFs of PpmClearExitLatencySamplingPercentage @ 0x1401FF628
 * Callers:
 *     NtPowerInformation @ 0x14050189C (NtPowerInformation.c)
 * Callees:
 *     PpmAcquireLock @ 0x14000A0A8 (PpmAcquireLock.c)
 *     KeFlushProcessWriteBuffers @ 0x1400C67CC (KeFlushProcessWriteBuffers.c)
 */

LONG PpmClearExitLatencySamplingPercentage()
{
  signed __int32 v1[10]; // [rsp+0h] [rbp-28h] BYREF

  PpmAcquireLock(&PopFxSystemLatencyLock);
  PpmExitLatencySamplingPercentageSet = 0;
  PpmExitLatencySamplingPercentage = 0;
  _InterlockedOr(v1, 0);
  KeFlushProcessWriteBuffers(1);
  return PpmReleaseLock((__int64 *)&PopFxSystemLatencyLock);
}
