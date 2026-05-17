/*
 * XREFs of RtlpSparseBitmapCtxLockShared @ 0x18004FE34
 * Callers:
 *     RtlpSparseBitmapCtxCheckRangeArray @ 0x18004FC28 (RtlpSparseBitmapCtxCheckRangeArray.c)
 *     RtlSparseBitmapCtxCheckBitsInternal @ 0x18004FCB4 (RtlSparseBitmapCtxCheckBitsInternal.c)
 *     RtlSparseBitmapCtxCountBitsSet @ 0x1801004E0 (RtlSparseBitmapCtxCountBitsSet.c)
 *     RtlSparseBitmapCtxFindSetRuns @ 0x1801005B0 (RtlSparseBitmapCtxFindSetRuns.c)
 *     RtlSparseBitmapCtxMetadataForBit @ 0x180100680 (RtlSparseBitmapCtxMetadataForBit.c)
 *     RtlSparseBitmapCtxOrBitmap @ 0x180100760 (RtlSparseBitmapCtxOrBitmap.c)
 *     RtlpSparseBitmapCtxFindNextBitInternal @ 0x180100CCC (RtlpSparseBitmapCtxFindNextBitInternal.c)
 *     RtlpSparseBitmapCtxFindRunsInternal @ 0x18010123C (RtlpSparseBitmapCtxFindRunsInternal.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180042650 (RtlAcquireSRWLockShared.c)
 */

__int64 __fastcall RtlpSparseBitmapCtxLockShared(__int64 a1, volatile signed __int64 *a2, __int64 a3, __int64 a4)
{
  if ( (*(_BYTE *)(a1 + 72) & 4) != 0 )
    return 1LL;
  RtlAcquireSRWLockShared(a2, (char *)a2, a3, a4);
  return 0LL;
}
