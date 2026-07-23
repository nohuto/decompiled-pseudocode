/*
 * XREFs of RtlpSparseBitmapCtxLockExclusive @ 0x18004FF40
 * Callers:
 *     RtlpSparseBitmapCtxCheckRangeArray @ 0x18004FC18 (RtlpSparseBitmapCtxCheckRangeArray.c)
 *     RtlpSparseBitmapCtxUpdateBits @ 0x18004FE70 (RtlpSparseBitmapCtxUpdateBits.c)
 *     RtlLockHeapManagerForCloning @ 0x1800E9100 (RtlLockHeapManagerForCloning.c)
 *     RtlSparseBitmapCtxSubtractBitmap @ 0x1801008A0 (RtlSparseBitmapCtxSubtractBitmap.c)
 *     RtlSparseBitmapEnumerateBitmap @ 0x1801009D0 (RtlSparseBitmapEnumerateBitmap.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall RtlpSparseBitmapCtxLockExclusive(__int64 a1, _RTL_SRWLOCK *a2)
{
  if ( (*(_BYTE *)(a1 + 72) & 4) != 0 )
    return 1LL;
  RtlAcquireSRWLockExclusive(a2);
  return 0LL;
}
