/*
 * XREFs of ?IsValidCheckSum@EDID_PARSER@MonDescParser@@AEBA_NPEAT_EDID_V1_BLOCK@@@Z @ 0x1C000ABB8
 * Callers:
 *     ?IsValidCheckSum@EDID_PARSER@MonDescParser@@QEBA_NH@Z @ 0x1C000AB20 (-IsValidCheckSum@EDID_PARSER@MonDescParser@@QEBA_NH@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MonDescParser::EDID_PARSER::IsValidCheckSum(
        MonDescParser::EDID_PARSER *this,
        union _EDID_V1_BLOCK *a2)
{
  __m128i v2; // xmm1
  __int64 v3; // rax
  __m128i v4; // xmm0
  __m128i v5; // xmm0
  __m128i v6; // xmm1
  __m128i v7; // xmm1
  __m128i v8; // xmm1

  v2 = 0LL;
  v3 = 8LL;
  do
  {
    v4 = _mm_loadu_si128((const __m128i *)a2);
    a2 = (union _EDID_V1_BLOCK *)((char *)a2 + 16);
    v5 = _mm_add_epi8(v4, v2);
    v2 = v5;
    --v3;
  }
  while ( v3 );
  v6 = _mm_add_epi8(v5, _mm_srli_si128(v5, 8));
  v7 = _mm_add_epi8(v6, _mm_srli_si128(v6, 4));
  v8 = _mm_add_epi8(v7, _mm_srli_si128(v7, 2));
  return (unsigned __int8)_mm_cvtsi128_si32(_mm_add_epi8(v8, _mm_srli_si128(v8, 1))) == 0;
}
