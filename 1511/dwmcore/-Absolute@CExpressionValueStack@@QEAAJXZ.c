/*
 * XREFs of ?Absolute@CExpressionValueStack@@QEAAJXZ @ 0x1801195A8
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180129AF0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180136D04 (-SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Absolute(CExpressionValueStack *this)
{
  unsigned int v1; // edi
  int v2; // eax
  __int64 v3; // rbx
  __int64 v4; // rax
  float v5; // eax
  int v6; // eax
  float v7; // xmm6_4
  unsigned int v9; // [rsp+20h] [rbp-50h]
  __int128 v10; // [rsp+30h] [rbp-40h]
  __int128 v11; // [rsp+40h] [rbp-30h]
  __int64 v12; // [rsp+80h] [rbp+10h]

  v1 = 0;
  v2 = *((_DWORD *)this + 4);
  if ( v2 )
  {
    v3 = *((_QWORD *)this + 3) + 24LL * (unsigned int)(v2 - 1);
    switch ( *(_DWORD *)v3 )
    {
      case 0x12:
        v7 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v3 + 8)) & _xmm);
        CExpressionValue::SetDataType(v3);
        *(float *)(v3 + 8) = v7;
        break;
      case 0x23:
        v12 = *(_QWORD *)(v3 + 8);
        CExpressionValue::SetDataType(v3);
        *(_QWORD *)(v3 + 8) = _mm_unpacklo_ps(
                                _mm_cvtpd_ps((__m128d)_mm_and_ps(
                                                        (__m128)_mm_cvtps_pd((__m128)(unsigned int)v12),
                                                        (__m128)_xmm)),
                                _mm_cvtpd_ps((__m128d)_mm_and_ps(
                                                        (__m128)_mm_cvtps_pd((__m128)HIDWORD(v12)),
                                                        (__m128)_xmm))).m128_u64[0];
        break;
      case 0x34:
        v5 = *(float *)(v3 + 16);
        *(_QWORD *)&v10 = *(_QWORD *)(v3 + 8);
        *((float *)&v10 + 2) = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v5) & _xmm);
        CExpressionValue::SetDataType(v3);
        v6 = DWORD2(v10);
        *(_QWORD *)(v3 + 8) = _mm_unpacklo_ps(
                                _mm_cvtpd_ps((__m128d)_mm_and_ps(
                                                        (__m128)_mm_cvtps_pd((__m128)(unsigned int)v10),
                                                        (__m128)(unsigned __int64)_xmm)),
                                _mm_cvtpd_ps((__m128d)_mm_and_ps(
                                                        (__m128)_mm_cvtps_pd((__m128)DWORD1(v10)),
                                                        (__m128)(unsigned __int64)_xmm))).m128_u64[0];
        *(_DWORD *)(v3 + 16) = v6;
        break;
      case 0x45:
        v4 = 0LL;
        v10 = *(_OWORD *)(v3 + 8);
        do
        {
          *(float *)((char *)&v11 + v4) = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)((char *)&v10 + v4)) & _xmm);
          v4 += 4LL;
        }
        while ( v4 < 16 );
        CExpressionValue::SetDataType(v3);
        *(_OWORD *)(v3 + 8) = v11;
        break;
      default:
        v9 = 1150;
        goto LABEL_8;
    }
    *(_BYTE *)(v3 + 4) = 1;
    return v1;
  }
  v9 = 1092;
LABEL_8:
  v1 = -2147467259;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v9);
  return v1;
}
