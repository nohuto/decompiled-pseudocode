/*
 * XREFs of RtlpHpVsContextInitialize @ 0x18007F858
 * Callers:
 *     RtlpHpSegHeapCreate @ 0x18007F460 (RtlpHpSegHeapCreate.c)
 * Callees:
 *     memset @ 0x1800ACCC0 (memset.c)
 */

__int64 *__fastcall RtlpHpVsContextInitialize(__m128i *a1, __int64 a2, __m128i *a3)
{
  __m128i v6; // xmm6
  __m128i v7; // xmm0
  __int64 v8; // r8
  __m128i *v9; // rax
  __m128i v10; // xmm1
  __int64 v11; // rdx
  __m128i v12; // xmm1
  __int64 v13; // rax
  __int64 *result; // rax

  v6 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1, (__m128i)(unsigned __int64)a1);
  memset(a1, 0, 0x68uLL);
  v7 = *a3;
  v8 = RtlpHeapKey;
  v9 = a1 + 4;
  v10 = a3[1];
  a1[3].m128i_i64[1] = a2;
  v11 = 2LL;
  a1[4] = v7;
  v7.m128i_i64[0] = a3[2].m128i_i64[0];
  a1[5] = v10;
  a1[6].m128i_i64[0] = v7.m128i_i64[0];
  v12 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v8, (__m128i)(unsigned __int64)v8);
  do
  {
    *v9 = _mm_xor_si128(_mm_xor_si128(_mm_loadu_si128(v9), v12), v6);
    ++v9;
    --v11;
  }
  while ( v11 );
  v13 = a1[6].m128i_i64[0];
  if ( v13 )
    a1[6].m128i_i64[0] = (unsigned __int64)a1 ^ v8 ^ v13;
  result = &a1[1].m128i_i64[1];
  a1->m128i_i64[0] = 0LL;
  a1->m128i_i64[1] = 0LL;
  a1[1].m128i_i64[0] = 0LL;
  a1[2].m128i_i64[0] = (__int64)&a1[1].m128i_i64[1];
  a1[1].m128i_i64[1] = (__int64)&a1[1].m128i_i64[1];
  return result;
}
