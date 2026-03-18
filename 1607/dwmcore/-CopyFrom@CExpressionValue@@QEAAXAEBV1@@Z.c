/*
 * XREFs of ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x1800AD090
 * Callers:
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x180019AD0 (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z @ 0x18001AA98 (-PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z.c)
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_K@Z @ 0x1800869E0 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_K@Z.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_K@Z @ 0x180088FE0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_K@Z.c)
 *     ?ProcessInnerExpression@CKeyframeAnimation@@UEAAJIPEAM@Z @ 0x180148780 (-ProcessInnerExpression@CKeyframeAnimation@@UEAAJIPEAM@Z.c)
 *     ?AddStackValueToSum@CConditionalExpression@@AEAAJPEAVCExpressionValue@@PEAVCExpressionValueStack@@@Z @ 0x180148C14 (-AddStackValueToSum@CConditionalExpression@@AEAAJPEAVCExpressionValue@@PEAVCExpressionValueStack.c)
 * Callees:
 *     <none>
 */

void __fastcall CExpressionValue::CopyFrom(CExpressionValue *this, const struct CExpressionValue *a2)
{
  switch ( *((_DWORD *)a2 + 16) )
  {
    case 0x11:
      *(_BYTE *)this = *(_BYTE *)a2;
      *((_DWORD *)this + 16) = 17;
      goto LABEL_4;
    case 0x12:
      *(_DWORD *)this = *(_DWORD *)a2;
      *((_DWORD *)this + 16) = 18;
LABEL_4:
      *((_BYTE *)this + 68) = 1;
      return;
    case 0x23:
      *((_DWORD *)this + 16) = 35;
      *(_QWORD *)this = *(_QWORD *)a2;
      goto LABEL_4;
    case 0x34:
      *((_DWORD *)this + 16) = 52;
      *(_QWORD *)this = *(_QWORD *)a2;
      *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
      goto LABEL_4;
    case 0x45:
      *((_DWORD *)this + 16) = 69;
      goto LABEL_17;
    case 0x46:
      *((_DWORD *)this + 16) = 70;
      goto LABEL_17;
    case 0x47:
      *((_DWORD *)this + 16) = 71;
LABEL_17:
      *(_OWORD *)this = *(_OWORD *)a2;
      goto LABEL_4;
    case 0x68:
      *((_DWORD *)this + 16) = 104;
      *(_OWORD *)this = *(_OWORD *)a2;
      *((_QWORD *)this + 2) = *((_QWORD *)a2 + 2);
      goto LABEL_4;
    case 0x109:
      *((_DWORD *)this + 16) = 265;
      *(_OWORD *)this = *(_OWORD *)a2;
      *((_OWORD *)this + 1) = *((_OWORD *)a2 + 1);
      *((_OWORD *)this + 2) = *((_OWORD *)a2 + 2);
      *((_OWORD *)this + 3) = *((_OWORD *)a2 + 3);
      goto LABEL_4;
  }
}
