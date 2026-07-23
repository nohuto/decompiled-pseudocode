/*
 * XREFs of RtlpSparseBitmapCtxUpdateBits @ 0x140223D08
 * Callers:
 *     RtlpSparseBitmapCtxUpdateBitRanges @ 0x140223C28 (RtlpSparseBitmapCtxUpdateBitRanges.c)
 * Callees:
 *     RtlClearBits @ 0x14003B430 (RtlClearBits.c)
 *     RtlSetBits @ 0x140061410 (RtlSetBits.c)
 *     RtlpSparseBitmapCtxCountRangeBits @ 0x140223440 (RtlpSparseBitmapCtxCountRangeBits.c)
 *     RtlpSparseBitmapCtxLockExclusive @ 0x140223B08 (RtlpSparseBitmapCtxLockExclusive.c)
 */

void __fastcall RtlpSparseBitmapCtxUpdateBits(
        __int64 a1,
        volatile LONG *a2,
        ULONG a3,
        ULONG a4,
        __int64 a5,
        __int64 a6,
        int a7,
        _QWORD *a8)
{
  __int64 v12; // rcx
  KIRQL v13; // r13
  ULONG v14; // esi
  _RTL_BITMAP *v15; // rcx
  __int64 v16; // rcx

  v13 = RtlpSparseBitmapCtxLockExclusive(a1, a2);
  if ( a8 )
    v14 = RtlpSparseBitmapCtxCountRangeBits(v12, (__int64)a2, a3, a4, a7);
  else
    v14 = 0;
  v15 = (_RTL_BITMAP *)(a2 + 2);
  if ( a7 )
    RtlSetBits(v15, a3, a4);
  else
    RtlClearBits(v15, a3, a4);
  if ( a8 )
  {
    if ( v14 )
      a4 = RtlpSparseBitmapCtxCountRangeBits(v16, (__int64)a2, a3, a4, a7);
    *a8 = a4 - v14;
  }
  RtlpSparseBitmapCtxUnlockExclusive(a1, a2, v13);
}
