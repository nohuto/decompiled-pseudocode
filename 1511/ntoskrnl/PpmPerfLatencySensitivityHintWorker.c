/*
 * XREFs of PpmPerfLatencySensitivityHintWorker @ 0x140107594
 * Callers:
 *     <none>
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140076CC0 (KeAddProcessorAffinityEx.c)
 *     PpmAcquireLock @ 0x140097354 (PpmAcquireLock.c)
 */

__int64 PpmPerfLatencySensitivityHintWorker()
{
  __int64 *i; // rbx

  PpmPerfLatencyBoostQueued = 0;
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  for ( i = (__int64 *)PpmPerfDomainHead; i != &PpmPerfDomainHead; i = (__int64 *)*i )
    KeAddProcessorAffinityEx(PpmPerfDomainsToUpdate, *(_DWORD *)(i[2] + 36));
  return PpmCheckCustomRun(3);
}
