/*
 * XREFs of ?Negate@CExpressionValueStack@@QEAAJXZ @ 0x180101658
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18010EBC0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x1801017F0 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 *     ?SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180121458 (-SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Negate(CExpressionValueStack *this)
{
  unsigned int v1; // edi
  struct CExpressionValue *v2; // rax
  struct CExpressionValue *v3; // rbx
  __int64 i; // rcx
  __m128 v5; // xmm6
  __m128 v6; // xmm7
  int v7; // eax
  __m128 v8; // xmm7
  __m128 v9; // xmm6
  int v10; // xmm6_4
  unsigned int v12; // [rsp+20h] [rbp-58h]
  __int128 v13; // [rsp+30h] [rbp-48h] BYREF

  v1 = 0;
  if ( *((_DWORD *)this + 4) )
  {
    v2 = CExpressionValueStack::PeekStackValue(this, 0);
    v3 = v2;
    switch ( *(_DWORD *)v2 )
    {
      case 0x11:
        v10 = *((_DWORD *)v2 + 2);
        CExpressionValue::SetDataType(v2);
        *((_DWORD *)v3 + 2) = v10 ^ _xmm;
        break;
      case 0x22:
        v8 = _mm_xor_ps((__m128)*((unsigned int *)v2 + 2), (__m128)_xmm);
        v9 = _mm_xor_ps((__m128)*((unsigned int *)v2 + 3), (__m128)_xmm);
        CExpressionValue::SetDataType(v2);
        *((_QWORD *)v3 + 1) = _mm_unpacklo_ps(v8, v9).m128_u64[0];
        break;
      case 0x33:
        v5 = (__m128)*((unsigned int *)v2 + 3);
        v6 = _mm_xor_ps((__m128)*((unsigned int *)v2 + 2), (__m128)(unsigned int)_xmm);
        DWORD2(v13) = *((_DWORD *)v2 + 4) ^ _xmm;
        CExpressionValue::SetDataType(v2);
        v7 = DWORD2(v13);
        *((_QWORD *)v3 + 1) = _mm_unpacklo_ps(v6, _mm_xor_ps(v5, (__m128)(unsigned int)_xmm)).m128_u64[0];
        *((_DWORD *)v3 + 4) = v7;
        break;
      case 0x44:
        for ( i = 0LL; i < 4; ++i )
          *((_DWORD *)&v13 + i) = *(_DWORD *)((char *)&v13
                                            + 4 * i
                                            + (struct CExpressionValue *)((char *)v2 + 8)
                                            - (struct CExpressionValue *)&v13) ^ _xmm;
        CExpressionValue::SetDataType(v2);
        *(_OWORD *)((char *)v3 + 8) = v13;
        break;
      default:
        v12 = 1105;
        goto LABEL_8;
    }
    *((_BYTE *)v3 + 4) = 1;
    return v1;
  }
  v12 = 1059;
LABEL_8:
  v1 = -2147467259;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v12);
  return v1;
}
