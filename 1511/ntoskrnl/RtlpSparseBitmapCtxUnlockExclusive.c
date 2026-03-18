/*
 * XREFs of RtlpSparseBitmapCtxUnlockExclusive @ 0x140223BE8
 * Callers:
 *     RtlpSparseBitmapCtxCheckRangeArray @ 0x140223370 (RtlpSparseBitmapCtxCheckRangeArray.c)
 *     RtlpSparseBitmapCtxUpdateBits @ 0x140223D08 (RtlpSparseBitmapCtxUpdateBits.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 */

void __fastcall RtlpSparseBitmapCtxUnlockExclusive(__int64 a1, volatile LONG *a2, KIRQL a3)
{
  if ( (*(_DWORD *)(a1 + 72) & 4) == 0 )
    ExReleaseSpinLockExclusive(a2, a3);
}
