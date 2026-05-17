/*
 * XREFs of RtlpSparseBitmapCtxUpdateBits @ 0x1800402AC
 * Callers:
 *     RtlpSparseBitmapCtxUpdateBitRanges @ 0x18003FEB0 (RtlpSparseBitmapCtxUpdateBitRanges.c)
 * Callees:
 *     RtlpSparseBitmapCtxLockExclusive @ 0x180040378 (RtlpSparseBitmapCtxLockExclusive.c)
 *     RtlClearBits @ 0x1800404D0 (RtlClearBits.c)
 *     RtlSetBits @ 0x180041A70 (RtlSetBits.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 *     RtlpSparseBitmapCtxCountRangeBits @ 0x1800F81F8 (RtlpSparseBitmapCtxCountRangeBits.c)
 */

__int64 __fastcall RtlpSparseBitmapCtxUpdateBits(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        void (__fastcall *a5)(__int64, _QWORD, _QWORD, __int64),
        __int64 a6,
        int a7,
        _QWORD *a8)
{
  int v12; // ecx
  __int64 v13; // rbx
  int v14; // ebp
  __int64 v15; // rcx
  int v16; // ecx
  unsigned int v18; // eax

  RtlpSparseBitmapCtxLockExclusive(a1, a2);
  v13 = 0LL;
  if ( a8 )
    v14 = RtlpSparseBitmapCtxCountRangeBits(v12, a2, a3, a4, a7);
  else
    v14 = 0;
  v15 = a2 + 8;
  if ( a7 )
    RtlSetBits(v15, a3, a4);
  else
    RtlClearBits(v15, a3, a4);
  if ( a8 )
  {
    if ( v14 )
      v18 = RtlpSparseBitmapCtxCountRangeBits(v16, a2, a3, a4, a7);
    else
      v18 = a4;
    *a8 = v18 - v14;
  }
  if ( a5 )
  {
    if ( *(_DWORD *)(a1 + 68) )
      v13 = a2 + *(unsigned int *)(a1 + 64);
    a5(v13, a3, a4, a6);
  }
  return RtlpSparseBitmapCtxUnlockExclusive(a1, a2);
}
