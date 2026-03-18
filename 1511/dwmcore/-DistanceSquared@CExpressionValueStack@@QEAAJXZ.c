/*
 * XREFs of ?DistanceSquared@CExpressionValueStack@@QEAAJXZ @ 0x18011AEC8
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180129AF0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180136D04 (-SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::DistanceSquared(CExpressionValueStack *this)
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
  float v15; // xmm6_4
  float v16; // xmm6_4
  float v17; // xmm6_4
  unsigned int v19; // [rsp+28h] [rbp-29h]
  __int64 v20; // [rsp+38h] [rbp-19h]
  __int64 v21; // [rsp+48h] [rbp-9h]
  __int64 v22; // [rsp+B8h] [rbp+67h]
  __int64 v23; // [rsp+C0h] [rbp+6Fh]

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  if ( v1 >= 2 )
  {
    v4 = *((_QWORD *)this + 3);
    v5 = (int *)(v4 + 24LL * (v1 - 2));
    v6 = 3LL * (v1 - 1);
    v7 = *(float *)v5;
    if ( *v5 != *(_DWORD *)(v4 + 8 * v6) )
    {
      v19 = 4253;
      goto LABEL_10;
    }
    if ( LODWORD(v7) == 18 )
    {
      v17 = *((float *)v5 + 2) - *(float *)(v4 + 8 * v6 + 8);
      CExpressionValue::SetDataType(v5);
      v16 = v17 * v17;
    }
    else
    {
      if ( LODWORD(v7) != 35 )
      {
        if ( LODWORD(v7) == 52 )
        {
          v20 = *((_QWORD *)v5 + 1);
          v21 = *(_QWORD *)(v4 + 8 * v6 + 8);
          v15 = *((float *)v5 + 4) - *(float *)(v4 + 8 * v6 + 16);
          CExpressionValue::SetDataType(v5);
          *((float *)v5 + 2) = (float)((float)((float)(*((float *)&v20 + 1) - *((float *)&v21 + 1))
                                             * (float)(*((float *)&v20 + 1) - *((float *)&v21 + 1)))
                                     + (float)((float)(*(float *)&v20 - *(float *)&v21)
                                             * (float)(*(float *)&v20 - *(float *)&v21)))
                             + (float)(v15 * v15);
        }
        else
        {
          if ( LODWORD(v7) != 69 )
          {
            v19 = 4313;
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
          *((float *)v5 + 2) = (float)((float)((float)(v13 * v13) + (float)(v12 * v12)) + (float)(v14 * v14))
                             + (float)(v8.m128_f32[0] * v8.m128_f32[0]);
        }
LABEL_16:
        *((_BYTE *)v5 + 4) = 1;
        --*((_DWORD *)this + 4);
        return v2;
      }
      v22 = *((_QWORD *)v5 + 1);
      v23 = *(_QWORD *)(v4 + 8 * v6 + 8);
      CExpressionValue::SetDataType(v5);
      v16 = (float)((float)(*((float *)&v22 + 1) - *((float *)&v23 + 1))
                  * (float)(*((float *)&v22 + 1) - *((float *)&v23 + 1)))
          + (float)((float)(*(float *)&v22 - *(float *)&v23) * (float)(*(float *)&v22 - *(float *)&v23));
    }
    *((float *)v5 + 2) = v16;
    goto LABEL_16;
  }
  v19 = 4229;
LABEL_10:
  v2 = -2147467259;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v19);
  return v2;
}
