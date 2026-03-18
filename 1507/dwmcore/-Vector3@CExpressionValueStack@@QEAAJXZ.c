/*
 * XREFs of ?Vector3@CExpressionValueStack@@QEAAJXZ @ 0x180102E5C
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18010EBC0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x1801017F0 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 *     ?SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180121458 (-SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Vector3(CExpressionValueStack *this)
{
  unsigned int v1; // ebx
  struct CExpressionValue *v3; // rsi
  struct CExpressionValue *v4; // rbp
  struct CExpressionValue *v5; // rax
  __m128 v6; // xmm6
  __m128 v7; // xmm7
  unsigned int v9; // [rsp+20h] [rbp-48h]
  int v10; // [rsp+38h] [rbp-30h]

  v1 = 0;
  if ( *((_DWORD *)this + 4) < 3u )
  {
    v9 = 2283;
LABEL_8:
    v1 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v9);
    return v1;
  }
  v3 = CExpressionValueStack::PeekStackValue(this, -2);
  v4 = CExpressionValueStack::PeekStackValue(this, -1);
  v5 = CExpressionValueStack::PeekStackValue(this, 0);
  if ( *(_DWORD *)v3 != 17 || *(_DWORD *)v4 != 17 || *(_DWORD *)v5 != 17 )
  {
    v9 = 2300;
    goto LABEL_8;
  }
  v6 = (__m128)*((unsigned int *)v3 + 2);
  v7 = (__m128)*((unsigned int *)v4 + 2);
  v10 = *((_DWORD *)v5 + 2);
  CExpressionValue::SetDataType(v3);
  *((_QWORD *)v3 + 1) = _mm_unpacklo_ps(v6, v7).m128_u64[0];
  *((_DWORD *)v3 + 4) = v10;
  *((_BYTE *)v3 + 4) = 1;
  *((_DWORD *)this + 4) -= 2;
  return v1;
}
