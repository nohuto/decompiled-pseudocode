/*
 * XREFs of ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180101C08
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18010EBC0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CheckAvailableStackSpace@CExpressionValueStack@@AEAAJI@Z @ 0x180100B74 (-CheckAvailableStackSpace@CExpressionValueStack@@AEAAJI@Z.c)
 *     ?SetMatrix3x2Value@CExpressionValue@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180121494 (-SetMatrix3x2Value@CExpressionValue@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::PushConstant(CExpressionValueStack *this, const struct D2D_MATRIX_3X2_F *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax

  v4 = CExpressionValueStack::CheckAvailableStackSpace(this);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v6 = CExpressionValue::SetMatrix3x2Value(
           (CExpressionValue *)(*((_QWORD *)this + 3) + 24LL * (unsigned int)(*((_DWORD *)this + 4))++),
           a2);
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x377u);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x375u);
  }
  return v5;
}
