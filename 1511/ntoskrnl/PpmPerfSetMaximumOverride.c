/*
 * XREFs of PpmPerfSetMaximumOverride @ 0x1406359EC
 * Callers:
 *     PopPerfBoostPowerRequest @ 0x14050CDD8 (PopPerfBoostPowerRequest.c)
 * Callees:
 *     PpmAcquireLock @ 0x140097354 (PpmAcquireLock.c)
 */

__int64 PpmPerfSetMaximumOverride()
{
  __int64 v0; // rcx

  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  PpmPerfMaxOverrideEnabled = 1;
  return PpmPerfUpdateDomains(v0);
}
