/*
 * XREFs of RtlpSparseBitmapCtxUnlockShared @ 0x140273BCC
 * Callers:
 *     ?StDmLazyRemoveStatePrepare@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAT_SM_PAGE_KEY@@@Z @ 0x140254E74 (-StDmLazyRemoveStatePrepare@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAT_SM_PAGE_KEY@@@Z.c)
 *     RtlpSparseBitmapCtxCheckRangeArray @ 0x140273248 (RtlpSparseBitmapCtxCheckRangeArray.c)
 *     RtlpSparseBitmapCtxFindNextBitInternal @ 0x140273334 (RtlpSparseBitmapCtxFindNextBitInternal.c)
 *     RtlpSparseBitmapCtxFindRunsInternal @ 0x1402737D8 (RtlpSparseBitmapCtxFindRunsInternal.c)
 *     RtlpSparseBitmapCtxUpdateBitRanges @ 0x140273C10 (RtlpSparseBitmapCtxUpdateBitRanges.c)
 * Callees:
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall RtlpSparseBitmapCtxUnlockShared(__int64 a1, volatile signed __int32 *a2, unsigned __int8 a3)
{
  __int64 result; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  result = *(unsigned int *)(a1 + 72);
  if ( (result & 4) == 0 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(a2, retaddr);
    }
    else
    {
      _InterlockedAnd(a2, 0xBFFFFFFF);
      _InterlockedDecrement(a2);
    }
    result = a3;
    __writecr8(a3);
  }
  return result;
}
