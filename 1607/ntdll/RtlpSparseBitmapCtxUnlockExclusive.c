/*
 * XREFs of RtlpSparseBitmapCtxUnlockExclusive @ 0x18004FF20
 * Callers:
 *     RtlpSparseBitmapCtxCheckRangeArray @ 0x18004FC18 (RtlpSparseBitmapCtxCheckRangeArray.c)
 *     RtlpSparseBitmapCtxUpdateBits @ 0x18004FE70 (RtlpSparseBitmapCtxUpdateBits.c)
 *     RtlpUnlockHeapManagerForCloning @ 0x1800EAD28 (RtlpUnlockHeapManagerForCloning.c)
 *     RtlSparseBitmapCtxSubtractBitmap @ 0x1801008A0 (RtlSparseBitmapCtxSubtractBitmap.c)
 *     RtlSparseBitmapEnumerateBitmap @ 0x1801009D0 (RtlSparseBitmapEnumerateBitmap.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 */

void __fastcall RtlpSparseBitmapCtxUnlockExclusive(__int64 a1, _RTL_SRWLOCK *a2)
{
  if ( (*(_BYTE *)(a1 + 72) & 4) == 0 )
    RtlReleaseSRWLockExclusive(a2);
}
