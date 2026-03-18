/*
 * XREFs of ?Distance@CExpressionValueStack@@QEAAJXZ @ 0x180159D58
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z @ 0x18008A450 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x18008C620 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 *     sqrtf_0 @ 0x1800BF6B6 (sqrtf_0.c)
 */

__int64 __fastcall CExpressionValueStack::Distance(CExpressionValueStack *this)
{
  unsigned int v1; // esi
  __m128i *v3; // rbx
  const __m128i *v4; // rax
  __int32 v5; // ecx
  __m128 v6; // xmm5
  __m128 v7; // xmm2
  float v8; // xmm3_4
  float v9; // xmm4_4
  float v10; // xmm1_4
  float v11; // xmm0_4
  float v12; // xmm0_4
  float v13; // xmm0_4
  unsigned int v15; // [rsp+20h] [rbp-30h]
  __int64 v16; // [rsp+30h] [rbp-20h]

  v1 = 0;
  if ( *((_DWORD *)this + 4) >= 2u )
  {
    v3 = (__m128i *)CExpressionValueStack::PeekStackValue(this, -1);
    v4 = (const __m128i *)CExpressionValueStack::PeekStackValue(this, 0);
    v5 = v3[4].m128i_i32[0];
    if ( v5 == v4[4].m128i_i32[0] )
    {
      if ( v5 == 18 )
      {
        v13 = *(float *)v3->m128i_i32 - *(float *)v4->m128i_i32;
        v3[4].m128i_i32[0] = 18;
        *(float *)v3->m128i_i32 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v13) & _xmm);
      }
      else
      {
        switch ( v5 )
        {
          case '#':
            v12 = (float)((float)(COERCE_FLOAT(HIDWORD(v3->m128i_i64[0])) - COERCE_FLOAT(HIDWORD(v4->m128i_i64[0])))
                        * (float)(COERCE_FLOAT(HIDWORD(v3->m128i_i64[0])) - COERCE_FLOAT(HIDWORD(v4->m128i_i64[0]))))
                + (float)((float)(COERCE_FLOAT(v3->m128i_i64[0]) - COERCE_FLOAT(v4->m128i_i64[0]))
                        * (float)(COERCE_FLOAT(v3->m128i_i64[0]) - COERCE_FLOAT(v4->m128i_i64[0])));
            break;
          case '4':
            v16 = v3->m128i_i64[0];
            v12 = (float)((float)((float)(*((float *)&v16 + 1) - COERCE_FLOAT(HIDWORD(v4->m128i_i64[0])))
                                * (float)(*((float *)&v16 + 1) - COERCE_FLOAT(HIDWORD(v4->m128i_i64[0]))))
                        + (float)((float)(*(float *)&v16 - COERCE_FLOAT(v4->m128i_i64[0]))
                                * (float)(*(float *)&v16 - COERCE_FLOAT(v4->m128i_i64[0]))))
                + (float)((float)(*(float *)&v3->m128i_i32[2] - *(float *)&v4->m128i_i32[2])
                        * (float)(*(float *)&v3->m128i_i32[2] - *(float *)&v4->m128i_i32[2]));
            break;
          case 'E':
            v6 = (__m128)_mm_loadu_si128(v3);
            v7 = (__m128)_mm_loadu_si128(v4);
            v8 = v6.m128_f32[0] - v7.m128_f32[0];
            v9 = _mm_shuffle_ps(v6, v6, 85).m128_f32[0] - _mm_shuffle_ps(v7, v7, 85).m128_f32[0];
            v10 = _mm_shuffle_ps(v6, v6, 170).m128_f32[0];
            v6.m128_f32[0] = _mm_shuffle_ps(v6, v6, 255).m128_f32[0];
            v11 = _mm_shuffle_ps(v7, v7, 170).m128_f32[0];
            v7.m128_f32[0] = _mm_shuffle_ps(v7, v7, 255).m128_f32[0];
            v12 = (float)((float)((float)(v9 * v9) + (float)(v8 * v8)) + (float)((float)(v10 - v11) * (float)(v10 - v11)))
                + (float)((float)(v6.m128_f32[0] - v7.m128_f32[0]) * (float)(v6.m128_f32[0] - v7.m128_f32[0]));
            break;
          default:
            v15 = 3802;
            goto LABEL_3;
        }
        v3[4].m128i_i32[0] = 18;
        *(float *)v3->m128i_i32 = sqrtf_0(v12);
      }
      v3[4].m128i_i8[4] = 1;
      --*((_DWORD *)this + 4);
      return v1;
    }
    v15 = 3742;
  }
  else
  {
    v15 = 3718;
  }
LABEL_3:
  v1 = -2147467259;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v15);
  return v1;
}
