/*
 * XREFs of ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector3@@@Z @ 0x180101B00
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18010EBC0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?SetVector3Value@CKeyframeAnimation@@UEAAJMMM@Z @ 0x180111620 (-SetVector3Value@CKeyframeAnimation@@UEAAJMMM@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CheckAvailableStackSpace@CExpressionValueStack@@AEAAJI@Z @ 0x180100B74 (-CheckAvailableStackSpace@CExpressionValueStack@@AEAAJI@Z.c)
 *     ?SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180121458 (-SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::PushConstant(CExpressionValueStack *this, const struct D2DVector3 *a2)
{
  int v4; // eax
  unsigned int v5; // edi
  __int64 v6; // rbx

  v4 = CExpressionValueStack::CheckAvailableStackSpace(this);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v6 = *((_QWORD *)this + 3) + 24LL * (unsigned int)(*((_DWORD *)this + 4))++;
    CExpressionValue::SetDataType(v6);
    *(_QWORD *)(v6 + 8) = *(_QWORD *)a2;
    *(_DWORD *)(v6 + 16) = *((_DWORD *)a2 + 2);
    *(_BYTE *)(v6 + 4) = 1;
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x341u);
  }
  return v5;
}
