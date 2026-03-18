/*
 * XREFs of ?StDmLazyRemoveStateUpdate@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAT_SM_PAGE_KEY@@K@Z @ 0x140254EF0
 * Callers:
 *     ?StDmpSinglePageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_IO_PARAMS@1@PEAXPEAU_ST_PAGE_LOCATION@1@@Z @ 0x140140D78 (-StDmpSinglePageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1.c)
 * Callees:
 *     RtlpSparseBitmapCtxUpdateBitRanges @ 0x140273C10 (RtlpSparseBitmapCtxUpdateBitRanges.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmLazyRemoveStateUpdate(__int64 a1, unsigned int *a2, int a3, int a4)
{
  unsigned __int64 v5; // rdx
  int v6; // ecx

  v5 = (unsigned __int64)*a2 >> 4;
  v6 = a1 + 248;
  if ( !a3 )
    return RtlpSparseBitmapCtxUpdateBitRanges(v6, v5, 0, a4);
  RtlpSparseBitmapCtxUpdateBitRanges(v6, v5, a3, a4);
  return ST_STORE<SM_TRAITS>::StDmLazyWorkItemQueue(a1, a1 + 328);
}
