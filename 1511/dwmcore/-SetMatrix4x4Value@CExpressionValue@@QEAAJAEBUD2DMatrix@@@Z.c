/*
 * XREFs of ?SetMatrix4x4Value@CExpressionValue@@QEAAJAEBUD2DMatrix@@@Z @ 0x180136E0C
 * Callers:
 *     ?Add@CExpressionValueStack@@QEAAJXZ @ 0x180119820 (-Add@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Inverse@CExpressionValueStack@@QEAAJXZ @ 0x18011B974 (-Inverse@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Matrix4x4@CExpressionValueStack@@QEAAJXZ @ 0x18011C604 (-Matrix4x4@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Matrix4x4FromAxisAngle@CExpressionValueStack@@QEAAJXZ @ 0x18011C6EC (-Matrix4x4FromAxisAngle@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Matrix4x4FromScale@CExpressionValueStack@@QEAAJXZ @ 0x18011C7B4 (-Matrix4x4FromScale@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Matrix4x4FromTranslation@CExpressionValueStack@@QEAAJXZ @ 0x18011C8B8 (-Matrix4x4FromTranslation@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Multiply@CExpressionValueStack@@QEAAJXZ @ 0x18011CF40 (-Multiply@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Negate@CExpressionValueStack@@QEAAJXZ @ 0x18011D2C0 (-Negate@CExpressionValueStack@@QEAAJXZ.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2DMatrix@@@Z @ 0x18011DCE8 (-PushConstant@CExpressionValueStack@@QEAAJAEBUD2DMatrix@@@Z.c)
 *     ?Scale@CExpressionValueStack@@QEAAJXZ @ 0x18011E968 (-Scale@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Subtract@CExpressionValueStack@@QEAAJXZ @ 0x18011EEE8 (-Subtract@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Swizzle@CExpressionValueStack@@QEAAJPEAUExpressionNode@@@Z @ 0x18011F1A0 (-Swizzle@CExpressionValueStack@@QEAAJPEAUExpressionNode@@@Z.c)
 *     ?ReadValueFromCache@CExpression@@AEAAJIPEAVCExpressionValue@@PEA_N@Z @ 0x18012B334 (-ReadValueFromCache@CExpression@@AEAAJIPEAVCExpressionValue@@PEA_N@Z.c)
 *     ?GetProperty@CManipulationTransform@@UEAAJIPEAVCExpressionValue@@@Z @ 0x18012C4C0 (-GetProperty@CManipulationTransform@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?GetProperty@CPropertyBagBase@@UEAAJIPEAVCExpressionValue@@@Z @ 0x18012E0F0 (-GetProperty@CPropertyBagBase@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?GetProperty@CComponentTransform3D@@UEAAJIPEAVCExpressionValue@@@Z @ 0x18012EC00 (-GetProperty@CComponentTransform3D@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z @ 0x18013665C (-ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z.c)
 *     ?CopyFrom@CExpressionValue@@QEAAJAEBV1@@Z @ 0x1801368EC (-CopyFrom@CExpressionValue@@QEAAJAEBV1@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180136D04 (-SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 */

__int64 __fastcall CExpressionValue::SetMatrix4x4Value(CExpressionValue *this, const struct D2DMatrix *a2)
{
  unsigned int v4; // esi
  _OWORD *v5; // rax
  _OWORD *v6; // rax

  v4 = 0;
  CExpressionValue::SetDataType(this, 265);
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
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x222u);
  return v4;
}
