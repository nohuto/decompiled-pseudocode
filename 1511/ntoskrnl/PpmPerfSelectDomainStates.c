/*
 * XREFs of PpmPerfSelectDomainStates @ 0x140076BB0
 * Callers:
 *     <none>
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140076CC0 (KeAddProcessorAffinityEx.c)
 */

char PpmPerfSelectDomainStates()
{
  __int64 *i; // rbx
  __int64 v1; // r9
  unsigned int v2; // eax
  __int64 v3; // r8
  unsigned int *v4; // rdx

  for ( i = (__int64 *)PpmPerfDomainHead; i != &PpmPerfDomainHead; i = (__int64 *)*i )
  {
    v1 = *(_QWORD *)(i[2] + 24176);
    v2 = 1;
    v3 = *(unsigned int *)(v1 + 192);
    if ( (_DWORD)v3 )
    {
      v4 = (unsigned int *)(*(_QWORD *)(v1 + 200) + 48LL);
      do
      {
        if ( *v4 > v2 )
          v2 = *v4;
        v4 += 22;
        --v3;
      }
      while ( v3 );
    }
    *(_DWORD *)(v1 + 344) = v2;
    if ( v2 != *(_DWORD *)(v1 + 336) )
      KeAddProcessorAffinityEx(PpmPerfDomainsToUpdate, *(unsigned int *)(i[2] + 36));
  }
  return 1;
}
