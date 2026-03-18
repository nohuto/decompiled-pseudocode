/*
 * XREFs of ?CopyFrom@CExpressionValue@@QEAAJAEBV1@@Z @ 0x180121130
 * Callers:
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z @ 0x180101C84 (-PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z.c)
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x18010E508 (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180110850 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?ProcessInnerExpression@CKeyframeAnimation@@UEAAJIPEAM@Z @ 0x180110E50 (-ProcessInnerExpression@CKeyframeAnimation@@UEAAJIPEAM@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180121458 (-SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?SetMatrix3x2Value@CExpressionValue@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180121494 (-SetMatrix3x2Value@CExpressionValue@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?SetMatrix4x4Value@CExpressionValue@@QEAAJAEBUD2DMatrix@@@Z @ 0x180121560 (-SetMatrix4x4Value@CExpressionValue@@QEAAJAEBUD2DMatrix@@@Z.c)
 */

__int64 __fastcall CExpressionValue::CopyFrom(CExpressionValue *this, const struct CExpressionValue *a2)
{
  unsigned int v2; // edi
  int v5; // eax
  int v6; // eax
  int v7; // xmm6_4

  v2 = 0;
  switch ( *(_DWORD *)a2 )
  {
    case 0x11:
      v7 = *((_DWORD *)a2 + 2);
      CExpressionValue::SetDataType(this);
      *((_DWORD *)this + 2) = v7;
      goto LABEL_16;
    case 0x22:
      CExpressionValue::SetDataType(this);
      *((_QWORD *)this + 1) = *((_QWORD *)a2 + 1);
      goto LABEL_16;
    case 0x33:
      CExpressionValue::SetDataType(this);
      *((_QWORD *)this + 1) = *((_QWORD *)a2 + 1);
      *((_DWORD *)this + 4) = *((_DWORD *)a2 + 4);
      goto LABEL_16;
    case 0x44:
      CExpressionValue::SetDataType(this);
      *(_OWORD *)((char *)this + 8) = *(_OWORD *)((char *)a2 + 8);
LABEL_16:
      *((_BYTE *)this + 4) = 1;
      return v2;
    case 0x65:
      v6 = CExpressionValue::SetMatrix3x2Value(this, *((const struct D2D_MATRIX_3X2_F **)a2 + 1));
      v2 = v6;
      if ( v6 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x3Du);
      break;
    case 0x106:
      v5 = CExpressionValue::SetMatrix4x4Value(this, *((const struct D2DMatrix **)a2 + 1));
      v2 = v5;
      if ( v5 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x42u);
      break;
  }
  return v2;
}
