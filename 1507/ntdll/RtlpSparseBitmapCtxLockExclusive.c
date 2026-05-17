/*
 * XREFs of RtlpSparseBitmapCtxLockExclusive @ 0x180055344
 * Callers:
 *     RtlpSparseBitmapCtxCheckRangeArray @ 0x180055040 (RtlpSparseBitmapCtxCheckRangeArray.c)
 *     RtlpSparseBitmapCtxUpdateBits @ 0x180055278 (RtlpSparseBitmapCtxUpdateBits.c)
 *     RtlLockHeapManagerForCloning @ 0x1800D8158 (RtlLockHeapManagerForCloning.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall RtlpSparseBitmapCtxLockExclusive(__int64 a1, volatile signed __int64 *a2, __int64 a3, __int64 a4)
{
  if ( (*(_BYTE *)(a1 + 72) & 4) != 0 )
    return 1LL;
  RtlAcquireSRWLockExclusive(a2, (char *)a2, a3, a4);
  return 0LL;
}
