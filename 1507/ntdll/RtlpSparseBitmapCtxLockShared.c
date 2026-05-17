/*
 * XREFs of RtlpSparseBitmapCtxLockShared @ 0x18005522C
 * Callers:
 *     RtlpSparseBitmapCtxCheckRangeArray @ 0x180055040 (RtlpSparseBitmapCtxCheckRangeArray.c)
 *     RtlSparseBitmapCtxCheckBitsInternal @ 0x1800550CC (RtlSparseBitmapCtxCheckBitsInternal.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180030820 (RtlAcquireSRWLockShared.c)
 */

__int64 __fastcall RtlpSparseBitmapCtxLockShared(__int64 a1, volatile signed __int64 *a2, __int64 a3, __int64 a4)
{
  if ( (*(_BYTE *)(a1 + 72) & 4) != 0 )
    return 1LL;
  RtlAcquireSRWLockShared(a2, (char *)a2, a3, a4);
  return 0LL;
}
