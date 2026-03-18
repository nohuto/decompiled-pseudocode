/*
 * XREFs of ?PushConstant@CExpressionValueStack@@QEAAJM@Z @ 0x180101D00
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18010EBC0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?SetScalarValue@CKeyframeAnimation@@UEAAJM@Z @ 0x1801115D0 (-SetScalarValue@CKeyframeAnimation@@UEAAJM@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CheckAvailableStackSpace@CExpressionValueStack@@AEAAJI@Z @ 0x180100B74 (-CheckAvailableStackSpace@CExpressionValueStack@@AEAAJI@Z.c)
 *     ?SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180121458 (-SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::PushConstant(CExpressionValueStack *this, float a2)
{
  int v3; // eax
  unsigned int v4; // edi
  __int64 v5; // rbx

  v3 = CExpressionValueStack::CheckAvailableStackSpace(this);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v5 = *((_QWORD *)this + 3) + 24LL * (unsigned int)(*((_DWORD *)this + 4))++;
    CExpressionValue::SetDataType(v5);
    *(float *)(v5 + 8) = a2;
    *(_BYTE *)(v5 + 4) = 1;
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x30Du);
  }
  return v4;
}
