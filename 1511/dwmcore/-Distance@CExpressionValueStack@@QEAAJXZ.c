/*
 * XREFs of ?Distance@CExpressionValueStack@@QEAAJXZ @ 0x18011AC80
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180129AF0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     sqrtf_0 @ 0x1800BC90E (sqrtf_0.c)
 *     ?SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180136D04 (-SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Distance(CExpressionValueStack *this)
{
  unsigned int v1; // r8d
  unsigned int v2; // esi
  __int64 v4; // rdx
  int *v5; // rbx
  __int64 v6; // r8
  float v7; // eax
  __m128 v8; // xmm9
  __m128 v9; // xmm1
  float v10; // xmm8_4
  float v11; // xmm6_4
  float v12; // xmm7_4
  float v13; // xmm8_4
  float v14; // xmm6_4
  float v15; // xmm8_4
  float v16; // xmm0_4
  float v17; // xmm6_4
  float v18; // xmm6_4
  unsigned int v20; // [rsp+28h] [rbp-29h]
  __int64 v21; // [rsp+38h] [rbp-19h]
  __int64 v22; // [rsp+48h] [rbp-9h]
  __int64 v23; // [rsp+B8h] [rbp+67h]
  __int64 v24; // [rsp+C0h] [rbp+6Fh]

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  if ( v1 >= 2 )
  {
    v4 = *((_QWORD *)this + 3);
    v5 = (int *)(v4 + 24LL * (v1 - 2));
    v6 = 3LL * (v1 - 1);
    v7 = *(float *)v5;
    if ( *v5 == *(_DWORD *)(v4 + 8 * v6) )
    {
      if ( LODWORD(v7) == 18 )
      {
        v18 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)v5 + 2) - *(float *)(v4 + 8 * v6 + 8))) & _xmm);
        CExpressionValue::SetDataType(v5);
        *((float *)v5 + 2) = v18;
      }
      else
      {
        if ( LODWORD(v7) == 35 )
        {
          v23 = *((_QWORD *)v5 + 1);
          v24 = *(_QWORD *)(v4 + 8 * v6 + 8);
          CExpressionValue::SetDataType(v5);
          v16 = (float)((float)(*((float *)&v23 + 1) - *((float *)&v24 + 1))
                      * (float)(*((float *)&v23 + 1) - *((float *)&v24 + 1)))
              + (float)((float)(*(float *)&v23 - *(float *)&v24) * (float)(*(float *)&v23 - *(float *)&v24));
        }
        else
        {
          if ( LODWORD(v7) == 52 )
          {
            v21 = *((_QWORD *)v5 + 1);
            v22 = *(_QWORD *)(v4 + 8 * v6 + 8);
            v17 = *((float *)v5 + 4) - *(float *)(v4 + 8 * v6 + 16);
            CExpressionValue::SetDataType(v5);
            v15 = (float)((float)((float)(*((float *)&v21 + 1) - *((float *)&v22 + 1))
                                * (float)(*((float *)&v21 + 1) - *((float *)&v22 + 1)))
                        + (float)((float)(*(float *)&v21 - *(float *)&v22) * (float)(*(float *)&v21 - *(float *)&v22)))
                + (float)(v17 * v17);
          }
          else
          {
            if ( LODWORD(v7) != 69 )
            {
              v20 = 4190;
              goto LABEL_10;
            }
            v8 = (__m128)_mm_loadu_si128((const __m128i *)(v5 + 2));
            v9 = (__m128)_mm_loadu_si128((const __m128i *)(v4 + 8 * v6 + 8));
            v10 = _mm_shuffle_ps(v8, v8, 85).m128_f32[0];
            v11 = _mm_shuffle_ps(v8, v8, 170).m128_f32[0];
            v12 = v8.m128_f32[0] - v9.m128_f32[0];
            v8.m128_f32[0] = *((float *)v5 + 5) - *(float *)(v4 + 8 * v6 + 20);
            v13 = v10 - _mm_shuffle_ps(v9, v9, 85).m128_f32[0];
            v14 = v11 - _mm_shuffle_ps(v9, v9, 170).m128_f32[0];
            CExpressionValue::SetDataType(v5);
            v15 = (float)((float)((float)(v13 * v13) + (float)(v12 * v12)) + (float)(v14 * v14))
                + (float)(v8.m128_f32[0] * v8.m128_f32[0]);
          }
          v16 = v15;
        }
        *((float *)v5 + 2) = sqrtf_0(v16);
      }
      *((_BYTE *)v5 + 4) = 1;
      --*((_DWORD *)this + 4);
      return v2;
    }
    v20 = 4130;
  }
  else
  {
    v20 = 4106;
  }
LABEL_10:
  v2 = -2147467259;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v20);
  return v2;
}
