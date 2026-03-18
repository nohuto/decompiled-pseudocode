/*
 * XREFs of OutputAATo16BPP_ExtBGR @ 0x140307030
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall OutputAATo16BPP_ExtBGR(
        unsigned int *a1,
        unsigned __int8 *a2,
        unsigned __int64 a3,
        _WORD *a4,
        __int64 a5,
        unsigned __int16 *a6,
        unsigned __int64 a7,
        int a8,
        int a9)
{
  unsigned __int16 *v11; // r9
  unsigned __int8 *v12; // r10
  int v13; // r14d
  int v14; // r15d
  __int64 result; // rax
  unsigned __int8 *v16; // r10
  int v17; // ecx
  unsigned int v18; // r8d
  __m128i v19; // [rsp+0h] [rbp-38h]

  v11 = a6;
  v12 = a2;
  v13 = *(_DWORD *)(a5 - 16);
  v19 = *(__m128i *)(a5 - 24);
  v14 = _mm_cvtsi128_si32(v19);
  if ( (_BYTE)a9 )
  {
    v12 = a2 + 4;
    if ( a2[7] )
      *a4 = v19.m128i_i16[7] ^ (HIWORD(v14) & ((*(_DWORD *)(a5 + 4LL * *v12) - (unsigned int)*a6) >> 16) | HIWORD(v13) & ((*(_DWORD *)(a5 + 4LL * v12[2] + 2048) - (unsigned int)a6[2]) >> 16) | v19.m128i_i16[3] & ((*(_DWORD *)(a5 + 4LL * v12[1] + 1024) - (unsigned int)a6[1]) >> 16));
    ++a4;
    v11 = a6 + 3;
    if ( (unsigned __int64)(a6 + 3) >= a7 )
      v11 = (unsigned __int16 *)((char *)v11 + a8);
  }
  result = *a1;
  v16 = v12 + 4;
  if ( (result & 0x80u) == 0LL )
  {
    while ( (unsigned __int64)v16 < a3 )
    {
      result = v16[4];
      v17 = v11[3];
      v18 = v19.m128i_i32[1] & (*(_DWORD *)(a5 + 4LL * v16[5] + 1024) - v11[4]) | v13 & (*(_DWORD *)(a5 + 4LL * v16[6] + 2048)
                                                                                       - v11[5]) | ((v14 & (*(_DWORD *)(a5 + 4LL * *v16) - *v11) | v19.m128i_i32[1] & (*(_DWORD *)(a5 + 4LL * v16[1] + 1024) - v11[1]) | v13 & (*(_DWORD *)(a5 + 4LL * v16[2] + 2048) - (unsigned int)v11[2])) >> 16);
      v11 += 6;
      *(_DWORD *)a4 = v19.m128i_i32[3] ^ (v14 & (*(_DWORD *)(a5 + 4 * result) - v17) | v18);
      a4 += 2;
      if ( (unsigned __int64)v11 >= a7 )
      {
        result = a8;
        v11 = (unsigned __int16 *)((char *)v11 + a8);
      }
      v16 += 8;
    }
  }
  else
  {
    while ( (unsigned __int64)v16 < a3 )
    {
      if ( v16[3] )
      {
        result = HIWORD(v19.m128i_i32[3]);
        *a4 = v19.m128i_i16[7] ^ (HIWORD(v14) & ((*(_DWORD *)(a5 + 4LL * *v16) - (unsigned int)*v11) >> 16) | v19.m128i_i16[3] & ((*(_DWORD *)(a5 + 4LL * v16[1] + 1024) - (unsigned int)v11[1]) >> 16) | HIWORD(v13) & ((*(_DWORD *)(a5 + 4LL * v16[2] + 2048) - (unsigned int)v11[2]) >> 16));
      }
      ++a4;
      v11 += 3;
      if ( (unsigned __int64)v11 >= a7 )
      {
        result = a8;
        v11 = (unsigned __int16 *)((char *)v11 + a8);
      }
      v16 += 4;
    }
  }
  if ( HIBYTE(a9) )
  {
    if ( v16[3] )
    {
      result = *v16;
      *a4 = v19.m128i_i16[7] ^ (HIWORD(v14) & ((*(_DWORD *)(a5 + 4 * result) - (unsigned int)*v11) >> 16) | v19.m128i_i16[3] & ((*(_DWORD *)(a5 + 4LL * v16[1] + 1024) - (unsigned int)v11[1]) >> 16) | HIWORD(v13) & ((*(_DWORD *)(a5 + 4LL * v16[2] + 2048) - (unsigned int)v11[2]) >> 16));
    }
  }
  return result;
}
