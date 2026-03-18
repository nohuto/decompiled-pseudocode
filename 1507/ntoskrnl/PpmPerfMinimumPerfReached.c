/*
 * XREFs of PpmPerfMinimumPerfReached @ 0x14011A534
 * Callers:
 *     PpmCheckMakeupSkippedChecks @ 0x1400E9574 (PpmCheckMakeupSkippedChecks.c)
 * Callees:
 *     <none>
 */

char PpmPerfMinimumPerfReached()
{
  unsigned __int64 v0; // r9
  char v1; // r10
  unsigned __int16 i; // r8
  unsigned __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rcx

  v0 = qword_1403208E8[0];
  v1 = 1;
  for ( i = 0; ; v0 = qword_1403208E8[i] )
  {
    while ( v0 )
    {
      _BitScanForward64(&v3, v0);
      v0 &= ~(1LL << v3);
      v4 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * i + (unsigned __int8)v3];
      if ( (unsigned int)v4 >= (unsigned int)KeNumberProcessors_0 )
      {
        v5 = 0LL;
      }
      else
      {
        _mm_lfence();
        v5 = KiProcessorBlock[v4];
      }
      if ( *(_DWORD *)(*(_QWORD *)(v5 + 24184) + 48LL) > *(_DWORD *)(*(_QWORD *)(v5 + 24176) + 360LL) )
        v1 = 0;
    }
    if ( ++i >= (unsigned int)(unsigned __int16)PpmPerfStatesRegistered )
      break;
  }
  return v1;
}
