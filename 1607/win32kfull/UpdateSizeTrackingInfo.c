/*
 * XREFs of UpdateSizeTrackingInfo @ 0x1C0202BD4
 * Callers:
 *     NtUserUpdateWindowTrackingInfo @ 0x1C021BB40 (NtUserUpdateWindowTrackingInfo.c)
 * Callees:
 *     GetWindowExtendedMargin @ 0x1C00ACD48 (GetWindowExtendedMargin.c)
 *     ?IsLeftOrRightArranged@@YAEPEAUtagWND@@@Z @ 0x1C01FCEE4 (-IsLeftOrRightArranged@@YAEPEAUtagWND@@@Z.c)
 */

__int64 __fastcall UpdateSizeTrackingInfo(struct tagWND *a1, _DWORD *a2, _DWORD *a3)
{
  __int64 v3; // r10
  __int64 v6; // rdi
  __int64 v7; // r9
  __int64 result; // rax
  __int64 v9; // rax
  __m128i *v10; // r9
  __int64 v11; // rax
  int v12; // ebx
  __int64 v13; // rcx
  int v14; // ecx
  int v15; // ebx
  __int64 v16; // [rsp+40h] [rbp+8h] BYREF

  v3 = *((_QWORD *)a1 + 2);
  v6 = *(_QWORD *)(v3 + 592);
  v7 = *(_QWORD *)(v6 + 208);
  if ( *(_QWORD *)(v6 + 192) != v7 )
    return 0LL;
  if ( (*((_DWORD *)a1 + 88) & 0xF) == 0
    && (v9 = *(_QWORD *)(v3 + 408)) != 0
    && (*(_DWORD *)(*(_QWORD *)(v9 + 8) + 244LL) & 1) != 0 )
  {
    v10 = (__m128i *)(v7 + 92);
  }
  else if ( (*((_DWORD *)a1 + 88) & 0xF) == 1
         && (v11 = *(_QWORD *)(v3 + 408)) != 0
         && (*(_DWORD *)(*(_QWORD *)(v11 + 8) + 244LL) & 1) != 0 )
  {
    v10 = (__m128i *)(v7 + 108);
  }
  else
  {
    v10 = (__m128i *)(v7 + 76);
  }
  v12 = _mm_cvtsi128_si32(_mm_srli_si128(*v10, 8)) - _mm_cvtsi128_si32(*v10);
  if ( IsLeftOrRightArranged(a1) && (unsigned int)GetWindowExtendedMargin(v13, &v16) )
    v12 += WORD1(v16) + (unsigned __int16)v16;
  result = 0LL;
  v14 = v12 - *a3;
  if ( v14 > 0 )
  {
    v15 = v12 - *a2;
    if ( v15 > 0 && v15 > *(_DWORD *)(v6 + 92) )
      LODWORD(result) = 1;
    if ( v14 < *(_DWORD *)(v6 + 96) )
      *(_DWORD *)(v6 + 96) = v14;
    if ( (_DWORD)result )
      *(_DWORD *)(v6 + 88) = v15;
    return 1LL;
  }
  return result;
}
