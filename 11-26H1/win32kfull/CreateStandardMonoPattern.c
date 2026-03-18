/*
 * XREFs of CreateStandardMonoPattern @ 0x1401DBE60
 * Callers:
 *     GetCachedSMP @ 0x1401DBA28 (GetCachedSMP.c)
 *     FindCachedSMP @ 0x1401DBC28 (FindCachedSMP.c)
 * Callees:
 *     DivFD6 @ 0x140146D00 (DivFD6.c)
 *     DrawCornerLine @ 0x1401DC3F0 (DrawCornerLine.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall CreateStandardMonoPattern(__int64 a1, __m128i *a2)
{
  __m128i v2; // xmm1
  int v3; // r13d
  unsigned int v4; // r12d
  BOOL v5; // r11d
  unsigned __int8 v6; // r9
  unsigned __int8 v7; // cl
  unsigned int v8; // r10d
  unsigned int v9; // r14d
  int v10; // ecx
  unsigned int v11; // edi
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  unsigned int v17; // ecx
  int v18; // r14d
  unsigned int v19; // edx
  unsigned int v20; // ecx
  unsigned __int16 v21; // si
  unsigned __int16 v22; // r13
  unsigned __int16 v23; // ax
  unsigned int v24; // ecx
  size_t v25; // r12
  _BYTE *v26; // r14
  _BYTE *v27; // r15
  __int16 k; // ax
  int v29; // ecx
  int v30; // edx
  _BYTE *v31; // rax
  char v32; // cl
  char *v33; // rbx
  __int64 v34; // r15
  unsigned __int16 v35; // cx
  unsigned __int16 v36; // ax
  char *v37; // rcx
  __int16 i; // si
  __int16 j; // dx
  char v40; // al
  int v41; // [rsp+30h] [rbp-38h]
  __int16 v42; // [rsp+34h] [rbp-34h]
  int v43; // [rsp+40h] [rbp-28h]
  int v44; // [rsp+44h] [rbp-24h]
  __m128i v45; // [rsp+48h] [rbp-20h]
  _BYTE *Src; // [rsp+58h] [rbp-10h]
  unsigned __int16 v47; // [rsp+B0h] [rbp+48h]
  BOOL v49; // [rsp+C0h] [rbp+58h]
  unsigned int v50; // [rsp+C8h] [rbp+60h]

  v2 = *a2;
  v3 = *(unsigned __int16 *)(a1 + 190);
  v4 = *(unsigned __int16 *)(a1 + 188);
  v42 = 0;
  v45 = *a2;
  v47 = *(_WORD *)(a1 + 190);
  Src = (_BYTE *)a2[1].m128i_i64[0];
  v41 = DivFD6(100, *(_DWORD *)(a1 + 192)) - 100;
  v5 = (_mm_cvtsi128_si32(v2) & 1) == 0;
  v49 = v5;
  v6 = _mm_cvtsi128_si32(_mm_srli_si128(v2, 4));
  if ( !v2.m128i_i8[4] )
    v6 = 8;
  v45.m128i_i8[4] = v6;
  v7 = v45.m128i_u8[5];
  if ( !v45.m128i_i8[5] )
    v7 = 15;
  v45.m128i_i8[5] = v7;
  v8 = ((v7 >> 1) + 100 * v4) / v7;
  v44 = v6;
  v9 = (v4 * v6 + 5) / 0xA;
  if ( v45.m128i_u8[3] > 9u )
  {
    if ( v45.m128i_u8[3] != 10 )
    {
      v10 = v45.m128i_u8[3] - 11;
      if ( v45.m128i_u8[3] != 11 )
      {
LABEL_17:
        v12 = v10 - 1;
        if ( v12 )
        {
          v13 = v12 - 1;
          if ( v13 )
          {
            v14 = v13 - 1;
            if ( v14 )
            {
              v15 = v14 - 1;
              if ( v15 )
              {
                if ( (unsigned int)(v15 - 1) >= 2 )
                  return 0LL;
              }
            }
          }
        }
      }
    }
  }
  else if ( v45.m128i_u8[3] != 9 )
  {
    if ( !v45.m128i_i8[3] || v45.m128i_u8[3] == 1 || (v10 = v45.m128i_u8[3] - 2, v45.m128i_u8[3] == 2) )
    {
      v11 = (v8 + 50) / 0x64;
      v45.m128i_i16[4] = v11;
      if ( v45.m128i_i8[3] )
      {
        if ( v45.m128i_i8[3] == 1 )
          v8 = 800;
      }
      else
      {
        LOWORD(v11) = 8 * v45.m128i_u8[2];
        v45.m128i_i16[4] = v11;
      }
      v49 = v5;
      goto LABEL_26;
    }
    goto LABEL_17;
  }
  v42 = (unsigned __int16)(v45.m128i_u8[3] - 3) % 3u;
  if ( v45.m128i_u8[3] - 3 != 3 * ((unsigned __int16)(v45.m128i_u8[3] - 3) / 3u) )
    v49 = !v5;
  v17 = MonoPatRatio[(unsigned __int16)(v45.m128i_u8[3] - 3) / 3];
  LOWORD(v11) = ((v17 >> 17) + 100 * v8) / HIWORD(v17);
  v45.m128i_i16[4] = v11;
  v8 = ((v17 >> 17) + v8 * (unsigned __int16)v17) / HIWORD(v17);
  v9 = ((v17 >> 17) + 10000 * v9) / HIWORD(v17);
LABEL_26:
  v18 = v9 - v41;
  if ( (_WORD)v4 != (_WORD)v3 )
    v8 = ((v4 >> 1) + v8 * v3) / v4;
  if ( !(_WORD)v11 )
  {
    LOWORD(v11) = 1;
    v45.m128i_i16[4] = 1;
  }
  v19 = (v8 + 50) / 0x64;
  v45.m128i_i16[5] = v19;
  if ( !(_WORD)v19 )
    v45.m128i_i16[5] = 1;
  v20 = v18 + 50;
  v21 = 1;
  if ( (_WORD)v19 )
    v21 = (v8 + 50) / 0x64;
  v22 = 1;
  v23 = v11 - 1;
  if ( (unsigned __int16)(v20 / 0x64) <= (unsigned __int16)v11 )
    v23 = v20 / 0x64;
  if ( v23 )
    v22 = v23;
  v24 = ((unsigned int)(unsigned __int16)v11 + 7) >> 3;
  if ( v45.m128i_u8[2] > 1u && v24 % v45.m128i_u8[2] )
    LOWORD(v24) = v45.m128i_u8[2] + v24 - v24 % v45.m128i_u8[2];
  v25 = (unsigned __int16)v24;
  v43 = (unsigned __int16)v24;
  v45.m128i_i16[3] = v24;
  v50 = (unsigned __int16)v24 * v21;
  v26 = Src;
  v27 = Src;
  if ( !Src )
    goto LABEL_55;
  memset_0(Src, 0, (unsigned __int16)v50);
  if ( v45.m128i_u8[3] <= 9u )
  {
    if ( v45.m128i_u8[3] == 9 )
      goto LABEL_76;
    if ( v45.m128i_i8[3] )
    {
      if ( v45.m128i_u8[3] != 1 && v45.m128i_u8[3] != 2 )
      {
        if ( v45.m128i_u8[3] != 3
          && v45.m128i_u8[3] != 4
          && v45.m128i_u8[3] != 5
          && v45.m128i_u8[3] != 6
          && (unsigned int)v45.m128i_u8[3] - 7 >= 2 )
        {
          goto LABEL_52;
        }
LABEL_76:
        DrawCornerLine(Src, v22, v49);
        if ( v42 == 2 )
        {
          v37 = &Src[(int)(v25 * (v21 - 1))];
          for ( i = v21 >> 1; i; v37 -= 2 * v25 )
          {
            --i;
            for ( j = v25; j; --j )
            {
              *v37 |= *v27;
              v40 = *v37++;
              *v27++ = v40;
            }
          }
        }
        goto LABEL_52;
      }
      v29 = ((unsigned __int16)v11 - v22) >> 1;
      v30 = 128 >> (v29 & 7);
      v31 = &Src[(unsigned __int64)(unsigned __int16)v29 >> 3];
      v32 = 0;
      do
      {
        do
        {
          --v22;
          v32 |= v30;
          LOBYTE(v30) = (unsigned __int8)v30 >> 1;
        }
        while ( (_BYTE)v30 && v22 );
        *v31 = v32;
        LOBYTE(v30) = 0x80;
        ++v31;
        v32 = 0;
      }
      while ( v22 );
      v33 = Src;
      v34 = v21;
      do
      {
        memmove(v33, Src, v25);
        v33 += v25;
        --v34;
      }
      while ( v34 );
      LODWORD(v25) = v43;
    }
    if ( v45.m128i_i8[3] != 1 )
    {
      v35 = v21 - 1;
      v36 = 1;
      if ( (unsigned __int16)(((v44 * (unsigned int)v47 + 5) / 0xA - v41 + 50) / 0x64) < v21 )
        v35 = ((v44 * (unsigned int)v47 + 5) / 0xA - v41 + 50) / 0x64;
      if ( v35 )
        v36 = v35;
      memset_0(&Src[(int)v25 * ((v21 - v36) >> 1)], 255, v36 * (int)v25);
    }
    goto LABEL_52;
  }
  if ( v45.m128i_u8[3] == 10
    || v45.m128i_u8[3] == 11
    || v45.m128i_u8[3] == 12
    || v45.m128i_u8[3] == 13
    || v45.m128i_u8[3] == 14
    || v45.m128i_u8[3] == 15
    || (unsigned int)v45.m128i_u8[3] - 16 <= 1 )
  {
    goto LABEL_76;
  }
LABEL_52:
  if ( (v45.m128i_i8[0] & 2) != 0 )
  {
    for ( k = v50; k; --k )
    {
      *v26 = ~*v26;
      ++v26;
    }
  }
LABEL_55:
  *a2 = v45;
  a2[1].m128i_i64[0] = (__int64)Src;
  return v50;
}
