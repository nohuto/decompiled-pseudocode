/*
 * XREFs of PpmPerfUpdateDomains @ 0x1405B0DCC
 * Callers:
 *     PpmReapplyPerfPolicy @ 0x1405B09A4 (PpmReapplyPerfPolicy.c)
 * Callees:
 *     <none>
 */

void PpmPerfUpdateDomains()
{
  unsigned __int64 v0; // r9
  unsigned __int16 i; // r8
  unsigned __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx
  unsigned int v7; // r10d
  __int64 v8; // rdx
  __int64 v9; // rcx

  v0 = qword_140320998[0];
  for ( i = 0; ; v0 = qword_140320998[i] )
  {
    while ( v0 )
    {
      _BitScanForward64(&v2, v0);
      v0 &= ~(1LL << v2);
      v3 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * i + (unsigned __int8)v2];
      if ( (unsigned int)v3 >= (unsigned int)KeNumberProcessors_0 )
      {
        v4 = 0LL;
      }
      else
      {
        _mm_lfence();
        v4 = KiProcessorBlock[v3];
      }
      v5 = *(_QWORD *)(v4 + 24176);
      if ( v5 )
      {
        v6 = (unsigned int)KiProcessorIndexToNumberMappingTable[*(unsigned int *)(*(_QWORD *)(v5 + 16) + 36LL)] >> 6;
        v7 = KiProcessorIndexToNumberMappingTable[*(unsigned int *)(*(_QWORD *)(v5 + 16) + 36LL)] & 0x3F;
        if ( (unsigned __int16)PpmPerfDomainsToUpdate <= (unsigned int)v6 )
          LOWORD(PpmPerfDomainsToUpdate) = v6 + 1;
        v8 = (unsigned int)v6;
        v9 = qword_140320838[v6];
        _bittestandset64(&v9, v7);
        qword_140320838[v8] = v9;
      }
    }
    if ( ++i >= (unsigned int)LOWORD(PpmCheckRegistered[0]) )
      break;
  }
  PpmCheckApplyPerfConstraints(0);
}
