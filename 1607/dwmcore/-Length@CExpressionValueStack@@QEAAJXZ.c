/*
 * XREFs of ?Length@CExpressionValueStack@@QEAAJXZ @ 0x18015A5B8
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z @ 0x18008A450 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x18008C620 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 *     sqrtf_0 @ 0x1800BF6B6 (sqrtf_0.c)
 */

__int64 __fastcall CExpressionValueStack::Length(CExpressionValueStack *this)
{
  unsigned int v1; // edi
  const int *v2; // rdx
  struct CExpressionValue *v3; // rbx
  int v4; // esi
  int v5; // eax
  float v6; // xmm0_4
  __m128 v7; // xmm3
  float v8; // xmm2_4
  float v9; // xmm1_4
  float v10; // xmm2_4
  float v11; // xmm0_4
  unsigned int v13; // [rsp+20h] [rbp-28h]

  v1 = 0;
  if ( *((_DWORD *)this + 4) )
  {
    v3 = CExpressionValueStack::PeekStackValue(this, 0);
    v4 = (_DWORD)v2 + 18;
    v5 = *((_DWORD *)v3 + 16);
    if ( v5 != (_DWORD)v2 + 18 )
    {
      switch ( v5 )
      {
        case '#':
          v11 = (float)(COERCE_FLOAT(HIDWORD(*(_QWORD *)v3)) * COERCE_FLOAT(HIDWORD(*(_QWORD *)v3)))
              + (float)(COERCE_FLOAT(*(_QWORD *)v3) * COERCE_FLOAT(*(_QWORD *)v3));
          break;
        case '4':
          v11 = (float)((float)(COERCE_FLOAT(HIDWORD(*(_QWORD *)v3)) * COERCE_FLOAT(HIDWORD(*(_QWORD *)v3)))
                      + (float)(COERCE_FLOAT(*(_QWORD *)v3) * COERCE_FLOAT(*(_QWORD *)v3)))
              + (float)(*((float *)v3 + 2) * *((float *)v3 + 2));
          break;
        case 'E':
          v7 = (__m128)_mm_loadu_si128((const __m128i *)v3);
          v8 = _mm_shuffle_ps(v7, v7, 85).m128_f32[0];
          v9 = _mm_shuffle_ps(v7, v7, 170).m128_f32[0];
          v10 = (float)(v8 * v8) + (float)(v7.m128_f32[0] * v7.m128_f32[0]);
          v7.m128_f32[0] = _mm_shuffle_ps(v7, v7, 255).m128_f32[0];
          v11 = (float)(v10 + (float)(v9 * v9)) + (float)(v7.m128_f32[0] * v7.m128_f32[0]);
          break;
        case 'G':
          v6 = sqrtf_0(
                 (float)((float)((float)(*(float *)v3 * *(float *)v3) + (float)(*((float *)v3 + 1) * *((float *)v3 + 1)))
                       + (float)(*((float *)v3 + 2) * *((float *)v3 + 2)))
               + (float)(*((float *)v3 + 3) * *((float *)v3 + 3)));
          goto LABEL_16;
        default:
          v13 = 3589;
          goto LABEL_3;
      }
      *((_DWORD *)v3 + 16) = v4;
      v6 = sqrtf_0(v11);
LABEL_17:
      *(float *)v3 = v6;
      *((_BYTE *)v3 + 68) = 1;
      return v1;
    }
    v6 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)v3) & _xmm);
LABEL_16:
    *((_DWORD *)v3 + 16) = v4;
    goto LABEL_17;
  }
  v13 = 3531;
  v2 = 0LL;
LABEL_3:
  v1 = -2147467259;
  MilInstrumentationCheckHR(0x14u, v2, 0, -2147467259, v13);
  return v1;
}
