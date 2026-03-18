/*
 * XREFs of ?SetMatrix3x2Value@CExpressionValue@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180121494
 * Callers:
 *     ?Matrix3x2@CExpressionValueStack@@QEAAJXZ @ 0x180100FE4 (-Matrix3x2@CExpressionValueStack@@QEAAJXZ.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180101C08 (-PushConstant@CExpressionValueStack@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?Scale@CExpressionValueStack@@QEAAJXZ @ 0x180102220 (-Scale@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Swizzle@CExpressionValueStack@@QEAAJPEAUExpressionNode@@@Z @ 0x180102750 (-Swizzle@CExpressionValueStack@@QEAAJPEAUExpressionNode@@@Z.c)
 *     ?ReadValueFromCache@CExpression@@AEAAJIPEAVCExpressionValue@@PEA_N@Z @ 0x18010FFE0 (-ReadValueFromCache@CExpression@@AEAAJIPEAVCExpressionValue@@PEA_N@Z.c)
 *     ?GetSourcePropertyValue@CPropertyBagBase@@UEAAJIPEAVCExpressionValue@@@Z @ 0x180115860 (-GetSourcePropertyValue@CPropertyBagBase@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?CopyFrom@CExpressionValue@@QEAAJAEBV1@@Z @ 0x180121130 (-CopyFrom@CExpressionValue@@QEAAJAEBV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180121458 (-SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 */

__int64 __fastcall CExpressionValue::SetMatrix3x2Value(CExpressionValue *this, const struct D2D_MATRIX_3X2_F *a2)
{
  unsigned int v3; // esi
  _QWORD *v5; // rax
  __int64 v6; // rcx

  v3 = 0;
  CExpressionValue::SetDataType(this, 101);
  if ( *((_QWORD *)this + 1)
    || ((v5 = (_QWORD *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                          WPF::g_pProcessHeap,
                          24LL)) == 0LL
      ? (v5 = 0LL)
      : (_QWORD *)(*v5 = 0LL, v5[1] = 0LL, v5[2] = 0LL),
        (*((_QWORD *)this + 1) = v5) != 0LL) )
  {
    v6 = *((_QWORD *)this + 1);
    *(_OWORD *)v6 = *(_OWORD *)&a2->m11;
    *(_QWORD *)(v6 + 16) = *(_QWORD *)&a2->m[2][0];
    *((_BYTE *)this + 4) = 1;
  }
  else
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x16Bu);
  }
  return v3;
}
