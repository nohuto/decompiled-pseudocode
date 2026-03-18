/*
 * XREFs of ?SetMatrix3x2Value@CExpressionValue@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180136D40
 * Callers:
 *     ?Add@CExpressionValueStack@@QEAAJXZ @ 0x180119820 (-Add@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Inverse@CExpressionValueStack@@QEAAJXZ @ 0x18011B974 (-Inverse@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Matrix3x2@CExpressionValueStack@@QEAAJXZ @ 0x18011C36C (-Matrix3x2@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Matrix3x2FromScale@CExpressionValueStack@@QEAAJXZ @ 0x18011C450 (-Matrix3x2FromScale@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Matrix3x2FromTranslation@CExpressionValueStack@@QEAAJXZ @ 0x18011C53C (-Matrix3x2FromTranslation@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Multiply@CExpressionValueStack@@QEAAJXZ @ 0x18011CF40 (-Multiply@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Negate@CExpressionValueStack@@QEAAJXZ @ 0x18011D2C0 (-Negate@CExpressionValueStack@@QEAAJXZ.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z @ 0x18011DF6C (-PushConstant@CExpressionValueStack@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?Scale@CExpressionValueStack@@QEAAJXZ @ 0x18011E968 (-Scale@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Subtract@CExpressionValueStack@@QEAAJXZ @ 0x18011EEE8 (-Subtract@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Swizzle@CExpressionValueStack@@QEAAJPEAUExpressionNode@@@Z @ 0x18011F1A0 (-Swizzle@CExpressionValueStack@@QEAAJPEAUExpressionNode@@@Z.c)
 *     ?ReadValueFromCache@CExpression@@AEAAJIPEAVCExpressionValue@@PEA_N@Z @ 0x18012B334 (-ReadValueFromCache@CExpression@@AEAAJIPEAVCExpressionValue@@PEA_N@Z.c)
 *     ?GetProperty@CPropertyBagBase@@UEAAJIPEAVCExpressionValue@@@Z @ 0x18012E0F0 (-GetProperty@CPropertyBagBase@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z @ 0x18013665C (-ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z.c)
 *     ?CopyFrom@CExpressionValue@@QEAAJAEBV1@@Z @ 0x1801368EC (-CopyFrom@CExpressionValue@@QEAAJAEBV1@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180136D04 (-SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 */

__int64 __fastcall CExpressionValue::SetMatrix3x2Value(CExpressionValue *this, const struct D2D_MATRIX_3X2_F *a2)
{
  unsigned int v3; // esi
  _QWORD *v5; // rax
  __int64 v6; // rcx

  v3 = 0;
  CExpressionValue::SetDataType(this, 104);
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
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1E6u);
  }
  return v3;
}
