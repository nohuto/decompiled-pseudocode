/*
 * XREFs of ?ColorLerpHsl@CExpressionValueStack@@QEAAJXZ @ 0x1801593DC
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z @ 0x18008A450 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x18008C620 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 *     ?Color_HSLAfromRGBA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z @ 0x180159840 (-Color_HSLAfromRGBA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z.c)
 *     ?Color_RGBAfromHSLA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z @ 0x1801599B4 (-Color_RGBAfromHSLA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z.c)
 */

__int64 __fastcall CExpressionValueStack::ColorLerpHsl(CExpressionValueStack *this)
{
  unsigned int v1; // edi
  const int *v3; // rdx
  __m128i *v4; // r14
  ColorSpaceHelpers *v5; // rcx
  struct CExpressionValue *v6; // rbx
  const __m128i *v7; // r9
  __int32 v8; // eax
  __m128 v9; // xmm0
  __m128 v10; // xmm6
  ColorSpaceHelpers *v11; // rcx
  float v12; // xmm1_4
  float v13; // xmm2_4
  float v14; // xmm3_4
  ColorSpaceHelpers *v15; // rcx
  __m128i v16; // xmm0
  unsigned int v18; // [rsp+20h] [rbp-50h]
  float *v19; // [rsp+40h] [rbp-30h] BYREF
  float v20; // [rsp+48h] [rbp-28h] BYREF
  float v21; // [rsp+4Ch] [rbp-24h] BYREF
  __m128i v22; // [rsp+50h] [rbp-20h] BYREF

  v1 = 0;
  if ( *((_DWORD *)this + 4) < 3u )
  {
    v18 = 3316;
    v3 = 0LL;
LABEL_9:
    v1 = -2147467259;
    MilInstrumentationCheckHR(0x14u, v3, 0, -2147467259, v18);
    return v1;
  }
  v4 = (__m128i *)CExpressionValueStack::PeekStackValue(this, -2);
  CExpressionValueStack::PeekStackValue(this, -1);
  v6 = CExpressionValueStack::PeekStackValue(this, 0);
  v8 = v4[4].m128i_i32[0];
  if ( *((_DWORD *)v6 + 16) != 18 || v8 != v7[4].m128i_i32[0] )
  {
    v18 = 3343;
    goto LABEL_9;
  }
  if ( v8 != 70 )
  {
    v18 = 3395;
    goto LABEL_9;
  }
  v9 = (__m128)_mm_loadu_si128(v4);
  v10 = (__m128)_mm_loadu_si128(v7);
  ColorSpaceHelpers::Color_HSLAfromRGBA(
    v5,
    _mm_shuffle_ps(v9, v9, 85).m128_f32[0],
    _mm_shuffle_ps(v9, v9, 170).m128_f32[0],
    _mm_shuffle_ps(v9, v9, 255).m128_f32[0],
    COERCE_FLOAT(&v19),
    (float *)&v19 + 1,
    &v20,
    &v21,
    v19);
  ColorSpaceHelpers::Color_HSLAfromRGBA(
    v11,
    _mm_shuffle_ps(v10, v10, 85).m128_f32[0],
    _mm_shuffle_ps(v10, v10, 170).m128_f32[0],
    _mm_shuffle_ps(v10, v10, 255).m128_f32[0],
    COERCE_FLOAT(&v22),
    (float *)&v22.m128i_i32[1],
    (float *)&v22.m128i_i32[2],
    (float *)&v22.m128i_i32[3],
    v19);
  v12 = *(float *)&v22.m128i_i32[1] - *((float *)&v19 + 1);
  v13 = *(float *)&v22.m128i_i32[2] - v20;
  v14 = *(float *)&v22.m128i_i32[3] - v21;
  v22 = 0uLL;
  ColorSpaceHelpers::Color_RGBAfromHSLA(
    v15,
    (float)(v12 * *(float *)v6) + *((float *)&v19 + 1),
    (float)(v13 * *(float *)v6) + v20,
    (float)(v14 * *(float *)v6) + v21,
    COERCE_FLOAT(&v22),
    (float *)&v22.m128i_i32[1],
    (float *)&v22.m128i_i32[2],
    (float *)&v22.m128i_i32[3],
    v19);
  v16 = v22;
  v4[4].m128i_i32[0] = 70;
  v4[4].m128i_i8[4] = 1;
  *v4 = v16;
  *((_DWORD *)this + 4) -= 2;
  return v1;
}
