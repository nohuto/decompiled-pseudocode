/*
 * XREFs of ?StDmLazyRemoveStatePrepare@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAT_SM_PAGE_KEY@@@Z @ 0x140254E74
 * Callers:
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAK@Z @ 0x140141B00 (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAK@Z.c)
 * Callees:
 *     RtlpSparseBitmapCtxPrepareRanges @ 0x140273AF4 (RtlpSparseBitmapCtxPrepareRanges.c)
 *     RtlpSparseBitmapCtxUnlockShared @ 0x140273BCC (RtlpSparseBitmapCtxUnlockShared.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmLazyRemoveStatePrepare(__int64 a1, unsigned int *a2)
{
  __int64 v2; // rdi
  int v3; // ebx
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  v2 = a1 + 248;
  v3 = RtlpSparseBitmapCtxPrepareRanges(
         (int)a1 + 248,
         (unsigned int)&v5,
         ((unsigned __int64)*a2 >> 4) / *(unsigned int *)(a1 + 304),
         (*(unsigned int *)(a1 + 304) + ((unsigned __int64)*a2 >> 4)) / *(unsigned int *)(a1 + 304));
  if ( v3 >= 0 )
    v3 = 0;
  RtlpSparseBitmapCtxUnlockShared(v2, v2, v5);
  if ( v3 >= 0 )
    return 0;
  return (unsigned int)v3;
}
