/*
 * XREFs of ?Absolute@CExpressionValueStack@@QEAAJXZ @ 0x1801589B4
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z @ 0x18008A450 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x18008C620 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Absolute(CExpressionValueStack *this)
{
  unsigned int v1; // ebx
  struct CExpressionValue *v2; // rdx
  int v3; // eax
  __int64 v4; // rax
  __int128 v5; // xmm0
  int v6; // eax
  __m128 v7; // xmm0
  __m128 v8; // xmm4
  __m128 v9; // xmm0
  __m128 v10; // xmm1
  double v11; // xmm0_8
  unsigned int v13; // [rsp+20h] [rbp-30h]
  __int128 v14; // [rsp+30h] [rbp-20h]
  __int128 v15; // [rsp+40h] [rbp-10h]

  v1 = 0;
  if ( *((_DWORD *)this + 4) )
  {
    v2 = CExpressionValueStack::PeekStackValue(this, 0);
    v3 = *((_DWORD *)v2 + 16);
    switch ( v3 )
    {
      case 18:
        v11 = *(float *)v2;
        *((_DWORD *)v2 + 16) = 18;
        *(float *)v2 = COERCE_DOUBLE(*(_QWORD *)&v11 & _xmm);
        break;
      case 35:
        v9 = (__m128)(unsigned int)HIDWORD(*(_QWORD *)v2);
        v10 = (__m128)_mm_cvtps_pd((__m128)(unsigned int)*(_QWORD *)v2);
        *((_DWORD *)v2 + 16) = 35;
        *(_QWORD *)v2 = _mm_unpacklo_ps(
                          _mm_cvtpd_ps((__m128d)_mm_and_ps(v10, (__m128)_xmm)),
                          _mm_cvtpd_ps((__m128d)_mm_and_ps((__m128)_mm_cvtps_pd(v9), (__m128)_xmm))).m128_u64[0];
        break;
      case 52:
        v6 = *((_DWORD *)v2 + 2);
        *(_QWORD *)&v14 = *(_QWORD *)v2;
        v7 = (__m128)_mm_cvtps_pd((__m128)(unsigned int)v14);
        DWORD2(v14) = v6;
        *((_DWORD *)v2 + 16) = 52;
        v8 = _mm_cvtpd_ps((__m128d)_mm_and_ps(v7, (__m128)(unsigned __int64)_xmm));
        v7.m128_f32[0] = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v14 + 2)) & _xmm);
        DWORD2(v14) = v7.m128_i32[0];
        *(_QWORD *)v2 = _mm_unpacklo_ps(
                          v8,
                          _mm_cvtpd_ps((__m128d)_mm_and_ps(
                                                  (__m128)_mm_cvtps_pd((__m128)DWORD1(v14)),
                                                  (__m128)(unsigned __int64)_xmm))).m128_u64[0];
        *((_DWORD *)v2 + 2) = v7.m128_i32[0];
        break;
      case 69:
        v4 = 0LL;
        v14 = *(_OWORD *)v2;
        do
        {
          *(float *)((char *)&v15 + v4) = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)((char *)&v14 + v4)) & _xmm);
          v4 += 4LL;
        }
        while ( v4 < 16 );
        v5 = v15;
        *((_DWORD *)v2 + 16) = 69;
        *(_OWORD *)v2 = v5;
        break;
      default:
        v13 = 770;
        goto LABEL_3;
    }
    *((_BYTE *)v2 + 68) = 1;
    return v1;
  }
  v13 = 712;
LABEL_3:
  v1 = -2147467259;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v13);
  return v1;
}
