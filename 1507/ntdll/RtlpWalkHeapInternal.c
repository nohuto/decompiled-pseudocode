/*
 * XREFs of RtlpWalkHeapInternal @ 0x1800DB648
 * Callers:
 *     RtlWalkHeap @ 0x1800D8880 (RtlWalkHeap.c)
 *     RtlpQueryExtendedInformationHeap @ 0x1800D9C20 (RtlpQueryExtendedInformationHeap.c)
 * Callees:
 *     RtlSparseBitmapCtxCheckBitsInternal @ 0x1800550CC (RtlSparseBitmapCtxCheckBitsInternal.c)
 *     RtlpWalkHeap @ 0x1800DAD88 (RtlpWalkHeap.c)
 *     RtlpHpLargeWalkHeap @ 0x1800F05CC (RtlpHpLargeWalkHeap.c)
 *     RtlpHpSegWalkHeap @ 0x1800F1664 (RtlpHpSegWalkHeap.c)
 */

__int64 __fastcall RtlpWalkHeapInternal(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // si
  unsigned __int64 v6; // rdi
  int v7; // eax
  unsigned __int64 v8; // rdx
  __int64 v10; // rcx
  unsigned int v11; // esi
  unsigned __int64 v12; // rdi
  int v13; // eax
  __int64 v14; // rax

  v3 = a3;
  if ( *(_DWORD *)(a1 + 16) != -571548178 )
    return (unsigned int)RtlpWalkHeap((char *)a1, a2, a3);
  if ( (RtlpHpAppCompatFlags & 2) != 0 )
  {
    v6 = *(_QWORD *)a2;
    if ( !*(_QWORD *)a2 )
      goto LABEL_16;
    if ( (*(_BYTE *)(a2 + 18) & 1) != 0 )
    {
      if ( (_WORD)v6 )
        v7 = 0;
      else
        v7 = RtlSparseBitmapCtxCheckBitsInternal(a1, v6 >> 16);
      if ( !v7 )
        v6 -= 16LL;
      *(_QWORD *)a2 = v6;
    }
  }
  v8 = *(_QWORD *)a2;
  if ( *(_QWORD *)a2 )
  {
    if ( (_WORD)v8 ? 0 : RtlSparseBitmapCtxCheckBitsInternal(a1, v8 >> 16) )
      goto LABEL_18;
  }
LABEL_16:
  LOBYTE(a3) = v3;
  v11 = RtlpHpSegWalkHeap(a1, a2, a3);
  if ( v11 == -2147483622 )
  {
    *(_QWORD *)a2 = 0LL;
LABEL_18:
    v11 = RtlpHpLargeWalkHeap(a1, a2);
  }
  if ( (RtlpHpAppCompatFlags & 2) != 0 && v11 != -2147483622 && (*(_BYTE *)(a2 + 18) & 1) != 0 )
  {
    v12 = *(_QWORD *)a2;
    if ( (unsigned __int16)*(_QWORD *)a2 )
      v13 = 0;
    else
      v13 = RtlSparseBitmapCtxCheckBitsInternal(v10, v12 >> 16);
    if ( !v13 )
      v12 += 16LL;
    v14 = *(_QWORD *)(a2 + 8);
    *(_QWORD *)a2 = v12;
    if ( (RtlpHpAppCompatFlags & 2) != 0 )
      v14 -= 16LL;
    *(_QWORD *)(a2 + 8) = v14;
  }
  return v11;
}
