/*
 * XREFs of ?Absolute@CExpressionValueStack@@QEAAJXZ @ 0x180100728
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18010EBC0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x1801017F0 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 *     ?SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180121458 (-SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Absolute(CExpressionValueStack *this)
{
  unsigned int v1; // edi
  struct CExpressionValue *v2; // rax
  struct CExpressionValue *v3; // rbx
  __int128 v4; // xmm0
  __int64 v5; // rax
  __int64 v6; // xmm0_8
  struct CExpressionValue *v7; // rcx
  float v8; // eax
  int v9; // eax
  float v10; // xmm6_4
  unsigned int v12; // [rsp+20h] [rbp-50h]
  __int128 v13; // [rsp+30h] [rbp-40h]
  __int128 v14; // [rsp+40h] [rbp-30h]
  __int64 v15; // [rsp+80h] [rbp+10h]

  v1 = 0;
  if ( *((_DWORD *)this + 4) )
  {
    v2 = CExpressionValueStack::PeekStackValue(this, 0);
    v3 = v2;
    switch ( *(_DWORD *)v2 )
    {
      case 0x11:
        v10 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)v2 + 2)) & _xmm);
        CExpressionValue::SetDataType(v2);
        *((float *)v3 + 2) = v10;
        break;
      case 0x22:
        v15 = *((_QWORD *)v2 + 1);
        CExpressionValue::SetDataType(v2);
        *((_QWORD *)v3 + 1) = _mm_unpacklo_ps(
                                _mm_cvtpd_ps((__m128d)_mm_and_ps(
                                                        (__m128)_mm_cvtps_pd((__m128)(unsigned int)v15),
                                                        (__m128)_xmm)),
                                _mm_cvtpd_ps((__m128d)_mm_and_ps(
                                                        (__m128)_mm_cvtps_pd((__m128)HIDWORD(v15)),
                                                        (__m128)_xmm))).m128_u64[0];
        break;
      case 0x33:
        v6 = *((_QWORD *)v2 + 1);
        v7 = v2;
        v8 = *((float *)v2 + 4);
        *(_QWORD *)&v13 = v6;
        *((float *)&v13 + 2) = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v8) & _xmm);
        CExpressionValue::SetDataType(v7);
        v9 = DWORD2(v13);
        *((_QWORD *)v3 + 1) = _mm_unpacklo_ps(
                                _mm_cvtpd_ps((__m128d)_mm_and_ps(
                                                        (__m128)_mm_cvtps_pd((__m128)(unsigned int)v6),
                                                        (__m128)(unsigned __int64)_xmm)),
                                _mm_cvtpd_ps((__m128d)_mm_and_ps(
                                                        (__m128)_mm_cvtps_pd((__m128)HIDWORD(v6)),
                                                        (__m128)(unsigned __int64)_xmm))).m128_u64[0];
        *((_DWORD *)v3 + 4) = v9;
        break;
      case 0x44:
        v4 = *(_OWORD *)((char *)v2 + 8);
        v5 = 0LL;
        v13 = v4;
        do
        {
          *(float *)((char *)&v14 + v5) = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)((char *)&v13 + v5)) & _xmm);
          v5 += 4LL;
        }
        while ( v5 < 16 );
        CExpressionValue::SetDataType(v3);
        *(_OWORD *)((char *)v3 + 8) = v14;
        break;
      default:
        v12 = 1026;
        goto LABEL_8;
    }
    *((_BYTE *)v3 + 4) = 1;
    return v1;
  }
  v12 = 968;
LABEL_8:
  v1 = -2147467259;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v12);
  return v1;
}
