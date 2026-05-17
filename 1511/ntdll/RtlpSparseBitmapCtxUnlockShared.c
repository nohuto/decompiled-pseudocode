/*
 * XREFs of RtlpSparseBitmapCtxUnlockShared @ 0x180040240
 * Callers:
 *     RtlpSparseBitmapCtxUpdateBitRanges @ 0x18003FEB0 (RtlpSparseBitmapCtxUpdateBitRanges.c)
 *     RtlpSparseBitmapCtxCheckRangeArray @ 0x180040074 (RtlpSparseBitmapCtxCheckRangeArray.c)
 *     RtlSparseBitmapCtxCheckBitsInternal @ 0x180040100 (RtlSparseBitmapCtxCheckBitsInternal.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x1800276F0 (RtlReleaseSRWLockShared.c)
 */

unsigned __int64 __fastcall RtlpSparseBitmapCtxUnlockShared(__int64 a1, volatile signed __int64 *a2)
{
  unsigned __int64 result; // rax

  if ( (*(_BYTE *)(a1 + 72) & 4) == 0 )
    return RtlReleaseSRWLockShared(a2);
  return result;
}
