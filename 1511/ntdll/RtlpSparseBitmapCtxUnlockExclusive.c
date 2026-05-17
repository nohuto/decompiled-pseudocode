/*
 * XREFs of RtlpSparseBitmapCtxUnlockExclusive @ 0x180040358
 * Callers:
 *     RtlpSparseBitmapCtxCheckRangeArray @ 0x180040074 (RtlpSparseBitmapCtxCheckRangeArray.c)
 *     RtlpSparseBitmapCtxUpdateBits @ 0x1800402AC (RtlpSparseBitmapCtxUpdateBits.c)
 *     RtlpUnlockHeapManagerForCloning @ 0x1800E1A50 (RtlpUnlockHeapManagerForCloning.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 */

signed __int64 __fastcall RtlpSparseBitmapCtxUnlockExclusive(__int64 a1, volatile signed __int64 *a2)
{
  signed __int64 result; // rax

  if ( (*(_BYTE *)(a1 + 72) & 4) == 0 )
    return RtlReleaseSRWLockExclusive(a2);
  return result;
}
