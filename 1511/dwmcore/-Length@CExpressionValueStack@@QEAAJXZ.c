/*
 * XREFs of ?Length@CExpressionValueStack@@QEAAJXZ @ 0x18011BAB8
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180129AF0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     sqrtf_0 @ 0x1800BC90E (sqrtf_0.c)
 *     ?SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180136D04 (-SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Length(CExpressionValueStack *this)
{
  int v1; // eax
  unsigned int v2; // edi
  __int64 v3; // rbx
  float v4; // xmm6_4
  __m128 v5; // xmm6
  float v6; // xmm2_4
  float v7; // xmm1_4
  float v8; // xmm2_4
  float v9; // xmm0_4
  unsigned int v11; // [rsp+20h] [rbp-38h]
  __int64 v12; // [rsp+30h] [rbp-28h]
  float v13; // [rsp+38h] [rbp-20h]
  __int64 v14; // [rsp+60h] [rbp+8h]

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  if ( v1 )
  {
    v3 = *((_QWORD *)this + 3) + 24LL * (unsigned int)(v1 - 1);
    if ( *(_DWORD *)v3 != 18 )
    {
      switch ( *(_DWORD *)v3 )
      {
        case '#':
          v14 = *(_QWORD *)(v3 + 8);
          CExpressionValue::SetDataType(v3);
          v9 = (float)(*((float *)&v14 + 1) * *((float *)&v14 + 1)) + (float)(*(float *)&v14 * *(float *)&v14);
          break;
        case '4':
          v12 = *(_QWORD *)(v3 + 8);
          v13 = *(float *)(v3 + 16);
          CExpressionValue::SetDataType(v3);
          v9 = (float)((float)(*((float *)&v12 + 1) * *((float *)&v12 + 1)) + (float)(*(float *)&v12 * *(float *)&v12))
             + (float)(v13 * v13);
          break;
        case 'E':
          v5 = (__m128)_mm_loadu_si128((const __m128i *)(v3 + 8));
          CExpressionValue::SetDataType(v3);
          v6 = _mm_shuffle_ps(v5, v5, 85).m128_f32[0];
          v7 = _mm_shuffle_ps(v5, v5, 170).m128_f32[0];
          v8 = (float)(v6 * v6) + (float)(v5.m128_f32[0] * v5.m128_f32[0]);
          v5.m128_f32[0] = _mm_shuffle_ps(v5, v5, 255).m128_f32[0];
          v9 = (float)(v8 + (float)(v7 * v7)) + (float)(v5.m128_f32[0] * v5.m128_f32[0]);
          break;
        case 'G':
          v4 = sqrtf_0(
                 (float)((float)((float)(*(float *)(v3 + 8) * *(float *)(v3 + 8))
                               + (float)(*(float *)(v3 + 12) * *(float *)(v3 + 12)))
                       + (float)(*(float *)(v3 + 16) * *(float *)(v3 + 16)))
               + (float)(*(float *)(v3 + 20) * *(float *)(v3 + 20)));
          goto LABEL_16;
        default:
          v11 = 3977;
          goto LABEL_9;
      }
      *(float *)(v3 + 8) = sqrtf_0(v9);
LABEL_17:
      *(_BYTE *)(v3 + 4) = 1;
      return v2;
    }
    v4 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v3 + 8)) & _xmm);
LABEL_16:
    CExpressionValue::SetDataType(v3);
    *(float *)(v3 + 8) = v4;
    goto LABEL_17;
  }
  v11 = 3919;
LABEL_9:
  v2 = -2147467259;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v11);
  return v2;
}
