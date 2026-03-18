/*
 * XREFs of ?Modulus@CExpressionValueStack@@QEAAJXZ @ 0x180101334
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18010EBC0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     fmodf_0 @ 0x180099B96 (fmodf_0.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x1801017F0 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 *     ?SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180121458 (-SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Modulus(CExpressionValueStack *this)
{
  unsigned int v1; // ebx
  struct CExpressionValue *v3; // rsi
  struct CExpressionValue *v4; // rax
  struct CExpressionValue *v5; // rbp
  float v6; // xmm0_4
  float v7; // xmm6_4
  unsigned int v9; // [rsp+20h] [rbp-38h]

  v1 = 0;
  if ( *((_DWORD *)this + 4) < 2u )
  {
    v9 = 1627;
LABEL_7:
    v1 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v9);
    return v1;
  }
  v3 = CExpressionValueStack::PeekStackValue(this, -1);
  v4 = CExpressionValueStack::PeekStackValue(this, 0);
  v5 = v4;
  if ( *(_DWORD *)v3 != *(_DWORD *)v4 )
  {
    v9 = 1651;
    goto LABEL_7;
  }
  if ( *(_DWORD *)v3 != 17 )
  {
    v9 = 1690;
    goto LABEL_7;
  }
  if ( *((float *)v4 + 2) <= 0.0 )
  {
    v9 = 1666;
    goto LABEL_7;
  }
  v6 = fmodf_0(*((float *)v3 + 2), *((float *)v4 + 2));
  v7 = v6;
  if ( v6 < 0.0 )
    v7 = v6 + *((float *)v5 + 2);
  CExpressionValue::SetDataType(v3);
  *((float *)v3 + 2) = v7;
  *((_BYTE *)v3 + 4) = 1;
  --*((_DWORD *)this + 4);
  return v1;
}
