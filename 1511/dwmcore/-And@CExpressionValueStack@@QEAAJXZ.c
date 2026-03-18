/*
 * XREFs of ?And@CExpressionValueStack@@QEAAJXZ @ 0x180119ADC
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180129AF0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180136D04 (-SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::And(CExpressionValueStack *this)
{
  unsigned int v1; // edx
  unsigned int v2; // ebx
  __int64 v4; // r8
  __int64 v5; // rsi
  __int64 v6; // rdx
  char v7; // bp
  unsigned int v9; // [rsp+20h] [rbp-18h]

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  if ( v1 < 2 )
  {
    v9 = 2599;
LABEL_7:
    v2 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v9);
    return v2;
  }
  v4 = *((_QWORD *)this + 3);
  v5 = v4 + 24LL * (v1 - 2);
  v6 = 3LL * (v1 - 1);
  if ( *(_DWORD *)v5 != *(_DWORD *)(v4 + 8 * v6) )
  {
    v9 = 2628;
    goto LABEL_7;
  }
  if ( *(_DWORD *)v5 != 17 )
  {
    v9 = 2647;
    goto LABEL_7;
  }
  if ( !*(_BYTE *)(v5 + 8) || (v7 = 1, !*(_BYTE *)(v4 + 8 * v6 + 8)) )
    v7 = 0;
  CExpressionValue::SetDataType(v5);
  *(_BYTE *)(v5 + 8) = v7;
  *(_BYTE *)(v5 + 4) = 1;
  --*((_DWORD *)this + 4);
  return v2;
}
