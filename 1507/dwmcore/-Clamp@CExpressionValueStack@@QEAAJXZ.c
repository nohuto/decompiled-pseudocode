/*
 * XREFs of ?Clamp@CExpressionValueStack@@QEAAJXZ @ 0x180100BCC
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18010EBC0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x1801017F0 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 *     ?SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180121458 (-SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Clamp(CExpressionValueStack *this)
{
  unsigned int v1; // ebx
  struct CExpressionValue *v3; // rsi
  struct CExpressionValue *v4; // rbp
  struct CExpressionValue *v5; // rax
  int v6; // ecx
  float v7; // xmm6_4
  unsigned int v9; // [rsp+20h] [rbp-28h]

  v1 = 0;
  if ( *((_DWORD *)this + 4) < 3u )
  {
    v9 = 1896;
LABEL_13:
    v1 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v9);
    return v1;
  }
  v3 = CExpressionValueStack::PeekStackValue(this, -2);
  v4 = CExpressionValueStack::PeekStackValue(this, -1);
  v5 = CExpressionValueStack::PeekStackValue(this, 0);
  v6 = *(_DWORD *)v3;
  if ( *(_DWORD *)v3 != *(_DWORD *)v4 || v6 != *(_DWORD *)v5 )
  {
    v9 = 1922;
    goto LABEL_13;
  }
  if ( v6 != 17 )
  {
    v9 = 1946;
    goto LABEL_13;
  }
  v7 = *((float *)v3 + 2);
  if ( v7 <= *((float *)v4 + 2) )
    v7 = *((float *)v4 + 2);
  if ( *((float *)v5 + 2) <= v7 )
    v7 = *((float *)v5 + 2);
  CExpressionValue::SetDataType(v3);
  *((float *)v3 + 2) = v7;
  *((_BYTE *)v3 + 4) = 1;
  *((_DWORD *)this + 4) -= 2;
  return v1;
}
