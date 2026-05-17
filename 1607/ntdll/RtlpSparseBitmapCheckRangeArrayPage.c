/*
 * XREFs of RtlpSparseBitmapCheckRangeArrayPage @ 0x18004FE58
 * Callers:
 *     RtlpSparseBitmapCtxPrepareRanges @ 0x18004FA10 (RtlpSparseBitmapCtxPrepareRanges.c)
 *     RtlpSparseBitmapCtxUpdateBitRanges @ 0x18004FAC4 (RtlpSparseBitmapCtxUpdateBitRanges.c)
 *     RtlSparseBitmapCtxCheckBitsInternal @ 0x18004FCB4 (RtlSparseBitmapCtxCheckBitsInternal.c)
 *     RtlSparseBitmapCtxAllocateRange @ 0x180050F80 (RtlSparseBitmapCtxAllocateRange.c)
 *     RtlSparseBitmapCtxCleanup @ 0x180100440 (RtlSparseBitmapCtxCleanup.c)
 *     RtlSparseBitmapCtxCountBitsSet @ 0x1801004E0 (RtlSparseBitmapCtxCountBitsSet.c)
 *     RtlSparseBitmapCtxMetadataForBit @ 0x180100680 (RtlSparseBitmapCtxMetadataForBit.c)
 *     RtlSparseBitmapCtxOrBitmap @ 0x180100760 (RtlSparseBitmapCtxOrBitmap.c)
 *     RtlSparseBitmapEnumerateBitmap @ 0x180100A90 (RtlSparseBitmapEnumerateBitmap.c)
 *     RtlpSparseBitmapCtxFindRunsInternal @ 0x18010123C (RtlpSparseBitmapCtxFindRunsInternal.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlpSparseBitmapCheckRangeArrayPage(__int64 a1, unsigned int a2)
{
  char v2; // r8

  v2 = 1;
  if ( (*(_BYTE *)(a1 + 72) & 2) != 0 )
    return _bittest(*(const signed __int32 **)(a1 + 24), a2 >> 9) != 0;
  return v2;
}
