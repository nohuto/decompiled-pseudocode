/*
 * XREFs of PopBootLoaderSiData @ 0x1403EF438
 * Callers:
 *     PoBroadcastSystemState @ 0x1403EE2D4 (PoBroadcastSystemState.c)
 * Callees:
 *     BapdRegisterSiData @ 0x1403F6D18 (BapdRegisterSiData.c)
 */

__int64 __fastcall PopBootLoaderSiData(__int64 a1, int a2)
{
  __m128i *v2; // r10
  unsigned __int64 v3; // xmm2_8
  __int64 result; // rax

  v2 = *(__m128i **)(a1 + 32);
  v3 = _mm_srli_si128(v2[1], 8).m128i_u64[0];
  result = HIDWORD(v3);
  if ( HIDWORD(v3) == 1 )
  {
    if ( a2 )
      return BapdRegisterSiData(&v2->m128i_i8[a2], (unsigned int)*(_OWORD *)&v2[1] - a2);
  }
  return result;
}
