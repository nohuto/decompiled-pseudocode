/*
 * XREFs of ?SetMatrix4x4Value@CExpressionValue@@QEAAJAEBUD2DMatrix@@@Z @ 0x180121560
 * Callers:
 *     ?AxisAngleRotateMatrix@CExpressionValueStack@@QEAAJXZ @ 0x180100AA8 (-AxisAngleRotateMatrix@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Matrix4x4@CExpressionValueStack@@QEAAJXZ @ 0x1801010D0 (-Matrix4x4@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Multiply@CExpressionValueStack@@QEAAJXZ @ 0x180101420 (-Multiply@CExpressionValueStack@@QEAAJXZ.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2DMatrix@@@Z @ 0x180101A04 (-PushConstant@CExpressionValueStack@@QEAAJAEBUD2DMatrix@@@Z.c)
 *     ?Scale@CExpressionValueStack@@QEAAJXZ @ 0x180102220 (-Scale@CExpressionValueStack@@QEAAJXZ.c)
 *     ?ScaleMatrix@CExpressionValueStack@@QEAAJXZ @ 0x180102498 (-ScaleMatrix@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Swizzle@CExpressionValueStack@@QEAAJPEAUExpressionNode@@@Z @ 0x180102750 (-Swizzle@CExpressionValueStack@@QEAAJPEAUExpressionNode@@@Z.c)
 *     ?TranslateMatrix@CExpressionValueStack@@QEAAJXZ @ 0x180102BB8 (-TranslateMatrix@CExpressionValueStack@@QEAAJXZ.c)
 *     ?ReadValueFromCache@CExpression@@AEAAJIPEAVCExpressionValue@@PEA_N@Z @ 0x18010FFE0 (-ReadValueFromCache@CExpression@@AEAAJIPEAVCExpressionValue@@PEA_N@Z.c)
 *     ?GetSourcePropertyValue@CManipulationTransform@@UEAAJIPEAVCExpressionValue@@@Z @ 0x180111690 (-GetSourcePropertyValue@CManipulationTransform@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?GetSourcePropertyValue@CPropertyBagBase@@UEAAJIPEAVCExpressionValue@@@Z @ 0x180115860 (-GetSourcePropertyValue@CPropertyBagBase@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?GetSourcePropertyValue@CComponentTransform3D@@UEAAJIPEAVCExpressionValue@@@Z @ 0x18011F170 (-GetSourcePropertyValue@CComponentTransform3D@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?CopyFrom@CExpressionValue@@QEAAJAEBV1@@Z @ 0x180121130 (-CopyFrom@CExpressionValue@@QEAAJAEBV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180121458 (-SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 */

__int64 __fastcall CExpressionValue::SetMatrix4x4Value(CExpressionValue *this, const struct D2DMatrix *a2)
{
  unsigned int v4; // esi
  _OWORD *v5; // rax
  _OWORD *v6; // rax

  v4 = 0;
  CExpressionValue::SetDataType(this, 262);
  v5 = (_OWORD *)*((_QWORD *)this + 1);
  if ( v5 )
  {
    *v5 = *(_OWORD *)a2;
    v5[1] = *((_OWORD *)a2 + 1);
    v5[2] = *((_OWORD *)a2 + 2);
    v5[3] = *((_OWORD *)a2 + 3);
LABEL_8:
    *((_BYTE *)this + 4) = 1;
    return v4;
  }
  v6 = (_OWORD *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                   WPF::g_pProcessHeap,
                   64LL);
  if ( v6 )
  {
    *v6 = *(_OWORD *)a2;
    v6[1] = *((_OWORD *)a2 + 1);
    v6[2] = *((_OWORD *)a2 + 2);
    v6[3] = *((_OWORD *)a2 + 3);
  }
  else
  {
    v6 = 0LL;
  }
  *((_QWORD *)this + 1) = v6;
  if ( v6 )
    goto LABEL_8;
  v4 = -2147024882;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1A7u);
  return v4;
}
