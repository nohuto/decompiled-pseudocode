/*
 * XREFs of GreGetCharacterPlacementW @ 0x1C0290D00
 * Callers:
 *     NtGdiGetCharacterPlacementW @ 0x1C02A7B40 (NtGdiGetCharacterPlacementW.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0060508 (PALLOCMEM2.c)
 *     GreGetTextExtentExW @ 0x1C01106D0 (GreGetTextExtentExW.c)
 *     GreGetGlyphIndicesW @ 0x1C0117730 (GreGetGlyphIndicesW.c)
 *     GreGetTextExtentW @ 0x1C0123640 (GreGetTextExtentW.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     GreGetKerningPairs @ 0x1C027DAD0 (GreGetKerningPairs.c)
 *     ?nCalcJustInArray@@YAKPEAPEAIGPEAXHI@Z @ 0x1C0290BA4 (-nCalcJustInArray@@YAKPEAPEAIGPEAXHI@Z.c)
 */

__int64 __fastcall GreGetCharacterPlacementW(
        HDC a1,
        unsigned __int16 *a2,
        unsigned int a3,
        unsigned int a4,
        __m128i *a5,
        int a6)
{
  __m128i *v6; // r13
  unsigned int v7; // ebx
  unsigned int *v8; // rdi
  __int64 result; // rax
  int v10; // r15d
  __m128i v11; // xmm0
  __m128i v12; // xmm1
  __m128i v13; // xmm0
  unsigned int v14; // eax
  int *v15; // rsi
  int v16; // eax
  int v17; // r12d
  unsigned int *p_Size; // rax
  unsigned __int64 i; // rdx
  unsigned int *v20; // rcx
  __int64 v21; // rbx
  unsigned int KerningPairs; // eax
  __int64 v23; // rsi
  unsigned int *v24; // rax
  unsigned int *v25; // r12
  unsigned __int64 v26; // r10
  unsigned int cx; // esi
  int *v28; // r13
  unsigned __int16 *v29; // r11
  __int16 v30; // di
  __int64 v31; // r8
  unsigned int v32; // r9d
  int *v33; // r12
  __int64 v34; // rax
  unsigned __int16 *j; // rax
  int v36; // r15d
  int v37; // eax
  unsigned int v38; // ecx
  int *v39; // rax
  int v40; // ecx
  __int64 v41; // rax
  unsigned int v42; // r8d
  unsigned int v43; // r10d
  unsigned int *v44; // rcx
  __int64 v45; // r9
  unsigned int v46; // r8d
  __int64 v47; // rax
  int *v48; // r8
  int v49; // ecx
  int v50; // eax
  _DWORD *v51; // rax
  unsigned int k; // ecx
  LONG cy; // esi
  struct tagSIZE v54; // [rsp+48h] [rbp-69h] BYREF
  unsigned int *v55; // [rsp+50h] [rbp-61h] BYREF
  unsigned int Size; // [rsp+58h] [rbp-59h] BYREF
  int Size_4; // [rsp+5Ch] [rbp-55h]
  int v58; // [rsp+60h] [rbp-51h]
  int *v59; // [rsp+68h] [rbp-49h]
  void *v60[2]; // [rsp+78h] [rbp-39h]
  void *Src[2]; // [rsp+88h] [rbp-29h]
  void *v62[2]; // [rsp+98h] [rbp-19h]
  __m128i v63; // [rsp+A8h] [rbp-9h]
  HDC v64; // [rsp+108h] [rbp+57h]
  unsigned __int16 *v65; // [rsp+110h] [rbp+5Fh]
  int v66; // [rsp+118h] [rbp+67h]
  unsigned int v67; // [rsp+120h] [rbp+6Fh]

  v67 = a4;
  v65 = a2;
  v64 = a1;
  v6 = a5;
  v7 = a3;
  v55 = 0LL;
  v8 = 0LL;
  v58 = 0;
  v54 = 0LL;
  if ( !a5 )
  {
    if ( !(unsigned int)GreGetTextExtentW(a1, a2, a3, &v54, 1) )
      return 0LL;
    return (unsigned int)LOWORD(v54.cx) | (v54.cy << 16);
  }
  v10 = a6;
  v11 = *a5;
  *(__m128i *)Src = a5[1];
  v12 = a5[3];
  *(__m128i *)v60 = v11;
  v13 = a5[2];
  v63 = v12;
  v14 = _mm_cvtsi128_si32(_mm_srli_si128(v12, 8));
  *(__m128i *)v62 = v13;
  if ( a3 > v14 )
    v7 = v14;
  Size = v7;
  if ( (a6 & 0x10000) != 0 )
    v10 = a6 | 0x100000;
  v15 = (int *)Src[1];
  if ( (v10 & 0x200000) == 0
    || !Src[1]
    || (v16 = nCalcJustInArray(&v55, 1u, (char *)Src[1], 1, v14),
        v8 = v55,
        a2 = v65,
        a4 = v67,
        a1 = v64,
        (v58 = v16) == 0) )
  {
    v10 &= ~0x200000u;
  }
  v17 = v15 != 0LL;
  v66 = v17;
  if ( v62[0] )
  {
    v17 += 2;
    v66 = v17;
  }
  if ( v17 == 2 )
    v15 = (int *)v62[0];
  v59 = v15;
  Size_4 = v10 & 0x100000;
  p_Size = &Size;
  if ( (v10 & 0x100000) == 0 )
    p_Size = 0LL;
  if ( !(unsigned int)GreGetTextExtentExW(a1, a2, v7, a4, p_Size, v15, &v54, 0) )
  {
    if ( !v8 )
      return 0LL;
    v20 = v8;
LABEL_21:
    Win32FreePool(v20, i);
    return 0LL;
  }
  LODWORD(v21) = Size;
  if ( v15 )
  {
    if ( Size )
    {
      for ( i = (unsigned __int64)&v15[Size - 1]; i > (unsigned __int64)v15; i -= 4LL )
        *(_DWORD *)i -= *(_DWORD *)(i - 4);
    }
  }
  if ( Size_4 && !(_DWORD)v21 )
  {
    if ( v8 )
      Win32FreePool(v8, i);
    return (unsigned int)LOWORD(v54.cx) | (v54.cy << 16);
  }
  if ( (v10 & 8) != 0
    && v17
    && (unsigned int)v21 >= 2
    && (KerningPairs = GreGetKerningPairs(v64, 0, 0LL), (v23 = KerningPairs) != 0)
    && (v24 = (unsigned int *)PALLOCMEM2(8 * KerningPairs, 1954051143LL, 1), (v25 = v24) != 0LL) )
  {
    if ( (unsigned int)GreGetKerningPairs(v64, v23, (unsigned __int64)v24) != (_DWORD)v23 )
    {
      if ( v8 )
        Win32FreePool(v8, i);
      v20 = v25;
      goto LABEL_21;
    }
    v26 = (unsigned __int64)&v25[2 * v23];
    cx = v54.cx;
    if ( (unsigned __int64)v25 < v26 )
    {
      v28 = v59;
      i = (unsigned __int64)(v25 + 1);
      v29 = &v65[(unsigned int)(v21 - 1)];
      do
      {
        v30 = *(_WORD *)(i - 4);
        if ( v65 < v29 )
        {
          v31 = 0LL;
          do
          {
            if ( v30 == v65[v31] && v65[v31 + 1] == *(_WORD *)(i - 2) )
            {
              v28[(v31 * 2) >> 1] += *(_DWORD *)i;
              cx += *(_DWORD *)i;
              v54.cx = cx;
            }
            ++v31;
          }
          while ( &v65[v31] < v29 );
        }
        i += 8LL;
      }
      while ( i - 4 < v26 );
      v8 = v55;
      v6 = a5;
    }
    Win32FreePool(v25, i);
    v32 = v67;
    if ( Size_4 )
    {
      if ( cx > v67 )
      {
        while ( (_DWORD)v21 )
        {
          v21 = (unsigned int)(v21 - 1);
          cx -= v59[v21];
          v54.cx = cx;
          if ( cx <= v67 )
            goto LABEL_54;
        }
        goto LABEL_55;
      }
LABEL_54:
      if ( !(_DWORD)v21 )
      {
LABEL_55:
        if ( v8 )
          Win32FreePool(v8, i);
        v6[3].m128i_i64[1] = 0LL;
        return 0LL;
      }
    }
  }
  else
  {
    cx = v54.cx;
    v32 = v67;
  }
  if ( (v10 & 0x10000) != 0 && v66 && (_DWORD)v21 )
  {
    v33 = v59;
    v34 = (unsigned int)(v21 - 1);
    i = (unsigned __int64)&v59[v34];
    for ( j = &v65[v34]; j >= v65 && *j == 32; --j )
    {
      cx -= *(_DWORD *)i;
      LODWORD(v21) = v21 - 1;
      i -= 4LL;
    }
    if ( !(_DWORD)v21 )
      goto LABEL_55;
    v36 = v32 - cx;
    if ( (int)(v32 - cx) < 0 || (unsigned int)v21 < 2 )
      goto LABEL_88;
    v37 = v58;
    if ( !v58 )
    {
      v37 = nCalcJustInArray(&v55, 0x20u, (char *)v65, 0, v21);
      if ( !v37 )
      {
        if ( v36 > 0 )
        {
          i = (unsigned int)(v21 - 1);
          do
          {
            v38 = 0;
            v39 = v33;
            do
            {
              ++*v39;
              if ( !--v36 )
                break;
              ++v38;
              ++v39;
            }
            while ( v38 < (unsigned int)i );
          }
          while ( v36 > 0 );
        }
        v8 = v55;
LABEL_88:
        v54.cx = v67;
        goto LABEL_89;
      }
      v8 = v55;
    }
    v40 = v37 - 1;
    v41 = v37 - 1;
    if ( v40 >= 0 )
    {
      do
      {
        if ( (int)v21 - 1 >= v8[v41] )
          break;
        --v40;
        --v41;
      }
      while ( v41 >= 0 );
    }
    v42 = v40 + 1;
    i = v36 % (unsigned int)(v40 + 1);
    v43 = v36 / (unsigned int)(v40 + 1);
    if ( v40 != -1 )
    {
      v44 = v8;
      v45 = v42;
      do
      {
        v46 = v43;
        if ( (int)i > 0 )
          v46 = v43 + 1;
        v47 = *v44;
        i = (unsigned int)(i - 1);
        ++v44;
        v33[v47] += v46;
        --v45;
      }
      while ( v45 );
    }
    goto LABEL_88;
  }
LABEL_89:
  if ( v66 == 3 )
    memmove(v62[0], Src[1], 4LL * (unsigned int)v21);
  v48 = (int *)v62[0];
  if ( v62[0] )
  {
    v49 = 0;
    if ( (_DWORD)v21 )
    {
      i = (unsigned int)v21;
      do
      {
        v50 = *v48;
        *v48 = v49;
        v49 += v50;
        ++v48;
        --i;
      }
      while ( i );
    }
  }
  if ( v60[1] )
    memmove(v60[1], v65, 2LL * (unsigned int)v21);
  if ( v62[1] )
    memset(v62[1], 1, (unsigned int)v21);
  v51 = Src[0];
  if ( Src[0] )
  {
    for ( k = 0; k < (unsigned int)v21; ++v51 )
      *v51 = k++;
  }
  if ( v63.m128i_i64[0] && (unsigned int)GreGetGlyphIndicesW(v64, v65, v21, v63.m128i_i64[0], 0, 0) == -1 )
  {
    LODWORD(v21) = 0;
    v54.cx = 0;
    cy = 0;
  }
  else
  {
    cy = v54.cy;
  }
  if ( v8 )
    Win32FreePool(v8, i);
  result = (cy << 16) | (unsigned int)LOWORD(v54.cx);
  v6[3].m128i_i32[2] = v21;
  v6[3].m128i_i32[3] = v21;
  return result;
}
