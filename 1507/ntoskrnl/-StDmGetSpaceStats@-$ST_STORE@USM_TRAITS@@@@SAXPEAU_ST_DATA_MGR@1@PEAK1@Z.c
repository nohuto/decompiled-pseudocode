/*
 * XREFs of ?StDmGetSpaceStats@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAK1@Z @ 0x1401231B8
 * Callers:
 *     SmKmStoreDeleteWhenEmpty @ 0x14012A8A0 (SmKmStoreDeleteWhenEmpty.c)
 *     ?SmPickStoreForWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAPEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU1@@Z @ 0x14013FAF0 (-SmPickStoreForWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAPEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU1@@Z.c)
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x140144264 (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StMetaRegionsUpdate@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140255DF8 (-StMetaRegionsUpdate@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?SmStEtwFillStoreEvent@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_EVENT_DESCRIPTOR@@@Z @ 0x140259250 (-SmStEtwFillStoreEvent@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_EVENT_DESCRIPTOR@@@Z.c)
 *     SmpUpdateCacheStatsBucketIndex @ 0x1404F9788 (SmpUpdateCacheStatsBucketIndex.c)
 * Callees:
 *     <none>
 */

char __fastcall ST_STORE<SM_TRAITS>::StDmGetSpaceStats(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  int v3; // eax
  int *v4; // r9
  __int64 v5; // r10

  if ( a2 )
    *a2 = 0;
  if ( a3 )
    *a3 = 0;
  LOBYTE(v3) = -*(_BYTE *)(a1 + 128);
  v4 = (int *)(a1 + 1092);
  v5 = *(_BYTE *)(a1 + 128) != 0 ? 1 : 8;
  do
  {
    if ( a2 )
    {
      v3 = *(v4 - 1);
      *a2 += v3;
    }
    if ( a3 )
    {
      v3 = *v4;
      *a3 += *v4;
    }
    v4 += 2;
    --v5;
  }
  while ( v5 );
  return v3;
}
