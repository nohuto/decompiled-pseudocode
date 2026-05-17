/*
 * XREFs of RtlpSparseBitmapCtxUnlockExclusive @ 0x180055324
 * Callers:
 *     RtlpSparseBitmapCtxCheckRangeArray @ 0x180055040 (RtlpSparseBitmapCtxCheckRangeArray.c)
 *     RtlpSparseBitmapCtxUpdateBits @ 0x180055278 (RtlpSparseBitmapCtxUpdateBits.c)
 *     RtlpUnlockHeapManagerForCloning @ 0x1800DA9EC (RtlpUnlockHeapManagerForCloning.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 */

signed __int64 __fastcall RtlpSparseBitmapCtxUnlockExclusive(__int64 a1, volatile signed __int64 *a2)
{
  signed __int64 result; // rax

  if ( (*(_BYTE *)(a1 + 72) & 4) == 0 )
    return RtlReleaseSRWLockExclusive(a2);
  return result;
}
