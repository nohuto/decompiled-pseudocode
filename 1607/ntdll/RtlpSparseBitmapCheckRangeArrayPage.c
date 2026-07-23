/*
 * XREFs of RtlpSparseBitmapCheckRangeArrayPage @ 0x18004FE48
 * Callers:
 *     RtlpSparseBitmapCtxPrepareRanges @ 0x18004FA00 (RtlpSparseBitmapCtxPrepareRanges.c)
 *     RtlpSparseBitmapCtxUpdateBitRanges @ 0x18004FAB4 (RtlpSparseBitmapCtxUpdateBitRanges.c)
 *     RtlSparseBitmapCtxCheckBitsInternal @ 0x18004FCA4 (RtlSparseBitmapCtxCheckBitsInternal.c)
 *     RtlSparseBitmapCtxAllocateRange @ 0x180050F70 (RtlSparseBitmapCtxAllocateRange.c)
 *     RtlSparseBitmapCtxCleanup @ 0x180100380 (RtlSparseBitmapCtxCleanup.c)
 *     RtlSparseBitmapCtxCountBitsSet @ 0x180100420 (RtlSparseBitmapCtxCountBitsSet.c)
 *     RtlSparseBitmapCtxMetadataForBit @ 0x1801005C0 (RtlSparseBitmapCtxMetadataForBit.c)
 *     RtlSparseBitmapCtxOrBitmap @ 0x1801006A0 (RtlSparseBitmapCtxOrBitmap.c)
 *     RtlSparseBitmapEnumerateBitmap @ 0x1801009D0 (RtlSparseBitmapEnumerateBitmap.c)
 *     RtlpSparseBitmapCtxFindRunsInternal @ 0x18010117C (RtlpSparseBitmapCtxFindRunsInternal.c)
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
