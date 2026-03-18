/*
 * XREFs of ?LengthSquared@CExpressionValueStack@@QEAAJXZ @ 0x18015A744
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z @ 0x18008A450 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x18008C620 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 */

__int64 __fastcall CExpressionValueStack::LengthSquared(CExpressionValueStack *this)
{
  unsigned int v1; // ebx
  struct CExpressionValue *v2; // rdx
  int v3; // eax
  __m128 v4; // xmm3
  float v5; // xmm2_4
  float v6; // xmm1_4
  float v7; // xmm2_4
  unsigned int v9; // [rsp+20h] [rbp-28h]

  v1 = 0;
  if ( *((_DWORD *)this + 4) )
  {
    v2 = CExpressionValueStack::PeekStackValue(this, 0);
    v3 = *((_DWORD *)v2 + 16);
    switch ( v3 )
    {
      case 18:
        *(float *)v2 = *(float *)v2 * *(float *)v2;
        break;
      case 35:
        *(float *)v2 = (float)(COERCE_FLOAT(HIDWORD(*(_QWORD *)v2)) * COERCE_FLOAT(HIDWORD(*(_QWORD *)v2)))
                     + (float)(COERCE_FLOAT(*(_QWORD *)v2) * COERCE_FLOAT(*(_QWORD *)v2));
        break;
      case 52:
        *(float *)v2 = (float)((float)(COERCE_FLOAT(HIDWORD(*(_QWORD *)v2)) * COERCE_FLOAT(HIDWORD(*(_QWORD *)v2)))
                             + (float)(COERCE_FLOAT(*(_QWORD *)v2) * COERCE_FLOAT(*(_QWORD *)v2)))
                     + (float)(*((float *)v2 + 2) * *((float *)v2 + 2));
        break;
      case 69:
        v4 = (__m128)_mm_loadu_si128((const __m128i *)v2);
        v5 = _mm_shuffle_ps(v4, v4, 85).m128_f32[0];
        v6 = _mm_shuffle_ps(v4, v4, 170).m128_f32[0];
        v7 = (float)(v5 * v5) + (float)(v4.m128_f32[0] * v4.m128_f32[0]);
        v4.m128_f32[0] = _mm_shuffle_ps(v4, v4, 255).m128_f32[0];
        *(float *)v2 = (float)(v7 + (float)(v6 * v6)) + (float)(v4.m128_f32[0] * v4.m128_f32[0]);
        break;
      case 71:
        *(float *)v2 = (float)((float)((float)(*(float *)v2 * *(float *)v2)
                                     + (float)(*((float *)v2 + 1) * *((float *)v2 + 1)))
                             + (float)(*((float *)v2 + 2) * *((float *)v2 + 2)))
                     + (float)(*((float *)v2 + 3) * *((float *)v2 + 3));
        break;
      default:
        v9 = 3682;
        goto LABEL_3;
    }
    *((_DWORD *)v2 + 16) = 18;
    *((_BYTE *)v2 + 68) = 1;
    return v1;
  }
  v9 = 3622;
LABEL_3:
  v1 = -2147467259;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v9);
  return v1;
}
