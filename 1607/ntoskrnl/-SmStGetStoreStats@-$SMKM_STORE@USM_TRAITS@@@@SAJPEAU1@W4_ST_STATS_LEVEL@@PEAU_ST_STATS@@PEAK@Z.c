/*
 * XREFs of ?SmStGetStoreStats@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z @ 0x1400032B8
 * Callers:
 *     ?SmStGetDataInUseKb@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@@Z @ 0x140003240 (-SmStGetDataInUseKb@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@@Z.c)
 *     SmpProcessQueryStoreStats @ 0x140135264 (SmpProcessQueryStoreStats.c)
 *     SmProcessCompressionInfoRequest @ 0x1403E4338 (SmProcessCompressionInfoRequest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStGetStoreStats(__int64 a1)
{
  return ST_STORE<SM_TRAITS>::StGetStatsWorker(a1, 0LL);
}
