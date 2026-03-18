/*
 * XREFs of PpmPerfSelectDomainStates @ 0x1400E9F10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char PpmPerfSelectDomainStates()
{
  __int64 *i; // r9
  __int64 v1; // r10
  unsigned int v2; // eax
  __int64 v3; // r8
  unsigned int *v4; // rdx
  __int64 v6; // rcx
  unsigned int v7; // r8d
  __int64 v8; // rdx
  __int64 v9; // rcx

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
    {
      v6 = (unsigned int)KiProcessorIndexToNumberMappingTable[*(unsigned int *)(i[2] + 36)] >> 6;
      v7 = KiProcessorIndexToNumberMappingTable[*(unsigned int *)(i[2] + 36)] & 0x3F;
      if ( (unsigned __int16)PpmPerfDomainsToUpdate <= (unsigned int)v6 )
        LOWORD(PpmPerfDomainsToUpdate) = v6 + 1;
      v8 = 8 * v6 + 3278904;
      v9 = *(_QWORD *)(v8 + 0x140000000LL);
      _bittestandset64(&v9, v7);
      *(_QWORD *)(v8 + 0x140000000LL) = v9;
    }
  }
  return 1;
}
