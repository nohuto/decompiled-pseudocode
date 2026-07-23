/*
 * XREFs of RtlpSparseBitmapCtxUnlockShared @ 0x18004FE04
 * Callers:
 *     RtlpSparseBitmapCtxUpdateBitRanges @ 0x18004FAB4 (RtlpSparseBitmapCtxUpdateBitRanges.c)
 *     RtlpSparseBitmapCtxCheckRangeArray @ 0x18004FC18 (RtlpSparseBitmapCtxCheckRangeArray.c)
 *     RtlSparseBitmapCtxCheckBitsInternal @ 0x18004FCA4 (RtlSparseBitmapCtxCheckBitsInternal.c)
 *     RtlSparseBitmapCtxCountBitsSet @ 0x180100420 (RtlSparseBitmapCtxCountBitsSet.c)
 *     RtlSparseBitmapCtxFindSetRuns @ 0x1801004F0 (RtlSparseBitmapCtxFindSetRuns.c)
 *     RtlSparseBitmapCtxMetadataForBit @ 0x1801005C0 (RtlSparseBitmapCtxMetadataForBit.c)
 *     RtlSparseBitmapCtxOrBitmap @ 0x1801006A0 (RtlSparseBitmapCtxOrBitmap.c)
 *     RtlSparseBitmapCtxPrepareBits @ 0x1801007F0 (RtlSparseBitmapCtxPrepareBits.c)
 *     RtlpSparseBitmapCtxFindNextBitInternal @ 0x180100C0C (RtlpSparseBitmapCtxFindNextBitInternal.c)
 *     RtlpSparseBitmapCtxFindRunsInternal @ 0x18010117C (RtlpSparseBitmapCtxFindRunsInternal.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180042560 (RtlReleaseSRWLockShared.c)
 */

void __fastcall RtlpSparseBitmapCtxUnlockShared(__int64 a1, _RTL_SRWLOCK *a2)
{
  if ( (*(_BYTE *)(a1 + 72) & 4) == 0 )
    RtlReleaseSRWLockShared(a2);
}
