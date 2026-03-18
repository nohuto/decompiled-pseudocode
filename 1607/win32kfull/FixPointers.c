/*
 * XREFs of FixPointers @ 0x1C02DFF7C
 * Callers:
 *     fsc_SetupScan @ 0x1C00BF494 (fsc_SetupScan.c)
 *     fsc_MeasureGlyph @ 0x1C00C3070 (fsc_MeasureGlyph.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FixPointers(__m128i *a1)
{
  __int64 v1; // r8
  __m128i *v3; // rax
  __int64 v4; // rcx
  __m128i v5; // xmm1
  __int64 i; // rax
  __int64 result; // rax

  v1 = a1[2].m128i_i64[0];
  v3 = a1;
  v4 = 2LL;
  v5 = _mm_sub_epi64(
         _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1, (__m128i)(unsigned __int64)a1),
         _mm_unpacklo_epi64((__m128i)(unsigned __int64)v1, (__m128i)(unsigned __int64)v1));
  do
  {
    *v3 = _mm_add_epi64(_mm_loadu_si128(v3), v5);
    ++v3;
    --v4;
  }
  while ( v4 );
  for ( i = a1->m128i_i64[0]; *(_WORD *)i != 0x7FFF; i = *(_QWORD *)(i + 8) )
    *(_QWORD *)(i + 8) += (char *)a1 - v1;
  for ( result = a1->m128i_i64[1]; *(_WORD *)result != 0x7FFF; result = *(_QWORD *)(result + 8) )
    *(_QWORD *)(result + 8) += (char *)a1 - v1;
  a1[2].m128i_i64[0] = (__int64)a1;
  return result;
}
