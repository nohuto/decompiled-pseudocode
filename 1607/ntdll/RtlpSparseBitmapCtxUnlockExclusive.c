/*
 * XREFs of RtlpSparseBitmapCtxUnlockExclusive @ 0x18004FF30
 * Callers:
 *     RtlpSparseBitmapCtxCheckRangeArray @ 0x18004FC28 (RtlpSparseBitmapCtxCheckRangeArray.c)
 *     RtlpSparseBitmapCtxUpdateBits @ 0x18004FE80 (RtlpSparseBitmapCtxUpdateBits.c)
 *     RtlpUnlockHeapManagerForCloning @ 0x1800EAC68 (RtlpUnlockHeapManagerForCloning.c)
 *     RtlSparseBitmapCtxSubtractBitmap @ 0x180100960 (RtlSparseBitmapCtxSubtractBitmap.c)
 *     RtlSparseBitmapEnumerateBitmap @ 0x180100A90 (RtlSparseBitmapEnumerateBitmap.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 */

signed __int64 __fastcall RtlpSparseBitmapCtxUnlockExclusive(__int64 a1, volatile signed __int64 *a2)
{
  signed __int64 result; // rax

  if ( (*(_BYTE *)(a1 + 72) & 4) == 0 )
    return RtlReleaseSRWLockExclusive(a2);
  return result;
}
