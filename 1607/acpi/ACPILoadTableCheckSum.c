/*
 * XREFs of ACPILoadTableCheckSum @ 0x1C00A6AE0
 * Callers:
 *     ACPIInitializeDDBs @ 0x1C00A67F0 (ACPIInitializeDDBs.c)
 * Callees:
 *     ACPIAssert @ 0x1C0007334 (ACPIAssert.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0007348 (WPP_RECORDER_SF_qD.c)
 */

char __fastcall ACPILoadTableCheckSum(const __m128i *a1, unsigned int a2)
{
  unsigned int v2; // esi
  char v3; // bp
  char v4; // di
  const __m128i *v5; // rbx
  char v6; // r14
  int v7; // r9d
  int v8; // r8d
  unsigned int v9; // ecx
  __m128i v10; // xmm1
  __m128i v11; // xmm2
  __m128i v12; // xmm0
  __m128i v13; // xmm0
  __m128i v14; // xmm1
  __m128i v15; // xmm1
  __m128i v16; // xmm1
  __m128i v17; // xmm1
  __int64 v18; // rax
  int v19; // edx

  v2 = a2;
  v3 = (char)a1;
  v4 = 0;
  v5 = a1;
  v6 = a2 + (_BYTE)a1 - 1;
  LOBYTE(a2) = 4;
  WPP_RECORDER_SF_qD(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    6,
    27,
    (__int64)&WPP_71c9c355fd613e34483cf3f827b845ba_Traceguids,
    (char)a1,
    v6);
  v8 = 0;
  v9 = 0;
  if ( !v2 )
    goto LABEL_10;
  if ( v2 >= 0x20 )
  {
    v10 = 0LL;
    v11 = 0LL;
    do
    {
      v9 += 32;
      v10 = _mm_add_epi8(_mm_loadu_si128(v5), v10);
      v12 = _mm_loadu_si128(v5 + 1);
      v5 += 2;
      v13 = _mm_add_epi8(v12, v11);
      v11 = v13;
    }
    while ( v9 < v2 - (v2 & 0x1F) );
    v14 = _mm_add_epi8(v10, v13);
    v15 = _mm_add_epi8(v14, _mm_srli_si128(v14, 8));
    v16 = _mm_add_epi8(v15, _mm_srli_si128(v15, 4));
    v17 = _mm_add_epi8(v16, _mm_srli_si128(v16, 2));
    v4 = _mm_cvtsi128_si32(_mm_add_epi8(v17, _mm_srli_si128(v17, 1)));
  }
  if ( v9 < v2 )
  {
    v18 = v2 - v9;
    do
    {
      v4 += v5->m128i_i8[0];
      v5 = (const __m128i *)((char *)v5 + 1);
      --v18;
    }
    while ( v18 );
  }
  if ( !v4 )
LABEL_10:
    v8 = 1;
  ACPIAssert(v8, 8194, v8, v7);
  if ( !v4 )
    return 1;
  LOBYTE(v19) = 2;
  WPP_RECORDER_SF_qD(
    WPP_GLOBAL_Control->DeviceExtension,
    v19,
    6,
    28,
    (__int64)&WPP_71c9c355fd613e34483cf3f827b845ba_Traceguids,
    v3,
    v6);
  return 0;
}
