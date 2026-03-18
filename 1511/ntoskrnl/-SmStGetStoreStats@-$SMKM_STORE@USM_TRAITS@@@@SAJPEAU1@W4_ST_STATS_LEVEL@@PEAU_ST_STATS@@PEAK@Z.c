/*
 * XREFs of ?SmStGetStoreStats@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z @ 0x1400F826C
 * Callers:
 *     ?SmStGetDataInUseKb@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@@Z @ 0x1400F63C8 (-SmStGetDataInUseKb@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@@Z.c)
 *     ?SmpStoreMgrCallback@@YAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK_TYPE@@@Z @ 0x1400F8004 (-SmpStoreMgrCallback@@YAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK_TYPE@@@Z.c)
 *     SmpProcessQueryStoreStats @ 0x140207720 (SmpProcessQueryStoreStats.c)
 *     SmpCacheStatsCopy @ 0x140540650 (SmpCacheStatsCopy.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStGetStoreStats(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return ST_STORE<SM_TRAITS>::StGetStatsWorker(a1, a2, a3, a4);
}
