/*
 * XREFs of ?Vector4@CExpressionValueStack@@QEAAJXZ @ 0x180102F48
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18010EBC0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x1801017F0 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 *     ?SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180121458 (-SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Vector4(CExpressionValueStack *this)
{
  unsigned int v1; // edi
  struct CExpressionValue *v3; // rsi
  struct CExpressionValue *v4; // rbp
  struct CExpressionValue *v5; // r14
  struct CExpressionValue *v6; // rax
  unsigned int v8; // [rsp+20h] [rbp-28h]
  __int128 v9; // [rsp+30h] [rbp-18h]

  v1 = 0;
  if ( *((_DWORD *)this + 4) < 4u )
  {
    v8 = 2348;
LABEL_9:
    v1 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v8);
    return v1;
  }
  v3 = CExpressionValueStack::PeekStackValue(this, -3);
  v4 = CExpressionValueStack::PeekStackValue(this, -2);
  v5 = CExpressionValueStack::PeekStackValue(this, -1);
  v6 = CExpressionValueStack::PeekStackValue(this, 0);
  if ( *(_DWORD *)v3 != 17 || *(_DWORD *)v4 != 17 || *(_DWORD *)v5 != 17 || *(_DWORD *)v6 != 17 )
  {
    v8 = 2367;
    goto LABEL_9;
  }
  LODWORD(v9) = *((_DWORD *)v3 + 2);
  DWORD1(v9) = *((_DWORD *)v4 + 2);
  DWORD2(v9) = *((_DWORD *)v5 + 2);
  HIDWORD(v9) = *((_DWORD *)v6 + 2);
  CExpressionValue::SetDataType(v3);
  *((_BYTE *)v3 + 4) = 1;
  *(_OWORD *)((char *)v3 + 8) = v9;
  *((_DWORD *)this + 4) -= 3;
  return v1;
}
