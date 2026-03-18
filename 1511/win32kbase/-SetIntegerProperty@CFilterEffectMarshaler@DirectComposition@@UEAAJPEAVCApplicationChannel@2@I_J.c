/*
 * XREFs of ?SetIntegerProperty@CFilterEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C0003CE0
 * Callers:
 *     ?SetIntegerProperty@CAffineTransform2DEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C0003750 (-SetIntegerProperty@CAffineTransform2DEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationCh.c)
 *     ?SetIntegerProperty@CCompositeEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C00039A0 (-SetIntegerProperty@CCompositeEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@.c)
 *     ?SetIntegerProperty@CTableTransferEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C00DBC60 (-SetIntegerProperty@CTableTransferEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChanne.c)
 *     ?SetIntegerProperty@CGaussianBlurEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C00DDD70 (-SetIntegerProperty@CGaussianBlurEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel.c)
 *     ?SetIntegerProperty@CColorMatrixEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C00DE340 (-SetIntegerProperty@CColorMatrixEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@.c)
 *     ?SetIntegerProperty@CTurbulenceEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C00DE9A0 (-SetIntegerProperty@CTurbulenceEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2.c)
 *     ?SetIntegerProperty@CLinearTransferEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C00DEF00 (-SetIntegerProperty@CLinearTransferEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChann.c)
 *     ?SetIntegerProperty@CBlendEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C00DF130 (-SetIntegerProperty@CBlendEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JP.c)
 *     ?SetIntegerProperty@CArithmeticCompositeEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C00DF280 (-SetIntegerProperty@CArithmeticCompositeEffectMarshaler@DirectComposition@@UEAAJPEAVCApplication.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CFilterEffectMarshaler::SetIntegerProperty(
        DirectComposition::CFilterEffectMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        int a4,
        bool *a5)
{
  __int64 v6; // r8
  __int64 v7; // rax
  unsigned int v8; // ecx

  if ( (a3 & 0xC0000000) == 0x80000000 && (v6 = a3 & 0x3FFFFFFF, (unsigned int)v6 < *((_DWORD *)this + 12)) )
  {
    v7 = *((_QWORD *)this + 8);
    v8 = 0;
    *(_DWORD *)(v7 + 4 * v6) = a4;
    *((_DWORD *)this + 20) = 0;
    *a5 = 1;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v8;
}
