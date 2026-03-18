/*
 * XREFs of RtlpSparseBitmapCtxLockShared @ 0x140223B2C
 * Callers:
 *     RtlpSparseBitmapCtxCheckRangeArray @ 0x140223370 (RtlpSparseBitmapCtxCheckRangeArray.c)
 *     RtlpSparseBitmapCtxFindNextBitInternal @ 0x14022345C (RtlpSparseBitmapCtxFindNextBitInternal.c)
 *     RtlpSparseBitmapCtxFindRunsInternal @ 0x140223900 (RtlpSparseBitmapCtxFindRunsInternal.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x140079490 (ExAcquireSpinLockShared.c)
 */

__int64 __fastcall RtlpSparseBitmapCtxLockShared(__int64 a1, volatile LONG *a2)
{
  if ( (*(_DWORD *)(a1 + 72) & 4) != 0 )
    return 1LL;
  else
    return ExAcquireSpinLockShared(a2);
}
