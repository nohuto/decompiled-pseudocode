/*
 * XREFs of ?ColorLerpHsl@CExpressionValueStack@@QEAAJXZ @ 0x18011A230
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180129AF0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Color_HSLAfromRGBA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z @ 0x18011A6D4 (-Color_HSLAfromRGBA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z.c)
 *     ?Color_RGBAfromHSLA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z @ 0x18011A858 (-Color_RGBAfromHSLA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z.c)
 *     ?SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180136D04 (-SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::ColorLerpHsl(CExpressionValueStack *this)
{
  unsigned int v1; // edx
  unsigned int v2; // ebx
  __int64 v4; // r8
  unsigned int *v5; // rsi
  ColorSpaceHelpers *v6; // rcx
  float v7; // xmm7_4
  __m128 v8; // xmm0
  __m128 v9; // xmm6
  ColorSpaceHelpers *v10; // rcx
  float v11; // xmm1_4
  float v12; // xmm2_4
  float v13; // xmm3_4
  ColorSpaceHelpers *v14; // rcx
  __int128 v15; // xmm0
  unsigned int v17; // [rsp+20h] [rbp-60h]
  float *v18; // [rsp+40h] [rbp-40h] BYREF
  float v19; // [rsp+48h] [rbp-38h] BYREF
  float v20; // [rsp+4Ch] [rbp-34h] BYREF
  __int128 v21; // [rsp+50h] [rbp-30h] BYREF

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  if ( v1 < 3 )
  {
    v17 = 3704;
LABEL_9:
    v2 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v17);
    return v2;
  }
  v4 = *((_QWORD *)this + 3);
  v5 = (unsigned int *)(v4 + 24LL * (v1 - 3));
  v6 = (ColorSpaceHelpers *)*v5;
  v7 = *(float *)(v4 + 24LL * (v1 - 1) + 8);
  if ( *(_DWORD *)(v4 + 24LL * (v1 - 1)) != 18 || (_DWORD)v6 != *(_DWORD *)(v4 + 24LL * (v1 - 2)) )
  {
    v17 = 3731;
    goto LABEL_9;
  }
  if ( (_DWORD)v6 != 70 )
  {
    v17 = 3783;
    goto LABEL_9;
  }
  v8 = (__m128)_mm_loadu_si128((const __m128i *)(v5 + 2));
  v9 = (__m128)_mm_loadu_si128((const __m128i *)(v4 + 24LL * (v1 - 2) + 8));
  ColorSpaceHelpers::Color_HSLAfromRGBA(
    v6,
    _mm_shuffle_ps(v8, v8, 85).m128_f32[0],
    _mm_shuffle_ps(v8, v8, 170).m128_f32[0],
    _mm_shuffle_ps(v8, v8, 255).m128_f32[0],
    COERCE_FLOAT(&v18),
    (float *)&v18 + 1,
    &v19,
    &v20,
    v18);
  ColorSpaceHelpers::Color_HSLAfromRGBA(
    v10,
    _mm_shuffle_ps(v9, v9, 85).m128_f32[0],
    _mm_shuffle_ps(v9, v9, 170).m128_f32[0],
    _mm_shuffle_ps(v9, v9, 255).m128_f32[0],
    COERCE_FLOAT(&v21),
    (float *)&v21 + 1,
    (float *)&v21 + 2,
    (float *)&v21 + 3,
    v18);
  v11 = *((float *)&v21 + 1) - *((float *)&v18 + 1);
  v12 = *((float *)&v21 + 2) - v19;
  v13 = *((float *)&v21 + 3) - v20;
  v21 = 0uLL;
  ColorSpaceHelpers::Color_RGBAfromHSLA(
    v14,
    (float)(v11 * v7) + *((float *)&v18 + 1),
    (float)(v12 * v7) + v19,
    (float)(v13 * v7) + v20,
    COERCE_FLOAT(&v21),
    (float *)&v21 + 1,
    (float *)&v21 + 2,
    (float *)&v21 + 3,
    v18);
  CExpressionValue::SetDataType(v5);
  v15 = v21;
  *((_BYTE *)v5 + 4) = 1;
  *(_OWORD *)(v5 + 2) = v15;
  *((_DWORD *)this + 4) -= 2;
  return v2;
}
