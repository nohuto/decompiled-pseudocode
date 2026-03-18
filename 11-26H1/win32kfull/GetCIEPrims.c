/*
 * XREFs of GetCIEPrims @ 0x14017FF40
 * Callers:
 *     HT_CreateDeviceHalftoneInfo @ 0x14017F0FC (HT_CreateDeviceHalftoneInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetCIEPrims(__m128i *a1, _DWORD *a2, __int64 a3, int a4)
{
  unsigned __int16 v6; // di
  unsigned __int64 v7; // r9
  unsigned __int16 v8; // dx
  unsigned __int16 v9; // r8
  unsigned __int64 v10; // r10
  unsigned __int16 v11; // cx
  unsigned __int16 epi16; // r11
  __int64 result; // rax
  __m128i v14; // xmm2
  __int64 v15; // xmm1_8

  if ( !a1 )
    goto LABEL_2;
  v14 = *a1;
  v6 = a1[2].m128i_u16[4];
  v15 = a1[2].m128i_i64[0];
  v11 = _mm_cvtsi128_si32(*a1);
  if ( (unsigned __int16)(v11 - 10) > 0x1F36u
    || (v7 = v14.m128i_i64[0], (unsigned __int16)(v14.m128i_i16[1] - 10) > 0x212Au)
    || (unsigned __int16)(v14.m128i_i16[3] - 10) > 0x1F36u
    || (epi16 = v14.m128i_u16[4], (unsigned __int16)(v14.m128i_i16[4] - 10) > 0x212Au)
    || (v10 = v14.m128i_u64[1], (unsigned __int16)(v14.m128i_i16[6] - 10) > 0x1F36u)
    || (unsigned __int16)(v14.m128i_i16[7] - 10) > 0x212Au
    || (v9 = WORD2(v15), (unsigned __int16)(WORD2(v15) - 10) > 0x1F36u)
    || (v8 = HIWORD(v15), (unsigned __int16)(HIWORD(v15) - 10) > 0x212Au)
    || (unsigned __int16)(v6 - 2500) > 0xE09Cu )
  {
LABEL_2:
    v6 = 10000;
    v7 = HT_CIE_SRGB;
    v8 = 3290;
    v9 = 3127;
    v10 = _mm_srli_si128((__m128i)HT_CIE_SRGB, 8).m128i_u64[0];
    v11 = _mm_cvtsi128_si32((__m128i)HT_CIE_SRGB);
    epi16 = _mm_extract_epi16((__m128i)HT_CIE_SRGB, 4);
  }
  if ( a4 )
  {
    v9 = 6254 - v9;
    v8 = 6580 - v8;
  }
  *a2 = 100 * v11;
  a2[1] = 100 * WORD1(v7);
  a2[2] = 100 * HIWORD(v7);
  a2[3] = 100 * epi16;
  a2[4] = 100 * WORD2(v10);
  a2[5] = 100 * HIWORD(v10);
  a2[6] = 100 * v9;
  result = v6;
  a2[7] = 100 * v8;
  a2[8] = 100 * v6;
  return result;
}
