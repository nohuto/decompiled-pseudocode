/*
 * XREFs of ?ColorLerpRgb@CExpressionValueStack@@QEAAJXZ @ 0x18011A42C
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180129AF0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180136D04 (-SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::ColorLerpRgb(CExpressionValueStack *this)
{
  unsigned int v1; // edx
  unsigned int v2; // ebx
  __int64 v4; // r8
  int *v5; // rsi
  float v6; // ecx
  float v7; // xmm5_4
  __m128 v8; // xmm4
  __m128 v9; // xmm3
  float v10; // xmm0_4
  float v11; // xmm1_4
  float v12; // xmm0_4
  unsigned int v14; // [rsp+20h] [rbp-28h]
  float v15[6]; // [rsp+30h] [rbp-18h]

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  if ( v1 < 3 )
  {
    v14 = 3824;
LABEL_9:
    v2 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v14);
    return v2;
  }
  v4 = *((_QWORD *)this + 3);
  v5 = (int *)(v4 + 24LL * (v1 - 3));
  v6 = *(float *)v5;
  v7 = *(float *)(v4 + 24LL * (v1 - 1) + 8);
  if ( *(_DWORD *)(v4 + 24LL * (v1 - 1)) != 18 || LODWORD(v6) != *(_DWORD *)(v4 + 24LL * (v1 - 2)) )
  {
    v14 = 3851;
    goto LABEL_9;
  }
  if ( LODWORD(v6) != 70 )
  {
    v14 = 3882;
    goto LABEL_9;
  }
  v8 = (__m128)_mm_loadu_si128((const __m128i *)(v4 + 24LL * (v1 - 2) + 8));
  v9 = (__m128)_mm_loadu_si128((const __m128i *)(v5 + 2));
  v15[0] = (float)((float)(v8.m128_f32[0] - v9.m128_f32[0]) * v7) + v9.m128_f32[0];
  v10 = _mm_shuffle_ps(v9, v9, 85).m128_f32[0];
  v15[3] = (float)((float)(*(float *)(v4 + 24LL * (v1 - 2) + 20) - *((float *)v5 + 5)) * v7) + *((float *)v5 + 5);
  v11 = (float)((float)(_mm_shuffle_ps(v8, v8, 85).m128_f32[0] - v10) * v7) + v10;
  v12 = _mm_shuffle_ps(v9, v9, 170).m128_f32[0];
  v15[1] = v11;
  v15[2] = (float)((float)(_mm_shuffle_ps(v8, v8, 170).m128_f32[0] - v12) * v7) + v12;
  CExpressionValue::SetDataType(v5);
  *((_BYTE *)v5 + 4) = 1;
  *(_OWORD *)(v5 + 2) = *(_OWORD *)v15;
  *((_DWORD *)this + 4) -= 2;
  return v2;
}
