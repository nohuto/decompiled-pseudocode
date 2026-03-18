/*
 * XREFs of PpmPerfRemoveMaximumOverride @ 0x1406359CC
 * Callers:
 *     PopPerfBoostPowerRequest @ 0x14050CDD8 (PopPerfBoostPowerRequest.c)
 * Callees:
 *     PpmAcquireLock @ 0x140097354 (PpmAcquireLock.c)
 */

__int64 PpmPerfRemoveMaximumOverride()
{
  __int64 v0; // rcx

  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  PpmPerfMaxOverrideEnabled = 0;
  return PpmPerfUpdateDomains(v0);
}
