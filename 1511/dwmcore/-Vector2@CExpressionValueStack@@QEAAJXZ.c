/*
 * XREFs of ?Vector2@CExpressionValueStack@@QEAAJXZ @ 0x18011F8DC
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180129AF0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180136D04 (-SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Vector2(CExpressionValueStack *this)
{
  unsigned int v1; // edx
  unsigned int v2; // ebx
  __int64 v4; // r8
  __int64 v5; // rsi
  __m128 v6; // xmm6
  __m128 v7; // xmm7
  unsigned int v9; // [rsp+20h] [rbp-38h]

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  if ( v1 < 2 )
  {
    v9 = 5753;
LABEL_7:
    v2 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v9);
    return v2;
  }
  v4 = *((_QWORD *)this + 3);
  v5 = v4 + 24LL * (v1 - 2);
  if ( *(_DWORD *)v5 != 18 || *(_DWORD *)(v4 + 24LL * (v1 - 1)) != 18 )
  {
    v9 = 5768;
    goto LABEL_7;
  }
  v6 = (__m128)*(unsigned int *)(v5 + 8);
  v7 = (__m128)*(unsigned int *)(v4 + 24LL * (v1 - 1) + 8);
  CExpressionValue::SetDataType(v5);
  *(_BYTE *)(v5 + 4) = 1;
  *(_QWORD *)(v5 + 8) = _mm_unpacklo_ps(v6, v7).m128_u64[0];
  --*((_DWORD *)this + 4);
  return v2;
}
