/*
 * XREFs of KeIsEqualAffinityEx @ 0x140144778
 * Callers:
 *     PpmParkReportMask @ 0x1400D315C (PpmParkReportMask.c)
 *     KeIsSubsetAffinityEx @ 0x1401D3D04 (KeIsSubsetAffinityEx.c)
 *     PspSetEffectiveJobLimits @ 0x1404D53D0 (PspSetEffectiveJobLimits.c)
 *     PpmRegisterPerfStates @ 0x140569AC8 (PpmRegisterPerfStates.c)
 *     PpmHeteroDetectFavoredCores @ 0x14056ADB4 (PpmHeteroDetectFavoredCores.c)
 *     PpmHeteroComputeRelativePerformance @ 0x14056AF18 (PpmHeteroComputeRelativePerformance.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeIsEqualAffinityEx(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned __int16 v2; // r8
  unsigned __int16 *v4; // r9
  unsigned __int16 v5; // dx

  v2 = *a1;
  if ( *a1 < *a2 )
  {
    v4 = a2;
  }
  else
  {
    v4 = a1;
    v2 = *a2;
  }
  v5 = 0;
  if ( v2 )
  {
    while ( *(_QWORD *)&a1[4 * v5 + 4] == *(_QWORD *)&a2[4 * v5 + 4] )
    {
      if ( ++v5 >= v2 )
        goto LABEL_6;
    }
    return 0LL;
  }
  else
  {
LABEL_6:
    while ( v5 < *v4 )
    {
      if ( *(_QWORD *)&v4[4 * v5 + 4] )
        return 0LL;
      ++v5;
    }
    return 1LL;
  }
}
