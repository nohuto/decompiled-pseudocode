/*
 * XREFs of PpmClearExitLatencySamplingPercentage @ 0x1401E6E54
 * Callers:
 *     NtPowerInformation @ 0x140452E2C (NtPowerInformation.c)
 * Callees:
 *     KeFlushProcessWriteBuffers @ 0x140095EE8 (KeFlushProcessWriteBuffers.c)
 *     PpmAcquireLock @ 0x140097354 (PpmAcquireLock.c)
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
