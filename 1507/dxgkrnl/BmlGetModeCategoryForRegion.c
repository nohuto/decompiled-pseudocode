/*
 * XREFs of BmlGetModeCategoryForRegion @ 0x1C00996E8
 * Callers:
 *     BmlCompareSourceModesWithMonitors @ 0x1C00995C4 (BmlCompareSourceModesWithMonitors.c)
 *     BmlGetRecommendedContentSizeForPath @ 0x1C017E494 (BmlGetRecommendedContentSizeForPath.c)
 * Callees:
 *     ?BmlCompareModeExtents@@YA?AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z @ 0x1C0099738 (-BmlCompareModeExtents@@YA-AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z.c)
 */

__int64 __fastcall BmlGetModeCategoryForRegion(__int64 a1, __int64 a2)
{
  _DWORD *v2; // r10
  bool v3; // cf

  if ( (unsigned int)BmlCompareModeExtents(a1, a2) != 1 )
  {
    v3 = *v2 < 0x400u;
    if ( *v2 == 1024 )
    {
      if ( v2[1] == 768 )
        return 3LL;
      v3 = 0;
    }
    if ( v3 || v2[1] < 0x300u )
      return 2LL;
    return 3LL;
  }
  return 1LL;
}
