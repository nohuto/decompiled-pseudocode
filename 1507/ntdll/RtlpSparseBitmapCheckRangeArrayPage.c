/*
 * XREFs of RtlpSparseBitmapCheckRangeArrayPage @ 0x180055250
 * Callers:
 *     RtlpSparseBitmapCtxUpdateBitRanges @ 0x180054E7C (RtlpSparseBitmapCtxUpdateBitRanges.c)
 *     RtlpSparseBitmapCtxPrepareRanges @ 0x180054F94 (RtlpSparseBitmapCtxPrepareRanges.c)
 *     RtlSparseBitmapCtxCheckBitsInternal @ 0x1800550CC (RtlSparseBitmapCtxCheckBitsInternal.c)
 *     RtlSparseBitmapCtxAllocateRange @ 0x180057BB4 (RtlSparseBitmapCtxAllocateRange.c)
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
