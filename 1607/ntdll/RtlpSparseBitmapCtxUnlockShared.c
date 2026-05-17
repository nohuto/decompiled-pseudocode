/*
 * XREFs of RtlpSparseBitmapCtxUnlockShared @ 0x18004FE14
 * Callers:
 *     RtlpSparseBitmapCtxUpdateBitRanges @ 0x18004FAC4 (RtlpSparseBitmapCtxUpdateBitRanges.c)
 *     RtlpSparseBitmapCtxCheckRangeArray @ 0x18004FC28 (RtlpSparseBitmapCtxCheckRangeArray.c)
 *     RtlSparseBitmapCtxCheckBitsInternal @ 0x18004FCB4 (RtlSparseBitmapCtxCheckBitsInternal.c)
 *     RtlSparseBitmapCtxCountBitsSet @ 0x1801004E0 (RtlSparseBitmapCtxCountBitsSet.c)
 *     RtlSparseBitmapCtxFindSetRuns @ 0x1801005B0 (RtlSparseBitmapCtxFindSetRuns.c)
 *     RtlSparseBitmapCtxMetadataForBit @ 0x180100680 (RtlSparseBitmapCtxMetadataForBit.c)
 *     RtlSparseBitmapCtxOrBitmap @ 0x180100760 (RtlSparseBitmapCtxOrBitmap.c)
 *     RtlSparseBitmapCtxPrepareBits @ 0x1801008B0 (RtlSparseBitmapCtxPrepareBits.c)
 *     RtlpSparseBitmapCtxFindNextBitInternal @ 0x180100CCC (RtlpSparseBitmapCtxFindNextBitInternal.c)
 *     RtlpSparseBitmapCtxFindRunsInternal @ 0x18010123C (RtlpSparseBitmapCtxFindRunsInternal.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180042570 (RtlReleaseSRWLockShared.c)
 */

unsigned __int64 __fastcall RtlpSparseBitmapCtxUnlockShared(__int64 a1, volatile signed __int64 *a2)
{
  unsigned __int64 result; // rax

  if ( (*(_BYTE *)(a1 + 72) & 4) == 0 )
    return RtlReleaseSRWLockShared(a2);
  return result;
}
