/*
 * XREFs of UpdateSizeTrackingInfo @ 0x1C020BA90
 * Callers:
 *     NtUserUpdateWindowTrackingInfo @ 0x1C0221A00 (NtUserUpdateWindowTrackingInfo.c)
 * Callees:
 *     GetWindowExtendedMargin @ 0x1C00916E4 (GetWindowExtendedMargin.c)
 *     ?IsLeftOrRightArranged@@YAEPEAUtagWND@@@Z @ 0x1C0205BE8 (-IsLeftOrRightArranged@@YAEPEAUtagWND@@@Z.c)
 */

__int64 __fastcall UpdateSizeTrackingInfo(struct tagWND *a1, _DWORD *a2, _DWORD *a3)
{
  __int64 v3; // r11
  __int64 v6; // rdi
  __int64 v7; // r9
  __int64 result; // rax
  int v9; // edx
  __m128i *v10; // r9
  int v11; // ebx
  __int64 v12; // rcx
  int v13; // ecx
  int v14; // ebx
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF

  v3 = *((_QWORD *)a1 + 2);
  v6 = *(_QWORD *)(v3 + 592);
  v7 = *(_QWORD *)(v6 + 208);
  if ( *(_QWORD *)(v6 + 192) != v7 )
    return 0LL;
  v9 = *((_DWORD *)a1 + 86);
  if ( v9 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 408) + 8LL) + 244LL) & 1) == 0 )
  {
    if ( v9 == 1 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 408) + 8LL) + 244LL) & 1) != 0 )
      v10 = (__m128i *)(v7 + 108);
    else
      v10 = (__m128i *)(v7 + 76);
  }
  else
  {
    v10 = (__m128i *)(v7 + 92);
  }
  v11 = _mm_cvtsi128_si32(_mm_srli_si128(*v10, 8)) - _mm_cvtsi128_si32(*v10);
  if ( IsLeftOrRightArranged(a1) && (unsigned int)GetWindowExtendedMargin(v12, &v15) )
    v11 += WORD1(v15) + (unsigned __int16)v15;
  result = 0LL;
  v13 = v11 - *a3;
  if ( v13 > 0 )
  {
    v14 = v11 - *a2;
    if ( v14 > 0 && v14 > *(_DWORD *)(v6 + 92) )
      LODWORD(result) = 1;
    if ( v13 < *(_DWORD *)(v6 + 96) )
      *(_DWORD *)(v6 + 96) = v13;
    if ( (_DWORD)result )
      *(_DWORD *)(v6 + 88) = v14;
    return 1LL;
  }
  return result;
}
