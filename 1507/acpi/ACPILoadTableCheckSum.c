/*
 * XREFs of ACPILoadTableCheckSum @ 0x1C0086290
 * Callers:
 *     ACPIInitializeDDBs @ 0x1C0085FB4 (ACPIInitializeDDBs.c)
 * Callees:
 *     <none>
 */

bool __fastcall ACPILoadTableCheckSum(const __m128i *a1, unsigned int a2)
{
  char v2; // al
  unsigned int v3; // r8d
  __m128i v5; // xmm2
  __m128i v6; // xmm1
  unsigned int v7; // edx
  __m128i v8; // xmm0
  __m128i v9; // xmm0
  __m128i v10; // xmm1
  __m128i v11; // xmm1
  __m128i v12; // xmm1
  __m128i v13; // xmm1
  __int64 v14; // rdx

  v2 = 0;
  v3 = 0;
  if ( !a2 )
    return 1;
  if ( a2 >= 0x20 )
  {
    v5 = 0LL;
    v6 = 0LL;
    v7 = a2 - (a2 & 0x1F);
    do
    {
      v3 += 32;
      v5 = _mm_add_epi8(_mm_loadu_si128(a1), v5);
      v8 = _mm_loadu_si128(a1 + 1);
      a1 += 2;
      v9 = _mm_add_epi8(v8, v6);
      v6 = v9;
    }
    while ( v3 < v7 );
    v10 = _mm_add_epi8(v9, v5);
    v11 = _mm_add_epi8(v10, _mm_srli_si128(v10, 8));
    v12 = _mm_add_epi8(v11, _mm_srli_si128(v11, 4));
    v13 = _mm_add_epi8(v12, _mm_srli_si128(v12, 2));
    v2 = _mm_cvtsi128_si32(_mm_add_epi8(v13, _mm_srli_si128(v13, 1)));
  }
  if ( v3 < a2 )
  {
    v14 = a2 - v3;
    do
    {
      v2 += a1->m128i_i8[0];
      a1 = (const __m128i *)((char *)a1 + 1);
      --v14;
    }
    while ( v14 );
  }
  return !v2;
}
