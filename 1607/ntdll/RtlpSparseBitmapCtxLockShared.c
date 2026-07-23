/*
 * XREFs of RtlpSparseBitmapCtxLockShared @ 0x18004FE24
 * Callers:
 *     RtlpSparseBitmapCtxCheckRangeArray @ 0x18004FC18 (RtlpSparseBitmapCtxCheckRangeArray.c)
 *     RtlSparseBitmapCtxCheckBitsInternal @ 0x18004FCA4 (RtlSparseBitmapCtxCheckBitsInternal.c)
 *     RtlSparseBitmapCtxCountBitsSet @ 0x180100420 (RtlSparseBitmapCtxCountBitsSet.c)
 *     RtlSparseBitmapCtxFindSetRuns @ 0x1801004F0 (RtlSparseBitmapCtxFindSetRuns.c)
 *     RtlSparseBitmapCtxMetadataForBit @ 0x1801005C0 (RtlSparseBitmapCtxMetadataForBit.c)
 *     RtlSparseBitmapCtxOrBitmap @ 0x1801006A0 (RtlSparseBitmapCtxOrBitmap.c)
 *     RtlpSparseBitmapCtxFindNextBitInternal @ 0x180100C0C (RtlpSparseBitmapCtxFindNextBitInternal.c)
 *     RtlpSparseBitmapCtxFindRunsInternal @ 0x18010117C (RtlpSparseBitmapCtxFindRunsInternal.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180042640 (RtlAcquireSRWLockShared.c)
 */

__int64 __fastcall RtlpSparseBitmapCtxLockShared(__int64 a1, _RTL_SRWLOCK *a2)
{
  if ( (*(_BYTE *)(a1 + 72) & 4) != 0 )
    return 1LL;
  RtlAcquireSRWLockShared(a2);
  return 0LL;
}
