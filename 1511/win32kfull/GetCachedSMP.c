/*
 * XREFs of GetCachedSMP @ 0x1C01409EC
 * Callers:
 *     HT_CreateStandardMonoPattern @ 0x1C0140944 (HT_CreateStandardMonoPattern.c)
 * Callees:
 *     FindCachedSMP @ 0x1C0140B5C (FindCachedSMP.c)
 *     CreateStandardMonoPattern @ 0x1C0140CD0 (CreateStandardMonoPattern.c)
 *     ComputeBytesPerScanLine @ 0x1C0141100 (ComputeBytesPerScanLine.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 */

__int64 __fastcall GetCachedSMP(__int64 a1, unsigned __int8 *a2)
{
  unsigned __int8 *v2; // rbx
  __int64 v3; // r15
  __m128i *CachedSMP; // rax
  __int64 v5; // rdx
  __m128i *v6; // rbp
  __m128i v7; // xmm0
  unsigned __int16 v8; // ax
  unsigned __int64 v9; // r10
  unsigned __int16 v10; // r11
  char *v11; // rsi
  char *v12; // r13
  unsigned int v13; // edi
  unsigned __int16 v14; // dx
  __int16 v15; // r12
  size_t v16; // r10
  int v17; // eax
  __int16 v18; // r14
  size_t v19; // r15
  __int64 v20; // rbx
  __int64 v21; // rsi
  unsigned int i; // ecx
  char *v24; // [rsp+28h] [rbp-60h]
  __m128i v25; // [rsp+30h] [rbp-58h]

  v2 = a2;
  v3 = a1;
  if ( !a2[4] )
    a2[4] = 8;
  if ( !a2[5] )
    a2[5] = 15;
  if ( a2[3] >= 0x12u )
    return (unsigned int)CreateStandardMonoPattern(v3, v2);
  if ( a2[4] != 8 )
    return (unsigned int)CreateStandardMonoPattern(v3, v2);
  if ( a2[5] != 15 )
    return (unsigned int)CreateStandardMonoPattern(v3, v2);
  CachedSMP = (__m128i *)FindCachedSMP();
  if ( !CachedSMP )
    return (unsigned int)CreateStandardMonoPattern(v3, v2);
  v5 = v2[2];
  v6 = CachedSMP + 1;
  v25 = *CachedSMP;
  v7 = _mm_srli_si128(*CachedSMP, 8);
  *((_WORD *)v2 + 4) = v7.m128i_i16[1];
  *((_WORD *)v2 + 5) = v7.m128i_i16[2];
  v8 = ComputeBytesPerScanLine(1LL, v5, v7.m128i_u16[1]);
  v11 = (char *)*((_QWORD *)v2 + 2);
  v12 = v11;
  v13 = v10 * v8;
  v14 = v8;
  *((_WORD *)v2 + 3) = v8;
  v24 = v11;
  if ( v11 )
  {
    v15 = *(_WORD *)v2;
    v16 = HIWORD(v9);
    v17 = v16;
    if ( (*(_WORD *)v2 & 1) == 0 )
    {
      v6 = (__m128i *)((char *)v6 + (int)(v16 * (v10 - 1)));
      v17 = -(int)v16;
    }
    if ( v10 )
    {
      v18 = v25.m128i_i16[6];
      v19 = v16;
      v20 = v14;
      v21 = v17;
      do
      {
        --v18;
        memmove(v12, v6, v19);
        v12 += v20;
        v6 = (__m128i *)((char *)v6 + v21);
      }
      while ( v18 );
      v2 = a2;
      v11 = v24;
      v3 = a1;
    }
    if ( (v15 & 2) != 0 )
    {
      for ( i = v13; i; --i )
      {
        *v11 = ~*v11;
        ++v11;
      }
    }
  }
  EngReleaseSemaphore(qword_1C0323DB0);
  if ( !v13 )
    return (unsigned int)CreateStandardMonoPattern(v3, v2);
  return v13;
}
