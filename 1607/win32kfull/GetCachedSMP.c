/*
 * XREFs of GetCachedSMP @ 0x1C0249C30
 * Callers:
 *     HT_CreateStandardMonoPattern @ 0x1C024A0C0 (HT_CreateStandardMonoPattern.c)
 * Callees:
 *     memmove @ 0x1C015A040 (memmove.c)
 *     FindCachedSMP @ 0x1C0249A4C (FindCachedSMP.c)
 *     ComputeBytesPerScanLine @ 0x1C024A6D8 (ComputeBytesPerScanLine.c)
 *     CreateStandardMonoPattern @ 0x1C024A888 (CreateStandardMonoPattern.c)
 */

__int64 __fastcall GetCachedSMP(__int64 a1, unsigned __int8 *a2)
{
  unsigned __int8 *v2; // rbx
  __int64 v3; // r15
  unsigned int v4; // edx
  __m128i *CachedSMP; // rax
  __int64 v6; // rdx
  __m128i *v7; // rbp
  __m128i v8; // xmm0
  unsigned __int16 v9; // ax
  unsigned __int64 v10; // r10
  unsigned __int16 v11; // r11
  char *v12; // rsi
  char *v13; // r13
  unsigned int v14; // edi
  unsigned __int16 v15; // dx
  __int16 v16; // r12
  size_t v17; // r10
  int v18; // eax
  __int16 v19; // r14
  size_t v20; // r15
  __int64 v21; // rbx
  __int64 v22; // rsi
  unsigned int i; // ecx
  char *v25; // [rsp+28h] [rbp-60h]
  __m128i v26; // [rsp+30h] [rbp-58h]

  v2 = a2;
  v3 = a1;
  if ( !a2[4] )
    a2[4] = 8;
  if ( !a2[5] )
    a2[5] = 15;
  v4 = a2[3];
  if ( v4 >= 0x12 )
    return (unsigned int)CreateStandardMonoPattern(v3, v2);
  if ( v2[4] != 8 )
    return (unsigned int)CreateStandardMonoPattern(v3, v2);
  if ( v2[5] != 15 )
    return (unsigned int)CreateStandardMonoPattern(v3, v2);
  CachedSMP = (__m128i *)FindCachedSMP(a1, v4);
  if ( !CachedSMP )
    return (unsigned int)CreateStandardMonoPattern(v3, v2);
  v6 = v2[2];
  v7 = CachedSMP + 1;
  v26 = *CachedSMP;
  v8 = _mm_srli_si128(*CachedSMP, 8);
  *((_WORD *)v2 + 4) = v8.m128i_i16[1];
  *((_WORD *)v2 + 5) = v8.m128i_i16[2];
  v9 = ComputeBytesPerScanLine(1LL, v6, v8.m128i_u16[1]);
  v12 = (char *)*((_QWORD *)v2 + 2);
  v13 = v12;
  v14 = v11 * v9;
  v15 = v9;
  *((_WORD *)v2 + 3) = v9;
  v25 = v12;
  if ( v12 )
  {
    v16 = *(_WORD *)v2;
    v17 = HIWORD(v10);
    v18 = v17;
    if ( (*(_WORD *)v2 & 1) == 0 )
    {
      v7 = (__m128i *)((char *)v7 + (int)(v17 * (v11 - 1)));
      v18 = -(int)v17;
    }
    if ( v11 )
    {
      v19 = v26.m128i_i16[6];
      v20 = v17;
      v21 = v15;
      v22 = v18;
      do
      {
        --v19;
        memmove(v13, v7, v20);
        v13 += v21;
        v7 = (__m128i *)((char *)v7 + v22);
      }
      while ( v19 );
      v2 = a2;
      v12 = v25;
      v3 = a1;
    }
    if ( (v16 & 2) != 0 )
    {
      for ( i = v14; i; --i )
      {
        *v12 = ~*v12;
        ++v12;
      }
    }
  }
  EngReleaseSemaphore(qword_1C0329160);
  if ( !v14 )
    return (unsigned int)CreateStandardMonoPattern(v3, v2);
  return v14;
}
