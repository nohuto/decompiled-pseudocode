/*
 * XREFs of ?ColorLerpRgb@CExpressionValueStack@@QEAAJXZ @ 0x1801595D0
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z @ 0x18008A450 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x18008C620 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 */

__int64 __fastcall CExpressionValueStack::ColorLerpRgb(CExpressionValueStack *this)
{
  unsigned int v1; // ebx
  const int *v2; // rdx
  CExpressionValueStack *v3; // r9
  const __m128i *v4; // rdi
  CExpressionValueStack *v5; // r9
  struct CExpressionValue *v6; // rax
  __int64 v7; // r9
  __m128i *v8; // r10
  __int32 v9; // ecx
  __m128 v10; // xmm4
  __m128 v11; // xmm3
  float v12; // xmm0_4
  __int32 v13; // xmm1_4
  float v14; // xmm0_4
  float v15; // xmm2_4
  unsigned int v17; // [rsp+20h] [rbp-28h]
  __m128i v18; // [rsp+30h] [rbp-18h]

  v1 = 0;
  if ( *((_DWORD *)this + 4) < 3u )
  {
    v17 = 3436;
    v2 = 0LL;
LABEL_9:
    v1 = -2147467259;
    MilInstrumentationCheckHR(0x14u, v2, 0, -2147467259, v17);
    return v1;
  }
  CExpressionValueStack::PeekStackValue(this, -2);
  v4 = (const __m128i *)CExpressionValueStack::PeekStackValue(v3, -1);
  v6 = CExpressionValueStack::PeekStackValue(v5, 0);
  v9 = v8[4].m128i_i32[0];
  if ( *((_DWORD *)v6 + 16) != 18 || v9 != v4[4].m128i_i32[0] )
  {
    v17 = 3463;
    goto LABEL_9;
  }
  if ( v9 != 70 )
  {
    v17 = 3494;
    goto LABEL_9;
  }
  v10 = (__m128)_mm_loadu_si128(v4);
  v11 = (__m128)_mm_loadu_si128(v8);
  *(float *)v18.m128i_i32 = (float)((float)(v10.m128_f32[0] - v11.m128_f32[0]) * *(float *)v6) + v11.m128_f32[0];
  v12 = _mm_shuffle_ps(v11, v11, 85).m128_f32[0];
  *(float *)&v13 = (float)((float)(_mm_shuffle_ps(v10, v10, 85).m128_f32[0] - v12) * *(float *)v6) + v12;
  v14 = _mm_shuffle_ps(v11, v11, 170).m128_f32[0];
  v11.m128_f32[0] = _mm_shuffle_ps(v11, v11, 255).m128_f32[0];
  v18.m128i_i32[1] = v13;
  v15 = (float)(_mm_shuffle_ps(v10, v10, 170).m128_f32[0] - v14) * *(float *)v6;
  v10.m128_f32[0] = (float)(_mm_shuffle_ps(v10, v10, 255).m128_f32[0] - v11.m128_f32[0]) * *(float *)v6;
  v8[4].m128i_i32[0] = 70;
  v8[4].m128i_i8[4] = 1;
  *(float *)&v18.m128i_i32[2] = v15 + v14;
  *(float *)&v18.m128i_i32[3] = v10.m128_f32[0] + v11.m128_f32[0];
  *v8 = v18;
  *(_DWORD *)(v7 + 16) -= 2;
  return v1;
}
