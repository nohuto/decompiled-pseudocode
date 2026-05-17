/*
 * XREFs of RtlpSparseBitmapCheckRangeArrayPage @ 0x180040284
 * Callers:
 *     RtlpSparseBitmapCtxUpdateBitRanges @ 0x18003FEB0 (RtlpSparseBitmapCtxUpdateBitRanges.c)
 *     RtlpSparseBitmapCtxPrepareRanges @ 0x18003FFC8 (RtlpSparseBitmapCtxPrepareRanges.c)
 *     RtlSparseBitmapCtxCheckBitsInternal @ 0x180040100 (RtlSparseBitmapCtxCheckBitsInternal.c)
 *     RtlSparseBitmapCtxAllocateRange @ 0x18005AC10 (RtlSparseBitmapCtxAllocateRange.c)
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
