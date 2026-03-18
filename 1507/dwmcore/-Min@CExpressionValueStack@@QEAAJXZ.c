/*
 * XREFs of ?Min@CExpressionValueStack@@QEAAJXZ @ 0x180101278
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18010EBC0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x1801017F0 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 *     ?SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180121458 (-SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Min(CExpressionValueStack *this)
{
  unsigned int v1; // ebx
  struct CExpressionValue *v3; // rsi
  struct CExpressionValue *v4; // rax
  float v5; // xmm6_4
  unsigned int v7; // [rsp+20h] [rbp-28h]

  v1 = 0;
  if ( *((_DWORD *)this + 4) < 2u )
  {
    v7 = 1729;
LABEL_7:
    v1 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v7);
    return v1;
  }
  v3 = CExpressionValueStack::PeekStackValue(this, -1);
  v4 = CExpressionValueStack::PeekStackValue(this, 0);
  if ( *(_DWORD *)v3 != *(_DWORD *)v4 )
  {
    v7 = 1753;
    goto LABEL_7;
  }
  if ( *(_DWORD *)v3 != 17 )
  {
    v7 = 1773;
    goto LABEL_7;
  }
  v5 = *((float *)v3 + 2);
  if ( *((float *)v4 + 2) <= v5 )
    v5 = *((float *)v4 + 2);
  CExpressionValue::SetDataType(v3);
  *((float *)v3 + 2) = v5;
  *((_BYTE *)v3 + 4) = 1;
  --*((_DWORD *)this + 4);
  return v1;
}
