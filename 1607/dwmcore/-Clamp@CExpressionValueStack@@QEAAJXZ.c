/*
 * XREFs of ?Clamp@CExpressionValueStack@@QEAAJXZ @ 0x180159044
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z @ 0x18008A450 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x18008C620 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Clamp(CExpressionValueStack *this)
{
  unsigned int v1; // ebx
  CExpressionValueStack *v2; // r10
  struct CExpressionValue *v3; // rdi
  CExpressionValueStack *v4; // r10
  const __m128i *v5; // rax
  _QWORD *v6; // r9
  __int64 v7; // r10
  int v8; // ecx
  __m128 v9; // xmm4
  __m128 v10; // xmm5
  __m128 v11; // xmm6
  __m128 v12; // xmm2
  __m128 v13; // xmm1
  float v14; // xmm0_4
  __m128 v15; // xmm2
  __m128 v16; // xmm1
  float v17; // xmm2_4
  float v18; // xmm1_4
  unsigned int v20; // [rsp+20h] [rbp-50h]
  __int128 v21; // [rsp+50h] [rbp-20h]
  float v22; // [rsp+58h] [rbp-18h]
  __int64 v23; // [rsp+A0h] [rbp+30h]

  v1 = 0;
  if ( *((_DWORD *)this + 4) < 3u )
  {
    v20 = 2690;
LABEL_16:
    v1 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v20);
    return v1;
  }
  CExpressionValueStack::PeekStackValue(this, -2);
  v3 = CExpressionValueStack::PeekStackValue(v2, -1);
  v5 = (const __m128i *)CExpressionValueStack::PeekStackValue(v4, 0);
  v8 = *((_DWORD *)v6 + 16);
  if ( v8 != *((_DWORD *)v3 + 16) || v8 != v5[4].m128i_i32[0] )
  {
    v20 = 2716;
    goto LABEL_16;
  }
  switch ( v8 )
  {
    case 18:
      v17 = *(float *)v5->m128i_i32;
      v18 = fmaxf(*(float *)v6, *(float *)v3);
      *((_DWORD *)v6 + 16) = 18;
      *(float *)v6 = fminf(v18, v17);
      break;
    case 35:
      v15 = (__m128)(unsigned int)*v6;
      v15.m128_f32[0] = fmaxf(COERCE_FLOAT(*v6), COERCE_FLOAT(*(_QWORD *)v3));
      v16 = (__m128)(unsigned int)HIDWORD(*v6);
      v16.m128_f32[0] = fmaxf(COERCE_FLOAT(HIDWORD(*v6)), COERCE_FLOAT(HIDWORD(*(_QWORD *)v3)));
      v23 = v5->m128i_i64[0];
      *((_DWORD *)v6 + 16) = 35;
      v15.m128_f32[0] = fminf(v15.m128_f32[0], *(float *)&v23);
      v16.m128_f32[0] = fminf(v16.m128_f32[0], *((float *)&v23 + 1));
      *v6 = _mm_unpacklo_ps(v15, v16).m128_u64[0];
      break;
    case 52:
      v12 = (__m128)(unsigned int)*v6;
      v13 = (__m128)(unsigned int)HIDWORD(*v6);
      v12.m128_f32[0] = fminf(fmaxf(COERCE_FLOAT(*v6), COERCE_FLOAT(*(_QWORD *)v3)), COERCE_FLOAT(v5->m128i_i64[0]));
      v13.m128_f32[0] = fminf(
                          fmaxf(COERCE_FLOAT(HIDWORD(*v6)), COERCE_FLOAT(HIDWORD(*(_QWORD *)v3))),
                          COERCE_FLOAT(HIDWORD(v5->m128i_i64[0])));
      v14 = fmaxf(*((float *)v6 + 2), *((float *)v3 + 2));
      v22 = *(float *)&v5->m128i_i32[2];
      *((_DWORD *)v6 + 16) = 52;
      *v6 = _mm_unpacklo_ps(v12, v13).m128_u64[0];
      *((float *)v6 + 2) = fminf(v14, v22);
      break;
    case 69:
      v9 = (__m128)_mm_loadu_si128((const __m128i *)v3);
      v10 = (__m128)_mm_loadu_si128(v5);
      *((_DWORD *)v6 + 16) = 69;
      v11 = (__m128)_mm_loadu_si128((const __m128i *)v6);
      *(_QWORD *)&v21 = __PAIR64__(
                          COERCE_UNSIGNED_INT(
                            fminf(
                              fmaxf(_mm_shuffle_ps(v11, v11, 85).m128_f32[0], _mm_shuffle_ps(v9, v9, 85).m128_f32[0]),
                              _mm_shuffle_ps(v10, v10, 85).m128_f32[0])),
                          COERCE_UNSIGNED_INT(fminf(fmaxf(v11.m128_f32[0], v9.m128_f32[0]), v10.m128_f32[0])));
      *((_QWORD *)&v21 + 1) = __PAIR64__(
                                COERCE_UNSIGNED_INT(
                                  fminf(
                                    fmaxf(
                                      _mm_shuffle_ps(v11, v11, 255).m128_f32[0],
                                      _mm_shuffle_ps(v9, v9, 255).m128_f32[0]),
                                    _mm_shuffle_ps(v10, v10, 255).m128_f32[0])),
                                COERCE_UNSIGNED_INT(
                                  fminf(
                                    fmaxf(
                                      _mm_shuffle_ps(v11, v11, 170).m128_f32[0],
                                      _mm_shuffle_ps(v9, v9, 170).m128_f32[0]),
                                    _mm_shuffle_ps(v10, v10, 170).m128_f32[0])));
      *(_OWORD *)v6 = v21;
      break;
    default:
      v20 = 2779;
      goto LABEL_16;
  }
  *((_BYTE *)v6 + 68) = 1;
  *(_DWORD *)(v7 + 16) -= 2;
  return v1;
}
