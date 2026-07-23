/*
 * XREFs of ?StDmPickRandomRegion@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@@Z @ 0x14021EC84
 * Callers:
 *     ?StDmEtaRefresh@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x14021E2F4 (-StDmEtaRefresh@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 * Callees:
 *     ?StStagingRegionFind@?$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_STAGING_REGION@1@PEAU_ST_DATA_MGR@1@K@Z @ 0x14021FA20 (-StStagingRegionFind@-$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_STAGING_REGION@1@PEAU_ST_DATA_MGR@1@K@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmPickRandomRegion(__int64 a1)
{
  __int64 v1; // r10
  unsigned int v2; // ecx
  unsigned int v4; // et2
  __int64 v5; // rdx
  unsigned int v6; // ecx
  int v7; // r8d
  unsigned int v8; // r9d
  unsigned int v9; // r11d

  v1 = a1;
  v2 = *(_DWORD *)(a1 + 856);
  if ( v2 )
  {
    v4 = (unsigned int)(__rdtsc() >> 4) % v2;
    v5 = 0xFFFFFFFFLL;
    v6 = v4 + 1;
    if ( v4 != -1 )
      v5 = v6 - 1;
    do
    {
      if ( !ST_STORE<SM_TRAITS>::StStagingRegionFind(v1, v5) )
        break;
      v5 = (unsigned int)(v5 + 1);
      if ( (_DWORD)v5 == *(_DWORD *)(v1 + 788) )
        v5 = v9;
      ++v8;
    }
    while ( v8 < 7 );
    if ( v8 >= 7 )
      LODWORD(v5) = v7;
    return (unsigned int)v5;
  }
  else
  {
    return (unsigned int)-1;
  }
}
