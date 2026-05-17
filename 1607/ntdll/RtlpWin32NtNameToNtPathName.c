/*
 * XREFs of RtlpWin32NtNameToNtPathName @ 0x1800102D0
 * Callers:
 *     RtlDosPathNameToRelativeNtPathName @ 0x1800222B0 (RtlDosPathNameToRelativeNtPathName.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x180010440 (RtlAppendUnicodeStringToString.c)
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 */

__int64 __fastcall RtlpWin32NtNameToNtPathName(
        __m128i *a1,
        unsigned __int16 *a2,
        unsigned __int16 *a3,
        _QWORD *a4,
        _QWORD *a5,
        __int64 a6)
{
  unsigned int v7; // esi
  unsigned __int16 *v9; // rbx
  __int64 Heap; // rax
  __m128i v12; // xmm0
  __int64 v13; // r8
  unsigned __int64 v15; // r8
  _WORD *i; // rcx
  _WORD *v17; // rcx
  __m128i v18; // [rsp+20h] [rbp-28h] BYREF

  v7 = a1->m128i_u16[0] + 2;
  v9 = a2;
  if ( v7 > 0xFFFE )
    return 3221225734LL;
  if ( !a2 )
  {
    if ( !a3 )
      return 3221225485LL;
    goto LABEL_4;
  }
  if ( v7 > a2[1] )
  {
    if ( a3 )
    {
LABEL_4:
      Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0LL, v7);
      *((_QWORD *)a3 + 1) = Heap;
      if ( !Heap )
        return 3221225495LL;
      *a3 = 0;
      v9 = a3;
      a3[1] = v7;
      goto LABEL_6;
    }
    return 3221225734LL;
  }
LABEL_6:
  RtlAppendUnicodeStringToString(v9, L"\b\n", a3);
  v18 = *a1;
  v12 = v18;
  v18.m128i_i64[1] += 8LL;
  v18.m128i_i16[0] = _mm_cvtsi128_si32(v12) - 8;
  RtlAppendUnicodeStringToString(v9, &v18, v13);
  if ( a4 )
    *a4 = v9;
  *(_WORD *)(*((_QWORD *)v9 + 1) + 2 * ((unsigned __int64)*v9 >> 1)) = 0;
  if ( a5 )
  {
    v15 = *((_QWORD *)v9 + 1);
    for ( i = (_WORD *)(v15 + 2 * (((unsigned __int64)*v9 >> 1) - 1)); ; --i )
    {
      if ( (unsigned __int64)i < v15 )
        goto LABEL_16;
      if ( *i == 92 )
        break;
    }
    v17 = i + 1;
    if ( !v17 || !*v17 )
    {
LABEL_16:
      *a5 = 0LL;
      goto LABEL_9;
    }
    *a5 = v17;
  }
LABEL_9:
  if ( a6 )
  {
    *(_DWORD *)a6 = 0;
    *(_QWORD *)(a6 + 8) = 0LL;
    *(_QWORD *)(a6 + 16) = 0LL;
    *(_QWORD *)(a6 + 24) = 0LL;
  }
  return 0LL;
}
