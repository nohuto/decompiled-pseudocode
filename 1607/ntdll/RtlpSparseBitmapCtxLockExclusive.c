/*
 * XREFs of RtlpSparseBitmapCtxLockExclusive @ 0x18004FF50
 * Callers:
 *     RtlpSparseBitmapCtxCheckRangeArray @ 0x18004FC28 (RtlpSparseBitmapCtxCheckRangeArray.c)
 *     RtlpSparseBitmapCtxUpdateBits @ 0x18004FE80 (RtlpSparseBitmapCtxUpdateBits.c)
 *     RtlLockHeapManagerForCloning @ 0x1800E9040 (RtlLockHeapManagerForCloning.c)
 *     RtlSparseBitmapCtxSubtractBitmap @ 0x180100960 (RtlSparseBitmapCtxSubtractBitmap.c)
 *     RtlSparseBitmapEnumerateBitmap @ 0x180100A90 (RtlSparseBitmapEnumerateBitmap.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall RtlpSparseBitmapCtxLockExclusive(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  if ( (*(_BYTE *)(a1 + 72) & 4) != 0 )
    return 1LL;
  RtlAcquireSRWLockExclusive((unsigned __int64)a2, a2, a3, a4);
  return 0LL;
}
