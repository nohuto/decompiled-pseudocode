/*
 * XREFs of CreateStandardMonoPattern @ 0x1C0114B60
 * Callers:
 *     GetCachedSMP @ 0x1C011487C (GetCachedSMP.c)
 *     FindCachedSMP @ 0x1C01149EC (FindCachedSMP.c)
 * Callees:
 *     DivFD6 @ 0x1C00A7640 (DivFD6.c)
 *     ComputeBytesPerScanLine @ 0x1C0114F90 (ComputeBytesPerScanLine.c)
 *     DrawCornerLine @ 0x1C0114FDC (DrawCornerLine.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 *     memset @ 0x1C015D4C0 (memset.c)
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
  int v14; // r11d
  unsigned int v15; // ebx
  unsigned int v16; // edi
  _BYTE *v17; // r14
  __int64 result; // rax
  char *v19; // rsi
  __int64 v20; // r12
  unsigned int v21; // edx
  _BYTE *v22; // rdx
  int v23; // r8d
  char v24; // al
  char *v25; // rcx
  __int16 i; // bx
  unsigned __int16 j; // dx
  char v28; // al
  __int16 k; // dx
  int v30; // [rsp+20h] [rbp-58h]
  __m128i v31; // [rsp+30h] [rbp-48h]
  _BYTE *Src; // [rsp+40h] [rbp-38h]
  unsigned int v33; // [rsp+48h] [rbp-30h]
  unsigned __int16 v34; // [rsp+4Ch] [rbp-2Ch]
  int v35; // [rsp+50h] [rbp-28h]
  char v36; // [rsp+5Ch] [rbp-1Ch]
  int v37; // [rsp+60h] [rbp-18h]
  BOOL v39; // [rsp+D0h] [rbp+58h]
  int v40; // [rsp+D8h] [rbp+60h]

  v2 = *a2;
  v3 = *(_WORD *)(a1 + 190);
  v4 = *(unsigned __int16 *)(a1 + 188);
  LOWORD(v40) = 0;
  v31 = *a2;
  Src = (_BYTE *)a2[1].m128i_i64[0];
  v5 = HIBYTE(a2->m128i_u32[0]);
  v35 = DivFD6(100, *(_DWORD *)(a1 + 192)) - 100;
  v36 = _mm_cvtsi128_si32(v2);
  v39 = (v36 & 1) == 0;
  v6 = _mm_cvtsi128_si32(_mm_srli_si128(v2, 4));
  if ( !v2.m128i_i8[4] )
    v6 = 8;
  v31.m128i_i8[4] = v6;
  v7 = v31.m128i_u8[5];
  if ( !v31.m128i_i8[5] )
    v7 = 15;
  v31.m128i_i8[5] = v7;
  v8 = ((v7 >> 1) + 100 * v4) / v7;
  v37 = v6;
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
LABEL_10:
    v14 = v9 - v35;
    if ( (_WORD)v4 != v3 )
      v8 = ((v4 >> 1) + v8 * v3) / v4;
    if ( !(_WORD)v13 )
    {
      LOWORD(v13) = 1;
      v31.m128i_i16[4] = 1;
    }
    v15 = (v8 + 50) / 0x64;
    v31.m128i_i16[5] = v15;
    if ( !(_WORD)v15 )
    {
      LOWORD(v15) = 1;
      v31.m128i_i16[5] = 1;
    }
    v16 = (v14 + 50) / 0x64u;
    if ( (unsigned __int16)v16 > (unsigned __int16)v13 )
      LOWORD(v16) = v13 - 1;
    if ( !(_WORD)v16 )
      LOWORD(v16) = 1;
    v17 = Src;
    v34 = ComputeBytesPerScanLine(1LL, v31.m128i_u8[2], (unsigned __int16)v13);
    v31.m128i_i16[3] = v34;
    result = v34 * (unsigned int)(unsigned __int16)v15;
    v33 = v34 * (unsigned __int16)v15;
    if ( !Src )
      goto LABEL_35;
    memset(Src, 0, (unsigned __int16)(v34 * v15));
    if ( v5 )
    {
      if ( (unsigned __int8)v5 > 2u )
      {
        if ( (unsigned __int8)v5 <= 0x11u )
        {
          LOWORD(v30) = v16;
          DrawCornerLine(Src, v30, v39);
          if ( (_WORD)v40 == 2 )
          {
            v25 = &Src[v34 * ((unsigned __int16)v15 - 1)];
            for ( i = (unsigned __int16)v15 >> 1; i; v25 -= 2 * v34 )
            {
              --i;
              for ( j = v34; j; --j )
              {
                *v25 |= *v17;
                v28 = *v25++;
                *v17++ = v28;
              }
            }
            v17 = Src;
          }
        }
LABEL_34:
        result = v33;
        if ( (v36 & 2) != 0 )
        {
          for ( k = v33; k; --k )
          {
            *v17 = ~*v17;
            ++v17;
          }
        }
LABEL_35:
        *a2 = v31;
        a2[1].m128i_i64[0] = (__int64)Src;
        return result;
      }
      v22 = &Src[(unsigned __int64)(unsigned __int16)(((unsigned __int16)v13 - (unsigned __int16)v16) >> 1) >> 3];
      v23 = 128 >> ((((unsigned __int16)v13 - (unsigned __int16)v16) >> 1) & 7);
      while ( 1 )
      {
        v24 = 0;
        if ( !(_WORD)v16 )
          break;
        do
        {
          LOWORD(v16) = v16 - 1;
          v24 |= v23;
          LOBYTE(v23) = (unsigned __int8)v23 >> 1;
        }
        while ( (_BYTE)v23 && (_WORD)v16 );
        *v22 = v24;
        LOBYTE(v23) = 0x80;
        ++v22;
      }
      v19 = Src;
      v20 = (unsigned __int16)v15;
      do
      {
        memmove(v19, Src, v34);
        v19 += v34;
        --v20;
      }
      while ( v20 );
      v5 = v31.m128i_i8[3];
    }
    if ( v5 != 1 )
    {
      v21 = ((v37 * (unsigned int)v3 + 5) / 0xA - v35 + 50) / 0x64;
      if ( (unsigned __int16)v21 >= (unsigned __int16)v15 )
        LOWORD(v21) = v15 - 1;
      if ( !(_WORD)v21 )
        LOWORD(v21) = 1;
      memset(&Src[v34 * (((unsigned __int16)v15 - (unsigned __int16)v21) >> 1)], 255, v34 * (unsigned __int16)v21);
    }
    goto LABEL_34;
  }
  if ( v31.m128i_i8[3] <= 0x11u )
  {
    v10 = (unsigned __int16)(v31.m128i_u8[3] - 3) / 3;
    v40 = (unsigned __int16)(v31.m128i_u8[3] - 3) % 3;
    if ( v31.m128i_u8[3] - 3 != 3 * (_WORD)v10 )
      v39 = (v36 & 1) != 0;
    v11 = HIWORD(MonoPatRatio[v10]);
    v12 = MonoPatRatio[v10] >> 17;
    v13 = (v12 + 100 * v8) / v11;
    v31.m128i_i16[4] = v13;
    v8 = (v12 + v8 * (unsigned __int16)MonoPatRatio[v10]) / v11;
    v9 = (v12 + 10000 * v9) / v11;
    goto LABEL_10;
  }
  return 0LL;
}
