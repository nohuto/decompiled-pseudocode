/*
 * XREFs of ?DistanceSquared@CExpressionValueStack@@QEAAJXZ @ 0x180159F24
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z @ 0x18008A450 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x18008C620 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 */

__int64 __fastcall CExpressionValueStack::DistanceSquared(CExpressionValueStack *this)
{
  unsigned int v1; // ebx
  CExpressionValueStack *v2; // r10
  const __m128i *v3; // rax
  __m128i *v4; // r9
  __int64 v5; // r10
  __int32 v6; // ecx
  __m128 v7; // xmm5
  __m128 v8; // xmm2
  float v9; // xmm3_4
  float v10; // xmm1_4
  float v11; // xmm4_4
  float v12; // xmm0_4
  float v13; // xmm0_4
  unsigned int v15; // [rsp+20h] [rbp-30h]

  v1 = 0;
  if ( *((_DWORD *)this + 4) >= 2u )
  {
    CExpressionValueStack::PeekStackValue(this, -1);
    v3 = (const __m128i *)CExpressionValueStack::PeekStackValue(v2, 0);
    v6 = v4[4].m128i_i32[0];
    if ( v6 != v3[4].m128i_i32[0] )
    {
      v15 = 3865;
      goto LABEL_3;
    }
    if ( v6 == 18 )
    {
      v13 = (float)(*(float *)v4->m128i_i32 - *(float *)v3->m128i_i32)
          * (float)(*(float *)v4->m128i_i32 - *(float *)v3->m128i_i32);
    }
    else
    {
      if ( v6 != 35 )
      {
        if ( v6 == 52 )
        {
          *(float *)v4->m128i_i32 = (float)((float)((float)(COERCE_FLOAT(HIDWORD(v4->m128i_i64[0]))
                                                          - COERCE_FLOAT(HIDWORD(v3->m128i_i64[0])))
                                                  * (float)(COERCE_FLOAT(HIDWORD(v4->m128i_i64[0]))
                                                          - COERCE_FLOAT(HIDWORD(v3->m128i_i64[0]))))
                                          + (float)((float)(COERCE_FLOAT(v4->m128i_i64[0])
                                                          - COERCE_FLOAT(v3->m128i_i64[0]))
                                                  * (float)(COERCE_FLOAT(v4->m128i_i64[0])
                                                          - COERCE_FLOAT(v3->m128i_i64[0]))))
                                  + (float)((float)(*(float *)&v4->m128i_i32[2] - *(float *)&v3->m128i_i32[2])
                                          * (float)(*(float *)&v4->m128i_i32[2] - *(float *)&v3->m128i_i32[2]));
        }
        else
        {
          if ( v6 != 69 )
          {
            v15 = 3925;
            goto LABEL_3;
          }
          v7 = (__m128)_mm_loadu_si128(v4);
          v8 = (__m128)_mm_loadu_si128(v3);
          v9 = v7.m128_f32[0] - v8.m128_f32[0];
          v10 = _mm_shuffle_ps(v7, v7, 170).m128_f32[0];
          v11 = _mm_shuffle_ps(v7, v7, 85).m128_f32[0] - _mm_shuffle_ps(v8, v8, 85).m128_f32[0];
          v7.m128_f32[0] = _mm_shuffle_ps(v7, v7, 255).m128_f32[0];
          v12 = _mm_shuffle_ps(v8, v8, 170).m128_f32[0];
          v8.m128_f32[0] = _mm_shuffle_ps(v8, v8, 255).m128_f32[0];
          *(float *)v4->m128i_i32 = (float)((float)((float)(v11 * v11) + (float)(v9 * v9))
                                          + (float)((float)(v10 - v12) * (float)(v10 - v12)))
                                  + (float)((float)(v7.m128_f32[0] - v8.m128_f32[0])
                                          * (float)(v7.m128_f32[0] - v8.m128_f32[0]));
        }
LABEL_16:
        v4[4].m128i_i8[4] = 1;
        v4[4].m128i_i32[0] = 18;
        --*(_DWORD *)(v5 + 16);
        return v1;
      }
      v13 = (float)((float)(COERCE_FLOAT(HIDWORD(v4->m128i_i64[0])) - COERCE_FLOAT(HIDWORD(v3->m128i_i64[0])))
                  * (float)(COERCE_FLOAT(HIDWORD(v4->m128i_i64[0])) - COERCE_FLOAT(HIDWORD(v3->m128i_i64[0]))))
          + (float)((float)(COERCE_FLOAT(v4->m128i_i64[0]) - COERCE_FLOAT(v3->m128i_i64[0]))
                  * (float)(COERCE_FLOAT(v4->m128i_i64[0]) - COERCE_FLOAT(v3->m128i_i64[0])));
    }
    *(float *)v4->m128i_i32 = v13;
    goto LABEL_16;
  }
  v15 = 3841;
LABEL_3:
  v1 = -2147467259;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v15);
  return v1;
}
