/*
 * XREFs of RtlpSparseBitmapCtxLockExclusive @ 0x180040378
 * Callers:
 *     RtlpSparseBitmapCtxCheckRangeArray @ 0x180040074 (RtlpSparseBitmapCtxCheckRangeArray.c)
 *     RtlpSparseBitmapCtxUpdateBits @ 0x1800402AC (RtlpSparseBitmapCtxUpdateBits.c)
 *     RtlLockHeapManagerForCloning @ 0x1800DFE20 (RtlLockHeapManagerForCloning.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall RtlpSparseBitmapCtxLockExclusive(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  if ( (*(_BYTE *)(a1 + 72) & 4) != 0 )
    return 1LL;
  RtlAcquireSRWLockExclusive((unsigned __int64)a2, a2, a3, a4);
  return 0LL;
}
