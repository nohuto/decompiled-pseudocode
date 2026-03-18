/*
 * XREFs of GreGetCharacterPlacementW @ 0x1C0291D38
 * Callers:
 *     NtGdiGetCharacterPlacementW @ 0x1C02A6120 (NtGdiGetCharacterPlacementW.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C001A9C0 (PALLOCMEM2.c)
 *     GreGetGlyphIndicesW @ 0x1C00EEB70 (GreGetGlyphIndicesW.c)
 *     GreGetTextExtentW @ 0x1C01027C0 (GreGetTextExtentW.c)
 *     GreGetTextExtentExW @ 0x1C01523C4 (GreGetTextExtentExW.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     GreGetKerningPairs @ 0x1C027F634 (GreGetKerningPairs.c)
 *     ?nCalcJustInArray@@YAKPEAPEAIGPEAXHI@Z @ 0x1C0291BDC (-nCalcJustInArray@@YAKPEAPEAIGPEAXHI@Z.c)
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
  HDC v8; // r10
  unsigned int *v9; // rdi
  __int64 result; // rax
  int v11; // r15d
  __m128i v12; // xmm0
  __m128i v13; // xmm1
  __m128i v14; // xmm0
  unsigned int v15; // eax
  int *v16; // rsi
  int v17; // eax
  int v18; // r12d
  unsigned int *p_Size; // rax
  unsigned int *v20; // rcx
  __int64 v21; // rbx
  int *i; // rdx
  unsigned int KerningPairs; // eax
  __int64 v24; // rsi
  unsigned int *v25; // rax
  unsigned int *v26; // r12
  unsigned __int64 v27; // r10
  unsigned int cx; // esi
  int *v29; // r13
  _DWORD *v30; // rdx
  unsigned __int16 *v31; // r11
  __int16 v32; // di
  __int64 v33; // r8
  unsigned int v34; // r9d
  int *v35; // r12
  __int64 v36; // rax
  int *v37; // rdx
  unsigned __int16 *j; // rax
  int v39; // r15d
  int v40; // eax
  unsigned int v41; // ecx
  int *v42; // rax
  int v43; // ecx
  __int64 v44; // rax
  unsigned int v45; // r8d
  signed int v46; // edx
  unsigned int v47; // r10d
  unsigned int *v48; // rcx
  __int64 v49; // r9
  unsigned int v50; // r8d
  __int64 v51; // rax
  int *v52; // r8
  int v53; // ecx
  __int64 v54; // rdx
  int v55; // eax
  _DWORD *v56; // rax
  unsigned int k; // ecx
  LONG cy; // esi
  struct tagSIZE v59; // [rsp+48h] [rbp-69h] BYREF
  unsigned int *v60; // [rsp+50h] [rbp-61h] BYREF
  unsigned int Size; // [rsp+58h] [rbp-59h] BYREF
  int Size_4; // [rsp+5Ch] [rbp-55h]
  int v63; // [rsp+60h] [rbp-51h]
  int *v64; // [rsp+68h] [rbp-49h]
  void *v65[2]; // [rsp+78h] [rbp-39h]
  void *Src[2]; // [rsp+88h] [rbp-29h]
  void *v67[2]; // [rsp+98h] [rbp-19h]
  __m128i v68; // [rsp+A8h] [rbp-9h]
  unsigned __int16 *v70; // [rsp+110h] [rbp+5Fh]
  int v71; // [rsp+118h] [rbp+67h]
  unsigned int v72; // [rsp+120h] [rbp+6Fh]

  v72 = a4;
  v70 = a2;
  v6 = a5;
  v7 = a3;
  v8 = a1;
  v60 = 0LL;
  v9 = 0LL;
  Size_4 = 0;
  v59 = 0LL;
  if ( !a5 )
  {
    if ( !(unsigned int)GreGetTextExtentW(a1, a2, a3, &v59, 1) )
      return 0LL;
    return (unsigned int)LOWORD(v59.cx) | (v59.cy << 16);
  }
  v11 = a6;
  v12 = *a5;
  *(__m128i *)Src = a5[1];
  v13 = a5[3];
  *(__m128i *)v65 = v12;
  v14 = a5[2];
  v68 = v13;
  v15 = _mm_cvtsi128_si32(_mm_srli_si128(v13, 8));
  *(__m128i *)v67 = v14;
  if ( a3 > v15 )
    v7 = v15;
  Size = v7;
  if ( (a6 & 0x10000) != 0 )
    v11 = a6 | 0x100000;
  v16 = (int *)Src[1];
  if ( (v11 & 0x200000) == 0
    || !Src[1]
    || (v17 = nCalcJustInArray(&v60, 1u, (char *)Src[1], 1, v15),
        v9 = v60,
        a2 = v70,
        a4 = v72,
        v8 = a1,
        (Size_4 = v17) == 0) )
  {
    v11 &= ~0x200000u;
  }
  v18 = v16 != 0LL;
  v71 = v18;
  if ( v67[0] )
  {
    v18 += 2;
    v71 = v18;
  }
  if ( v18 == 2 )
    v16 = (int *)v67[0];
  v63 = v11 & 0x100000;
  p_Size = &Size;
  if ( (v11 & 0x100000) == 0 )
    p_Size = 0LL;
  v64 = v16;
  if ( !(unsigned int)GreGetTextExtentExW(v8, a2, v7, a4, p_Size, v16, &v59, 0) )
  {
    if ( !v9 )
      return 0LL;
    v20 = v9;
LABEL_21:
    Win32FreePool(v20);
    return 0LL;
  }
  LODWORD(v21) = Size;
  if ( v16 )
  {
    if ( Size )
    {
      for ( i = &v16[Size - 1]; i > v16; --i )
        *i -= *(i - 1);
    }
  }
  if ( v63 && !(_DWORD)v21 )
  {
    if ( v9 )
      Win32FreePool(v9);
    return (unsigned int)LOWORD(v59.cx) | (v59.cy << 16);
  }
  if ( (v11 & 8) != 0
    && v18
    && (unsigned int)v21 >= 2
    && (KerningPairs = GreGetKerningPairs(a1, 0, 0LL), (v24 = KerningPairs) != 0)
    && (v25 = (unsigned int *)PALLOCMEM2(8 * KerningPairs, 1954051143LL, 1), (v26 = v25) != 0LL) )
  {
    if ( (unsigned int)GreGetKerningPairs(a1, v24, (unsigned __int64)v25) != (_DWORD)v24 )
    {
      if ( v9 )
        Win32FreePool(v9);
      v20 = v26;
      goto LABEL_21;
    }
    v27 = (unsigned __int64)&v26[2 * v24];
    cx = v59.cx;
    if ( (unsigned __int64)v26 < v27 )
    {
      v29 = v64;
      v30 = v26 + 1;
      v31 = &v70[(unsigned int)(v21 - 1)];
      do
      {
        v32 = *((_WORD *)v30 - 2);
        if ( v70 < v31 )
        {
          v33 = 0LL;
          do
          {
            if ( v32 == v70[v33] && v70[v33 + 1] == *((_WORD *)v30 - 1) )
            {
              v29[(v33 * 2) >> 1] += *v30;
              cx += *v30;
              v59.cx = cx;
            }
            ++v33;
          }
          while ( &v70[v33] < v31 );
        }
        v30 += 2;
      }
      while ( (unsigned __int64)(v30 - 1) < v27 );
      v9 = v60;
      v6 = a5;
    }
    Win32FreePool(v26);
    v34 = v72;
    if ( v63 )
    {
      if ( cx > v72 )
      {
        while ( (_DWORD)v21 )
        {
          v21 = (unsigned int)(v21 - 1);
          cx -= v64[v21];
          v59.cx = cx;
          if ( cx <= v72 )
            goto LABEL_54;
        }
        goto LABEL_55;
      }
LABEL_54:
      if ( !(_DWORD)v21 )
      {
LABEL_55:
        if ( v9 )
          Win32FreePool(v9);
        v6[3].m128i_i64[1] = 0LL;
        return 0LL;
      }
    }
  }
  else
  {
    cx = v59.cx;
    v34 = v72;
  }
  if ( (v11 & 0x10000) != 0 && v71 && (_DWORD)v21 )
  {
    v35 = v64;
    v36 = (unsigned int)(v21 - 1);
    v37 = &v64[v36];
    for ( j = &v70[v36]; j >= v70 && *j == 32; --j )
    {
      cx -= *v37;
      LODWORD(v21) = v21 - 1;
      --v37;
    }
    if ( !(_DWORD)v21 )
      goto LABEL_55;
    v39 = v34 - cx;
    if ( (int)(v34 - cx) < 0 || (unsigned int)v21 < 2 )
      goto LABEL_87;
    v40 = Size_4;
    if ( !Size_4 )
    {
      v40 = nCalcJustInArray(&v60, 0x20u, (char *)v70, 0, v21);
      if ( !v40 )
      {
        while ( v39 > 0 )
        {
          v41 = 0;
          v42 = v35;
          do
          {
            ++*v42;
            if ( !--v39 )
              break;
            ++v41;
            ++v42;
          }
          while ( v41 < (int)v21 - 1 );
        }
        v9 = v60;
LABEL_87:
        v59.cx = v72;
        goto LABEL_88;
      }
      v9 = v60;
    }
    v43 = v40 - 1;
    v44 = v40 - 1;
    if ( v43 >= 0 )
    {
      do
      {
        if ( (int)v21 - 1 >= v9[v44] )
          break;
        --v43;
        --v44;
      }
      while ( v44 >= 0 );
    }
    v45 = v43 + 1;
    v46 = v39 % (unsigned int)(v43 + 1);
    v47 = v39 / (unsigned int)(v43 + 1);
    if ( v43 != -1 )
    {
      v48 = v9;
      v49 = v45;
      do
      {
        v50 = v47;
        if ( v46 > 0 )
          v50 = v47 + 1;
        v51 = *v48;
        --v46;
        ++v48;
        v35[v51] += v50;
        --v49;
      }
      while ( v49 );
    }
    goto LABEL_87;
  }
LABEL_88:
  if ( v71 == 3 )
    memmove(v67[0], Src[1], 4LL * (unsigned int)v21);
  v52 = (int *)v67[0];
  if ( v67[0] )
  {
    v53 = 0;
    if ( (_DWORD)v21 )
    {
      v54 = (unsigned int)v21;
      do
      {
        v55 = *v52;
        *v52 = v53;
        v53 += v55;
        ++v52;
        --v54;
      }
      while ( v54 );
    }
  }
  if ( v65[1] )
    memmove(v65[1], v70, 2LL * (unsigned int)v21);
  if ( v67[1] )
    memset(v67[1], 1, (unsigned int)v21);
  v56 = Src[0];
  if ( Src[0] )
  {
    for ( k = 0; k < (unsigned int)v21; ++v56 )
      *v56 = k++;
  }
  if ( v68.m128i_i64[0] && (unsigned int)GreGetGlyphIndicesW(a1, v70, v21, v68.m128i_i64[0], 0, 0) == -1 )
  {
    LODWORD(v21) = 0;
    v59.cx = 0;
    cy = 0;
  }
  else
  {
    cy = v59.cy;
  }
  if ( v9 )
    Win32FreePool(v9);
  result = (cy << 16) | (unsigned int)LOWORD(v59.cx);
  v6[3].m128i_i32[2] = v21;
  v6[3].m128i_i32[3] = v21;
  return result;
}
