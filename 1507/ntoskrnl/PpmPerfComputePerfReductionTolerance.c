/*
 * XREFs of PpmPerfComputePerfReductionTolerance @ 0x14015D3AC
 * Callers:
 *     PpmInfoAdjustSetting @ 0x140500A2C (PpmInfoAdjustSetting.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmPerfComputePerfReductionTolerance(unsigned int a1)
{
  __int64 v1; // rdx

  v1 = 0LL;
  if ( a1 < 0x5F )
  {
    do
      v1 = (unsigned int)(v1 + 1);
    while ( a1 < PpmPerfReductionBoostPolicies[v1] );
  }
  return PpmPerfReductionOffsetPercent[v1];
}
