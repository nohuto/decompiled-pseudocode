/*
 * XREFs of CreateStandardMonoPattern @ 0x1C024A888
 * Callers:
 *     FindCachedSMP @ 0x1C0249A4C (FindCachedSMP.c)
 *     GetCachedSMP @ 0x1C0249C30 (GetCachedSMP.c)
 * Callees:
 *     DivFD6 @ 0x1C00F5E78 (DivFD6.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     ComputeBytesPerScanLine @ 0x1C024A6D8 (ComputeBytesPerScanLine.c)
 *     DrawCornerLine @ 0x1C024ACE0 (DrawCornerLine.c)
 */

__int64 __fastcall CreateStandardMonoPattern(__int64 a1, __m128i *a2)
{
  __m128i v2; // xmm0
  unsigned __int16 v3; // r13
  unsigned int v4; // r15d
  __int8 v5; // r12
  unsigned __int8 v6; // r9
  unsigned __int8 v7; // cl
  unsigned int v8; // r10d
  unsigned int v9; // r11d
  int v10; // edx
  unsigned int v11; // r9d
  int v12; // r8d
  unsigned int v13; // esi
  __int64 result; // rax
  int v15; // r11d
  unsigned int v16; // ebx
  unsigned int v17; // edi
  _BYTE *v18; // r14
  char *v19; // rcx
  __int16 i; // bx
  unsigned __int16 j; // dx
  char v22; // al
  _BYTE *v23; // rdx
  int v24; // r8d
  char v25; // al
  char *v26; // rsi
  __int64 v27; // r12
  unsigned int v28; // edx
  __int16 k; // dx
  int v30; // [rsp+20h] [rbp-58h]
  __m128i v31; // [rsp+30h] [rbp-48h]
  _BYTE *Src; // [rsp+40h] [rbp-38h]
  unsigned __int16 v33; // [rsp+48h] [rbp-30h]
  int v34; // [rsp+4Ch] [rbp-2Ch]
  unsigned int v35; // [rsp+54h] [rbp-24h]
  int v36; // [rsp+5Ch] [rbp-1Ch]
  char v37; // [rsp+60h] [rbp-18h]
  BOOL v39; // [rsp+D0h] [rbp+58h]
  int v40; // [rsp+D8h] [rbp+60h]

  v2 = *a2;
  v3 = *(_WORD *)(a1 + 190);
  v4 = *(unsigned __int16 *)(a1 + 188);
  LOWORD(v40) = 0;
  v31 = *a2;
  Src = (_BYTE *)a2[1].m128i_i64[0];
  v5 = HIBYTE(a2->m128i_u32[0]);
  v34 = DivFD6(100, *(_DWORD *)(a1 + 192)) - 100;
  v37 = _mm_cvtsi128_si32(v2);
  v39 = (v37 & 1) == 0;
  v6 = _mm_cvtsi128_si32(_mm_srli_si128(v2, 4));
  if ( !v2.m128i_i8[4] )
    v6 = 8;
  v31.m128i_i8[4] = v6;
  v7 = v31.m128i_u8[5];
  if ( !v31.m128i_i8[5] )
    v7 = 15;
  v31.m128i_i8[5] = v7;
  v8 = ((v7 >> 1) + 100 * v4) / v7;
  v36 = v6;
  v9 = (v4 * v6 + 5) / 0xA;
  if ( v31.m128i_i8[3] <= 2u )
  {
    v31.m128i_i16[4] = (v8 + 50) / 0x64;
    LOWORD(v13) = v31.m128i_i16[4];
    if ( v31.m128i_i8[3] )
    {
      if ( v31.m128i_i8[3] == 1 )
        v8 = 800;
    }
    else
    {
      LOWORD(v13) = 8 * v31.m128i_u8[2];
      v31.m128i_i16[4] = v13;
    }
  }
  else
  {
    if ( v31.m128i_i8[3] > 0x11u )
      return 0LL;
    v10 = (unsigned __int16)(v31.m128i_u8[3] - 3) / 3;
    v40 = (unsigned __int16)(v31.m128i_u8[3] - 3) % 3;
    if ( v31.m128i_u8[3] - 3 != 3 * (_WORD)v10 )
      v39 = (v37 & 1) != 0;
    v11 = HIWORD(MonoPatRatio[v10]);
    v12 = MonoPatRatio[v10] >> 17;
    v13 = (v12 + 100 * v8) / v11;
    v31.m128i_i16[4] = v13;
    v8 = (v12 + v8 * (unsigned __int16)MonoPatRatio[v10]) / v11;
    v9 = (v12 + 10000 * v9) / v11;
  }
  v15 = v9 - v34;
  if ( (_WORD)v4 != v3 )
    v8 = ((v4 >> 1) + v8 * v3) / v4;
  if ( !(_WORD)v13 )
  {
    LOWORD(v13) = 1;
    v31.m128i_i16[4] = 1;
  }
  v16 = (v8 + 50) / 0x64;
  v31.m128i_i16[5] = v16;
  if ( !(_WORD)v16 )
  {
    LOWORD(v16) = 1;
    v31.m128i_i16[5] = 1;
  }
  v17 = (v15 + 50) / 0x64u;
  if ( (unsigned __int16)v17 > (unsigned __int16)v13 )
    LOWORD(v17) = v13 - 1;
  if ( !(_WORD)v17 )
    LOWORD(v17) = 1;
  v18 = Src;
  v33 = ComputeBytesPerScanLine(1u, v31.m128i_u8[2], (unsigned __int16)v13);
  v31.m128i_i16[3] = v33;
  result = v33 * (unsigned int)(unsigned __int16)v16;
  v35 = v33 * (unsigned __int16)v16;
  if ( Src )
  {
    memset(Src, 0, (unsigned __int16)(v33 * v16));
    if ( v5 )
    {
      if ( (unsigned __int8)v5 > 2u )
      {
        if ( (unsigned __int8)v5 <= 0x11u )
        {
          LOWORD(v30) = v17;
          DrawCornerLine(Src, v30, v39);
          if ( (_WORD)v40 == 2 )
          {
            v19 = &Src[v33 * ((unsigned __int16)v16 - 1)];
            for ( i = (unsigned __int16)v16 >> 1; i; v19 -= 2 * v33 )
            {
              --i;
              for ( j = v33; j; --j )
              {
                *v19 |= *v18;
                v22 = *v19++;
                *v18++ = v22;
              }
            }
            v18 = Src;
          }
        }
LABEL_50:
        result = v35;
        if ( (v37 & 2) != 0 )
        {
          for ( k = v35; k; --k )
          {
            *v18 = ~*v18;
            ++v18;
          }
        }
        goto LABEL_53;
      }
      v23 = &Src[(unsigned __int64)(unsigned __int16)(((unsigned __int16)v13 - (unsigned __int16)v17) >> 1) >> 3];
      v24 = 128 >> ((((unsigned __int16)v13 - (unsigned __int16)v17) >> 1) & 7);
      while ( 1 )
      {
        v25 = 0;
        if ( !(_WORD)v17 )
          break;
        do
        {
          LOWORD(v17) = v17 - 1;
          v25 |= v24;
          LOBYTE(v24) = (unsigned __int8)v24 >> 1;
        }
        while ( (_BYTE)v24 && (_WORD)v17 );
        *v23 = v25;
        LOBYTE(v24) = 0x80;
        ++v23;
      }
      v26 = Src;
      v27 = (unsigned __int16)v16;
      do
      {
        memmove(v26, Src, v33);
        v26 += v33;
        --v27;
      }
      while ( v27 );
      v5 = v31.m128i_i8[3];
    }
    if ( v5 != 1 )
    {
      v28 = ((v36 * (unsigned int)v3 + 5) / 0xA - v34 + 50) / 0x64;
      if ( (unsigned __int16)v28 >= (unsigned __int16)v16 )
        LOWORD(v28) = v16 - 1;
      if ( !(_WORD)v28 )
        LOWORD(v28) = 1;
      memset(&Src[v33 * (((unsigned __int16)v16 - (unsigned __int16)v28) >> 1)], 255, v33 * (unsigned __int16)v28);
    }
    goto LABEL_50;
  }
LABEL_53:
  *a2 = v31;
  a2[1].m128i_i64[0] = (__int64)Src;
  return result;
}
