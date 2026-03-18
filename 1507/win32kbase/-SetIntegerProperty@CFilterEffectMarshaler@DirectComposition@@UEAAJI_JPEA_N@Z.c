/*
 * XREFs of ?SetIntegerProperty@CFilterEffectMarshaler@DirectComposition@@UEAAJI_JPEA_N@Z @ 0x1C00D89A0
 * Callers:
 *     ?SetIntegerProperty@CTableTransferEffectMarshaler@DirectComposition@@UEAAJI_JPEA_N@Z @ 0x1C00D9A30 (-SetIntegerProperty@CTableTransferEffectMarshaler@DirectComposition@@UEAAJI_JPEA_N@Z.c)
 *     ?SetIntegerProperty@CGaussianBlurEffectMarshaler@DirectComposition@@UEAAJI_JPEA_N@Z @ 0x1C00DBBD0 (-SetIntegerProperty@CGaussianBlurEffectMarshaler@DirectComposition@@UEAAJI_JPEA_N@Z.c)
 *     ?SetIntegerProperty@CColorMatrixEffectMarshaler@DirectComposition@@UEAAJI_JPEA_N@Z @ 0x1C00DC1A0 (-SetIntegerProperty@CColorMatrixEffectMarshaler@DirectComposition@@UEAAJI_JPEA_N@Z.c)
 *     ?SetIntegerProperty@CTurbulenceEffectMarshaler@DirectComposition@@UEAAJI_JPEA_N@Z @ 0x1C00DCA40 (-SetIntegerProperty@CTurbulenceEffectMarshaler@DirectComposition@@UEAAJI_JPEA_N@Z.c)
 *     ?SetIntegerProperty@CLinearTransferEffectMarshaler@DirectComposition@@UEAAJI_JPEA_N@Z @ 0x1C00DCF20 (-SetIntegerProperty@CLinearTransferEffectMarshaler@DirectComposition@@UEAAJI_JPEA_N@Z.c)
 *     ?SetIntegerProperty@CCompositeEffectMarshaler@DirectComposition@@UEAAJI_JPEA_N@Z @ 0x1C00DD180 (-SetIntegerProperty@CCompositeEffectMarshaler@DirectComposition@@UEAAJI_JPEA_N@Z.c)
 *     ?SetIntegerProperty@CBlendEffectMarshaler@DirectComposition@@UEAAJI_JPEA_N@Z @ 0x1C00DD250 (-SetIntegerProperty@CBlendEffectMarshaler@DirectComposition@@UEAAJI_JPEA_N@Z.c)
 *     ?SetIntegerProperty@CArithmeticCompositeEffectMarshaler@DirectComposition@@UEAAJI_JPEA_N@Z @ 0x1C00DD410 (-SetIntegerProperty@CArithmeticCompositeEffectMarshaler@DirectComposition@@UEAAJI_JPEA_N@Z.c)
 *     ?SetIntegerProperty@CAffineTransform2DEffectMarshaler@DirectComposition@@UEAAJI_JPEA_N@Z @ 0x1C00DD6D0 (-SetIntegerProperty@CAffineTransform2DEffectMarshaler@DirectComposition@@UEAAJI_JPEA_N@Z.c)
 * Callees:
 *     ?SetFlag@CEffectInputSet@DirectComposition@@QEAAJI_J@Z @ 0x1C00D94D4 (-SetFlag@CEffectInputSet@DirectComposition@@QEAAJI_J@Z.c)
 */

__int64 __fastcall DirectComposition::CFilterEffectMarshaler::SetIntegerProperty(
        DirectComposition::CFilterEffectMarshaler *this,
        int a2,
        __int64 a3,
        bool *a4)
{
  __int64 result; // rax
  _BYTE *v5; // r9

  if ( (a2 & 0xC0000000) != 0x80000000 )
    return 3221225485LL;
  result = DirectComposition::CEffectInputSet::SetFlag(
             (DirectComposition::CFilterEffectMarshaler *)((char *)this + 56),
             a2 & 0x3FFFFFFF,
             a3);
  if ( (int)result >= 0 )
    *v5 = 1;
  return result;
}
