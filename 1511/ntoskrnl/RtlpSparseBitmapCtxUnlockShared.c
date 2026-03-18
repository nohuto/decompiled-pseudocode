/*
 * XREFs of RtlpSparseBitmapCtxUnlockShared @ 0x140223C08
 * Callers:
 *     ?StDmLazyRemoveStatePrepare@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAT_SM_PAGE_KEY@@@Z @ 0x140205BE4 (-StDmLazyRemoveStatePrepare@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAT_SM_PAGE_KEY@@@Z.c)
 *     RtlpSparseBitmapCtxCheckRangeArray @ 0x140223370 (RtlpSparseBitmapCtxCheckRangeArray.c)
 *     RtlpSparseBitmapCtxFindNextBitInternal @ 0x14022345C (RtlpSparseBitmapCtxFindNextBitInternal.c)
 *     RtlpSparseBitmapCtxFindRunsInternal @ 0x140223900 (RtlpSparseBitmapCtxFindRunsInternal.c)
 *     RtlpSparseBitmapCtxUpdateBitRanges @ 0x140223C28 (RtlpSparseBitmapCtxUpdateBitRanges.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x14000A410 (ExReleaseSpinLockShared.c)
 */

void __fastcall RtlpSparseBitmapCtxUnlockShared(__int64 a1, volatile LONG *a2, KIRQL a3)
{
  if ( (*(_DWORD *)(a1 + 72) & 4) == 0 )
    ExReleaseSpinLockShared(a2, a3);
}
