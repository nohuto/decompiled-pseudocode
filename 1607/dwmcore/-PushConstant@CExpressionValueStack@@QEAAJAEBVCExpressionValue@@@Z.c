/*
 * XREFs of ?PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z @ 0x18001AA98
 * Callers:
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_K@Z @ 0x180088FE0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_K@Z.c)
 *     ?CalculateValueWorker@CConditionalExpression@@UEAAJPEAVCExpressionValueStack@@_K@Z @ 0x180148EF0 (-CalculateValueWorker@CConditionalExpression@@UEAAJPEAVCExpressionValueStack@@_K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CheckAvailableStackSpace@CExpressionValueStack@@AEAAJI@Z @ 0x18008C6F4 (-CheckAvailableStackSpace@CExpressionValueStack@@AEAAJI@Z.c)
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x1800AD090 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::PushConstant(CExpressionValueStack *this, const struct CExpressionValue *a2)
{
  int v4; // eax
  unsigned int v5; // ebx

  v4 = CExpressionValueStack::CheckAvailableStackSpace(this, (unsigned int)a2);
  v5 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x2A6u);
  else
    CExpressionValue::CopyFrom(
      (CExpressionValue *)(*((_QWORD *)this + 3) + 72LL * (unsigned int)(*((_DWORD *)this + 4))++),
      a2);
  return v5;
}
