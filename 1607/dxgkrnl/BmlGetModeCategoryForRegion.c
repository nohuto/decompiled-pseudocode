/*
 * XREFs of BmlGetModeCategoryForRegion @ 0x1C00BFE9C
 * Callers:
 *     BmlCompareSourceModesWithMonitors @ 0x1C00BFD08 (BmlCompareSourceModesWithMonitors.c)
 *     BmlGetRecommendedContentSizeForPath @ 0x1C01ABAA4 (BmlGetRecommendedContentSizeForPath.c)
 * Callees:
 *     ?BmlCompareModeExtents@@YA?AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z @ 0x1C00C01A8 (-BmlCompareModeExtents@@YA-AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z.c)
 */

__int64 __fastcall BmlGetModeCategoryForRegion(__int64 a1, __int64 a2)
{
  _DWORD *v2; // r10
  char v3; // r11
  bool v4; // cf

  if ( (unsigned int)BmlCompareModeExtents(a1, a2) != 1 )
  {
    if ( !v3 )
    {
      v4 = *v2 < 0x400u;
      if ( *v2 != 1024 )
      {
LABEL_4:
        if ( v4 || v2[1] < 0x300u )
          return 2LL;
        return 3LL;
      }
      if ( v2[1] != 768 )
      {
        v4 = 0;
        goto LABEL_4;
      }
    }
    return 3LL;
  }
  return 1LL;
}
