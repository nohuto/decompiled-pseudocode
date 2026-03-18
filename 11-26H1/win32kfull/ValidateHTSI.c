/*
 * XREFs of ValidateHTSI @ 0x140142724
 * Callers:
 *     AAHalftoneBitmap @ 0x140141E5C (AAHalftoneBitmap.c)
 * Callees:
 *     ValidateRGBBitFields @ 0x140144828 (ValidateRGBBitFields.c)
 */

__int64 __fastcall ValidateHTSI(__int64 a1, int a2)
{
  unsigned int v3; // r8d
  int v4; // edx
  __int64 v5; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __m128i *v9; // rcx
  unsigned int v10; // r10d
  unsigned __int8 v11; // r8
  char v12; // bl
  int v13; // eax
  __int64 v14; // rdx
  unsigned int v15; // edx
  int v16; // eax
  __int128 *v17; // rax
  __m128i v18; // [rsp+20h] [rbp-20h]
  __int128 v19; // [rsp+20h] [rbp-20h]
  _DWORD *v20; // [rsp+30h] [rbp-10h]
  __int64 v21; // [rsp+30h] [rbp-10h]

  if ( !a2 )
  {
    v8 = *(_QWORD *)(a1 + 24);
    if ( !v8 )
      return 4294967260LL;
    v9 = *(__m128i **)(v8 + 32);
    if ( !v9 )
      return 4294967279LL;
    v10 = 2;
    v11 = _mm_cvtsi128_si32(*v9);
    v18 = *v9;
    v20 = (_DWORD *)v9[1].m128i_i64[0];
    if ( v11 > 2u )
      return 4294967267LL;
    v12 = 4;
    *(_BYTE *)(a1 + 84) = v18.m128i_i8[3];
    v13 = *(unsigned __int8 *)(v8 + 10);
    *(_BYTE *)(a1 + 65) = v13;
    v14 = (unsigned int)(v13 - 1);
    if ( v13 != 1 )
    {
      v14 = (unsigned int)(v13 - 2);
      if ( v13 == 2 )
      {
        v10 = 16;
      }
      else
      {
        v14 = (unsigned int)(v13 - 3);
        if ( v13 != 3 )
        {
          v14 = (unsigned int)(v13 - 4);
          if ( v13 == 4 )
          {
            v12 = 2;
          }
          else
          {
            v14 = (unsigned int)(v13 - 5);
            if ( v13 == 5 )
            {
              if ( !v11
                && v18.m128i_i8[1] == 1
                && v18.m128i_i8[3] <= 5u
                && v18.m128i_i8[2] == 3
                && v18.m128i_i32[1] == 255 )
              {
                v15 = SrcOrderTable[v18.m128i_u8[3]];
                *(_DWORD *)(a1 + 72) = 255 << (8 * BYTE1(v15));
                v16 = 255 << (8 * BYTE2(v15));
                v14 = 8 * HIBYTE(v15);
                *(_DWORD *)(a1 + 76) = v16;
                *(_DWORD *)(a1 + 80) = 255 << v14;
                return (unsigned int)ValidateRGBBitFields(a1 + 64, v14) != 0 ? 1 : -18;
              }
              return 4294967272LL;
            }
            if ( v13 != 6 )
              return 4294967287LL;
          }
          if ( !v11 && v18.m128i_i8[2] == v12 && v18.m128i_i32[2] == 3 && v20 )
          {
            *(_DWORD *)(a1 + 72) = *v20;
            *(_DWORD *)(a1 + 76) = v20[1];
            *(_DWORD *)(a1 + 80) = v20[2];
            return (unsigned int)ValidateRGBBitFields(a1 + 64, v14) != 0 ? 1 : -18;
          }
          return 4294967278LL;
        }
        v10 = 256;
      }
    }
    if ( v18.m128i_i8[1] != 1 )
      return 4294967276LL;
    if ( v18.m128i_i8[2] >= 3u )
    {
      if ( v18.m128i_i8[3] > 5u )
        return 4294967273LL;
      if ( v20 )
      {
        if ( v18.m128i_i32[2] <= v10 && v18.m128i_i32[2] )
        {
          if ( v18.m128i_i32[1] != 255 )
            return 4294967274LL;
          return (unsigned int)ValidateRGBBitFields(a1 + 64, v14) != 0 ? 1 : -18;
        }
        return 4294967276LL;
      }
      return 4294967278LL;
    }
    return 4294967272LL;
  }
  v3 = 1;
  v4 = a2 - 1;
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      v5 = *(_QWORD *)(a1 + 32);
      if ( v5 )
      {
        if ( *(_BYTE *)(v5 + 10) != 1 )
          return (unsigned int)-10;
      }
    }
    return v3;
  }
  v7 = *(_QWORD *)(a1 + 40);
  if ( !v7 )
    return 4294967259LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  if ( *(_BYTE *)(v7 + 10) == 1
    || *(_BYTE *)(v7 + 10) == 2
    || *(_BYTE *)(v7 + 10) == 5
    || *(_BYTE *)(v7 + 10) == 6
    || *(unsigned __int8 *)(v7 + 10) == 252
    || *(unsigned __int8 *)(v7 + 10) == 253 )
  {
    return v3;
  }
  if ( *(unsigned __int8 *)(v7 + 10) == 254 )
  {
    v17 = *(__int128 **)(v7 + 32);
    if ( v17 )
    {
      v21 = *((_QWORD *)v17 + 2);
      v19 = *v17;
      if ( v21 )
      {
        if ( *(_QWORD *)((char *)&v19 + 4) == 0x100000000FFLL && BYTE2(v19) == 1 && !(_BYTE)v19 )
          *(_QWORD *)(a1 + 56) = v21;
      }
    }
    return v3;
  }
  if ( *(unsigned __int8 *)(v7 + 10) == 255 )
    return v3;
  return 4294967285LL;
}
