/*
 * XREFs of ?vVecSquareCompute@WIDENER@pathwide@@AEAAXAEAVLINEDATA@2@@Z @ 0x14010BF0C
 * Callers:
 *     ?vAddEndCap@WIDENER@pathwide@@IEAAXXZ @ 0x14010A494 (-vAddEndCap@WIDENER@pathwide@@IEAAXXZ.c)
 *     ?vAddStartCap@WIDENER@pathwide@@IEAAXXZ @ 0x14010AAB8 (-vAddStartCap@WIDENER@pathwide@@IEAAXXZ.c)
 * Callees:
 *     ?efWorldLength@STYLER@pathwide@@IEAA?AVEFLOAT@@VEVECTORFX@@@Z @ 0x14010C030 (-efWorldLength@STYLER@pathwide@@IEAA-AVEFLOAT@@VEVECTORFX@@@Z.c)
 */

void __fastcall pathwide::WIDENER::vVecSquareCompute(pathwide::WIDENER *this, struct pathwide::LINEDATA *a2)
{
  float v3; // xmm6_4
  float v4; // xmm0_4
  float v5; // xmm6_4
  __m128i v6; // xmm0
  __m128i v7; // xmm1
  int v8; // r9d
  unsigned int v9; // r8d
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  int v13; // r8d
  unsigned int v14; // ecx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  char v18; // [rsp+40h] [rbp+8h] BYREF

  v3 = *((float *)this + 323);
  v4 = *(float *)pathwide::STYLER::efWorldLength(this, &v18, *((_QWORD *)a2 + 6));
  if ( v4 == 0.0 )
    v5 = FP_0_0;
  else
    v5 = v3 / v4;
  v6 = (__m128i)COERCE_UNSIGNED_INT((float)*((int *)a2 + 12));
  v7 = (__m128i)COERCE_UNSIGNED_INT((float)*((int *)a2 + 13));
  *(float *)v6.m128i_i32 = *(float *)v6.m128i_i32 * v5;
  *(float *)v7.m128i_i32 = *(float *)v7.m128i_i32 * v5;
  v8 = _mm_cvtsi128_si32(v6);
  v9 = (unsigned __int8)(v8 >> 23);
  if ( v9 <= 0x9E )
  {
    v10 = v8 & 0x7FFFFFLL | 0x800000;
    if ( v9 < 0x76 )
      v11 = v10 >> (118 - (unsigned __int8)v9);
    else
      v11 = v10 << ((unsigned __int8)v9 - 118);
    v12 = (v11 + 0x80000000LL) >> 32;
    if ( v8 < 0 )
      LODWORD(v12) = -(int)v12;
    *((_DWORD *)a2 + 14) = v12;
  }
  v13 = _mm_cvtsi128_si32(v7);
  v14 = (unsigned __int8)(v13 >> 23);
  if ( v14 <= 0x9E )
  {
    v15 = v13 & 0x7FFFFFLL | 0x800000;
    if ( v14 < 0x76 )
      v16 = v15 >> (118 - (unsigned __int8)v14);
    else
      v16 = v15 << ((unsigned __int8)v14 - 118);
    v17 = (v16 + 0x80000000LL) >> 32;
    if ( v13 < 0 )
      LODWORD(v17) = -(int)v17;
    *((_DWORD *)a2 + 15) = v17;
  }
  *(_DWORD *)a2 |= 2u;
}
