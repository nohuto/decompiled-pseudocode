/*
 * XREFs of PpmPerfReApplyStates @ 0x1404F8CB0
 * Callers:
 *     NtSetSystemPowerState @ 0x1403A3E04 (NtSetSystemPowerState.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140076CC0 (KeAddProcessorAffinityEx.c)
 *     PpmAcquireLock @ 0x140097354 (PpmAcquireLock.c)
 *     PpmUpdateProcessorPolicy @ 0x14050AB34 (PpmUpdateProcessorPolicy.c)
 */

__int64 PpmPerfReApplyStates()
{
  __int64 *i; // rbx
  __int64 v1; // rcx

  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  for ( i = (__int64 *)PpmPerfDomainHead; i != &PpmPerfDomainHead; i = (__int64 *)*i )
    KeAddProcessorAffinityEx(PpmPerfDomainsToUpdate, *(_DWORD *)(i[2] + 36));
  PpmUpdateProcessorPolicy(&PpmAllowedActions);
  LOBYTE(v1) = 1;
  return PpmCheckApplyPerfConstraints(v1);
}
