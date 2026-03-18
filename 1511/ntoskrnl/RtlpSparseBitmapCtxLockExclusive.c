/*
 * XREFs of RtlpSparseBitmapCtxLockExclusive @ 0x140223B08
 * Callers:
 *     RtlpSparseBitmapCtxCheckRangeArray @ 0x140223370 (RtlpSparseBitmapCtxCheckRangeArray.c)
 *     RtlpSparseBitmapCtxUpdateBits @ 0x140223D08 (RtlpSparseBitmapCtxUpdateBits.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 */

__int64 __fastcall RtlpSparseBitmapCtxLockExclusive(__int64 a1, volatile LONG *a2)
{
  if ( (*(_DWORD *)(a1 + 72) & 4) != 0 )
    return 1LL;
  else
    return ExAcquireSpinLockExclusive(a2);
}
