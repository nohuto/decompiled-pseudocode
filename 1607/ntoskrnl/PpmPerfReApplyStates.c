/*
 * XREFs of PpmPerfReApplyStates @ 0x140531D54
 * Callers:
 *     NtSetSystemPowerState @ 0x1403CF658 (NtSetSystemPowerState.c)
 * Callees:
 *     PpmAcquireLock @ 0x14000A0A8 (PpmAcquireLock.c)
 *     PpmUpdateProcessorPolicy @ 0x140545A2C (PpmUpdateProcessorPolicy.c)
 */

__int64 PpmPerfReApplyStates()
{
  __int64 i; // rax
  __int64 v1; // rcx

  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  for ( i = PpmPerfDomainHead; (__int64 *)i != &PpmPerfDomainHead; i = *(_QWORD *)i )
    *(_BYTE *)(i + 406) = 1;
  PpmUpdateProcessorPolicy(&PpmAllowedActions, 0LL);
  LOBYTE(v1) = 1;
  return PpmCheckApplyPerfConstraints(v1);
}
