/*
 * XREFs of PpmPerfReApplyStates @ 0x140566064
 * Callers:
 *     NtSetSystemPowerState @ 0x1403ED18C (NtSetSystemPowerState.c)
 * Callees:
 *     PpmAcquireLock @ 0x1400ED5A0 (PpmAcquireLock.c)
 *     PpmUpdateProcessorPolicy @ 0x140582208 (PpmUpdateProcessorPolicy.c)
 */

__int64 PpmPerfReApplyStates()
{
  __int64 *i; // r9
  __int64 v1; // rcx
  int v2; // edx
  __int64 v3; // rcx

  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  for ( i = (__int64 *)PpmPerfDomainHead; i != &PpmPerfDomainHead; i = (__int64 *)*i )
  {
    v1 = (unsigned int)KiProcessorIndexToNumberMappingTable[*(unsigned int *)(i[2] + 36)] >> 6;
    v2 = KiProcessorIndexToNumberMappingTable[*(unsigned int *)(i[2] + 36)] & 0x3F;
    if ( (unsigned __int16)PpmPerfDomainsToUpdate <= (unsigned int)v1 )
      LOWORD(PpmPerfDomainsToUpdate) = v1 + 1;
    qword_140320838[v1] |= 1LL << v2;
  }
  PpmUpdateProcessorPolicy(&PpmAllowedActions);
  LOBYTE(v3) = 1;
  return PpmCheckApplyPerfConstraints(v3);
}
