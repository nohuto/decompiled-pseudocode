/*
 * XREFs of ?CopyFrom@CExpressionValue@@QEAAJAEBV1@@Z @ 0x1801368EC
 * Callers:
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z @ 0x18011E068 (-PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180128008 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x18012965C (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18012BC60 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?ProcessInnerExpression@CKeyframeAnimation@@UEAAJIPEAM@Z @ 0x18012C0C0 (-ProcessInnerExpression@CKeyframeAnimation@@UEAAJIPEAM@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180136D04 (-SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?SetMatrix3x2Value@CExpressionValue@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180136D40 (-SetMatrix3x2Value@CExpressionValue@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?SetMatrix4x4Value@CExpressionValue@@QEAAJAEBUD2DMatrix@@@Z @ 0x180136E0C (-SetMatrix4x4Value@CExpressionValue@@QEAAJAEBUD2DMatrix@@@Z.c)
 */

__int64 __fastcall CExpressionValue::CopyFrom(CExpressionValue *this, const struct CExpressionValue *a2)
{
  unsigned int v2; // esi
  int v5; // eax
  int v6; // eax
  int v7; // xmm6_4
  char v8; // bl

  v2 = 0;
  switch ( *(_DWORD *)a2 )
  {
    case 0x11:
      v8 = *((_BYTE *)a2 + 8);
      CExpressionValue::SetDataType(this);
      *((_BYTE *)this + 8) = v8;
      goto LABEL_21;
    case 0x12:
      v7 = *((_DWORD *)a2 + 2);
      CExpressionValue::SetDataType(this);
      *((_DWORD *)this + 2) = v7;
      goto LABEL_21;
    case 0x23:
      CExpressionValue::SetDataType(this);
      *((_QWORD *)this + 1) = *((_QWORD *)a2 + 1);
      goto LABEL_21;
    case 0x34:
      CExpressionValue::SetDataType(this);
      *((_QWORD *)this + 1) = *((_QWORD *)a2 + 1);
      *((_DWORD *)this + 4) = *((_DWORD *)a2 + 4);
      goto LABEL_21;
    case 0x45:
    case 0x46:
    case 0x47:
      CExpressionValue::SetDataType(this);
      *(_OWORD *)((char *)this + 8) = *(_OWORD *)((char *)a2 + 8);
LABEL_21:
      *((_BYTE *)this + 4) = 1;
      return v2;
    case 0x68:
      v6 = CExpressionValue::SetMatrix3x2Value(this, *((const struct D2D_MATRIX_3X2_F **)a2 + 1));
      v2 = v6;
      if ( v6 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x4Du);
      break;
    case 0x109:
      v5 = CExpressionValue::SetMatrix4x4Value(this, *((const struct D2DMatrix **)a2 + 1));
      v2 = v5;
      if ( v5 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x52u);
      break;
  }
  return v2;
}
