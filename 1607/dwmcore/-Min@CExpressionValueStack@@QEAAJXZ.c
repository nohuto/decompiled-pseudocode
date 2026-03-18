/*
 * XREFs of ?Min@CExpressionValueStack@@QEAAJXZ @ 0x18015B2F8
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z @ 0x18008A450 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x18008C620 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Min(CExpressionValueStack *this)
{
  unsigned int v1; // ebx
  CExpressionValueStack *v2; // r10
  struct CExpressionValue *v3; // rax
  _QWORD *v4; // r9
  __int64 v5; // r10
  int v6; // ecx
  __m128 v7; // xmm3
  __m128 v8; // xmm4
  __m128 v9; // xmm2
  __m128 v10; // xmm1
  float v11; // xmm0_4
  __m128 v12; // xmm0
  __m128 v13; // xmm1
  float v14; // xmm0_4
  unsigned int v16; // [rsp+20h] [rbp-30h]
  __int128 v17; // [rsp+40h] [rbp-10h]

  v1 = 0;
  if ( *((_DWORD *)this + 4) >= 2u )
  {
    CExpressionValueStack::PeekStackValue(this, -1);
    v3 = CExpressionValueStack::PeekStackValue(v2, 0);
    v6 = *((_DWORD *)v4 + 16);
    if ( v6 == *((_DWORD *)v3 + 16) )
    {
      switch ( v6 )
      {
        case 18:
          v14 = fminf(*(float *)v4, *(float *)v3);
          *((_DWORD *)v4 + 16) = 18;
          *(float *)v4 = v14;
          break;
        case 35:
          v12 = (__m128)(unsigned int)*v4;
          v13 = (__m128)(unsigned int)HIDWORD(*v4);
          v12.m128_f32[0] = fminf(COERCE_FLOAT(*v4), COERCE_FLOAT(*(_QWORD *)v3));
          v13.m128_f32[0] = fminf(COERCE_FLOAT(HIDWORD(*v4)), COERCE_FLOAT(HIDWORD(*(_QWORD *)v3)));
          *((_DWORD *)v4 + 16) = 35;
          *v4 = _mm_unpacklo_ps(v12, v13).m128_u64[0];
          break;
        case 52:
          v9 = (__m128)(unsigned int)*v4;
          v10 = (__m128)(unsigned int)HIDWORD(*v4);
          v9.m128_f32[0] = fminf(COERCE_FLOAT(*v4), COERCE_FLOAT(*(_QWORD *)v3));
          v10.m128_f32[0] = fminf(COERCE_FLOAT(HIDWORD(*v4)), COERCE_FLOAT(HIDWORD(*(_QWORD *)v3)));
          v11 = fminf(*((float *)v4 + 2), *((float *)v3 + 2));
          *((_DWORD *)v4 + 16) = 52;
          *v4 = _mm_unpacklo_ps(v9, v10).m128_u64[0];
          *((float *)v4 + 2) = v11;
          break;
        case 69:
          v7 = (__m128)_mm_loadu_si128((const __m128i *)v3);
          *((_DWORD *)v4 + 16) = 69;
          v8 = (__m128)_mm_loadu_si128((const __m128i *)v4);
          *(_QWORD *)&v17 = __PAIR64__(
                              COERCE_UNSIGNED_INT(fminf(_mm_shuffle_ps(v8, v8, 85).m128_f32[0], _mm_shuffle_ps(
                                                                                                  v7,
                                                                                                  v7,
                                                                                                  85).m128_f32[0])),
                              COERCE_UNSIGNED_INT(fminf(v8.m128_f32[0], v7.m128_f32[0])));
          *((_QWORD *)&v17 + 1) = __PAIR64__(
                                    COERCE_UNSIGNED_INT(
                                      fminf(
                                        _mm_shuffle_ps(v8, v8, 255).m128_f32[0],
                                        _mm_shuffle_ps(v7, v7, 255).m128_f32[0])),
                                    COERCE_UNSIGNED_INT(
                                      fminf(
                                        _mm_shuffle_ps(v8, v8, 170).m128_f32[0],
                                        _mm_shuffle_ps(v7, v7, 170).m128_f32[0])));
          *(_OWORD *)v4 = v17;
          break;
        default:
          v16 = 2531;
          goto LABEL_3;
      }
      *((_BYTE *)v4 + 68) = 1;
      --*(_DWORD *)(v5 + 16);
      return v1;
    }
    v16 = 2475;
  }
  else
  {
    v16 = 2451;
  }
LABEL_3:
  v1 = -2147467259;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v16);
  return v1;
}
