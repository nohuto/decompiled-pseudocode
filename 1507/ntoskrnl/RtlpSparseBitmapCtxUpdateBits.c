/*
 * XREFs of RtlpSparseBitmapCtxUpdateBits @ 0x140273CF0
 * Callers:
 *     RtlpSparseBitmapCtxUpdateBitRanges @ 0x140273C10 (RtlpSparseBitmapCtxUpdateBitRanges.c)
 * Callees:
 *     RtlClearBits @ 0x140062740 (RtlClearBits.c)
 *     RtlSetBits @ 0x14008B810 (RtlSetBits.c)
 *     RtlpSparseBitmapCtxCountRangeBits @ 0x140273318 (RtlpSparseBitmapCtxCountRangeBits.c)
 *     RtlpSparseBitmapCtxLockExclusive @ 0x1402739E0 (RtlpSparseBitmapCtxLockExclusive.c)
 */

__int64 __fastcall RtlpSparseBitmapCtxUpdateBits(
        __int64 a1,
        volatile signed __int32 *a2,
        ULONG a3,
        ULONG a4,
        __int64 a5,
        __int64 a6,
        int a7,
        _QWORD *a8)
{
  __int64 v12; // rcx
  unsigned __int8 v13; // r13
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
  return RtlpSparseBitmapCtxUnlockExclusive(a1, a2, v13);
}
