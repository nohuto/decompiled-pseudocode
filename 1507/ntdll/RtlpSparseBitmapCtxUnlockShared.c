/*
 * XREFs of RtlpSparseBitmapCtxUnlockShared @ 0x18005520C
 * Callers:
 *     RtlpSparseBitmapCtxUpdateBitRanges @ 0x180054E7C (RtlpSparseBitmapCtxUpdateBitRanges.c)
 *     RtlpSparseBitmapCtxCheckRangeArray @ 0x180055040 (RtlpSparseBitmapCtxCheckRangeArray.c)
 *     RtlSparseBitmapCtxCheckBitsInternal @ 0x1800550CC (RtlSparseBitmapCtxCheckBitsInternal.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180030740 (RtlReleaseSRWLockShared.c)
 */

unsigned __int64 __fastcall RtlpSparseBitmapCtxUnlockShared(__int64 a1, volatile signed __int64 *a2)
{
  unsigned __int64 result; // rax

  if ( (*(_BYTE *)(a1 + 72) & 4) == 0 )
    return RtlReleaseSRWLockShared(a2);
  return result;
}
