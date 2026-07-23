/*
 * XREFs of RtlpSparseBitmapCtxUpdateBits @ 0x180055278
 * Callers:
 *     RtlpSparseBitmapCtxUpdateBitRanges @ 0x180054E7C (RtlpSparseBitmapCtxUpdateBitRanges.c)
 * Callees:
 *     RtlpSparseBitmapCtxLockExclusive @ 0x180055344 (RtlpSparseBitmapCtxLockExclusive.c)
 *     RtlSetBits @ 0x180056540 (RtlSetBits.c)
 *     RtlClearBits @ 0x180056780 (RtlClearBits.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     RtlpSparseBitmapCtxCountRangeBits @ 0x1800F8820 (RtlpSparseBitmapCtxCountRangeBits.c)
 */

__int64 __fastcall RtlpSparseBitmapCtxUpdateBits(
        __int64 a1,
        __int64 a2,
        ULONG a3,
        ULONG a4,
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        __int64 a6,
        int a7,
        _QWORD *a8)
{
  int v12; // ecx
  __int64 v13; // rbx
  int v14; // ebp
  _RTL_BITMAP *v15; // rcx
  int v16; // ecx
  ULONG v18; // eax

  RtlpSparseBitmapCtxLockExclusive(a1, a2);
  v13 = 0LL;
  if ( a8 )
    v14 = RtlpSparseBitmapCtxCountRangeBits(v12, a2, a3, a4, a7);
  else
    v14 = 0;
  v15 = (_RTL_BITMAP *)(a2 + 8);
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
  if ( HashTable )
  {
    if ( *(_DWORD *)(a1 + 68) )
      v13 = a2 + *(unsigned int *)(a1 + 64);
    ((void (__fastcall *)(__int64, _QWORD, _QWORD, __int64))HashTable)(v13, a3, a4, a6);
  }
  return RtlpSparseBitmapCtxUnlockExclusive(a1, a2);
}
