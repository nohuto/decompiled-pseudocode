/*
 * XREFs of PpmPerfLatencySensitivityHintWorker @ 0x140133D48
 * Callers:
 *     <none>
 * Callees:
 *     PpmAcquireLock @ 0x1400ED5A0 (PpmAcquireLock.c)
 */

__int64 PpmPerfLatencySensitivityHintWorker()
{
  __int64 *i; // r8
  __int64 v1; // rcx
  int v2; // r9d

  PpmPerfLatencyBoostQueued = 0;
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  for ( i = (__int64 *)PpmPerfDomainHead; i != &PpmPerfDomainHead; i = (__int64 *)*i )
  {
    v1 = (unsigned int)KiProcessorIndexToNumberMappingTable[*(unsigned int *)(i[2] + 36)] >> 6;
    v2 = KiProcessorIndexToNumberMappingTable[*(unsigned int *)(i[2] + 36)] & 0x3F;
    if ( (unsigned __int16)PpmPerfDomainsToUpdate <= (unsigned int)v1 )
      LOWORD(PpmPerfDomainsToUpdate) = v1 + 1;
    qword_140320838[(unsigned int)v1] = qword_140320838[v1] | (1LL << v2);
  }
  return PpmCheckCustomRun(3LL);
}
