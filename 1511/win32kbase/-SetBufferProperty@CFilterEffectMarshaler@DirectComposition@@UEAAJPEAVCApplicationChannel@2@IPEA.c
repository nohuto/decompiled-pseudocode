/*
 * XREFs of ?SetBufferProperty@CFilterEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAX_KPEA_N@Z @ 0x1C0003D20
 * Callers:
 *     ?SetBufferProperty@CAffineTransform2DEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAX_KPEA_N@Z @ 0x1C0003790 (-SetBufferProperty@CAffineTransform2DEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationCha.c)
 *     ?SetBufferProperty@CShadowEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAX_KPEA_N@Z @ 0x1C0003B00 (-SetBufferProperty@CShadowEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEA.c)
 *     ?SetBufferProperty@CTableTransferEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAX_KPEA_N@Z @ 0x1C00DBB30 (-SetBufferProperty@CTableTransferEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel.c)
 *     ?SetBufferProperty@CBrightnessEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAX_KPEA_N@Z @ 0x1C00DDF20 (-SetBufferProperty@CBrightnessEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@.c)
 *     ?SetBufferProperty@CColorMatrixEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAX_KPEA_N@Z @ 0x1C00DE230 (-SetBufferProperty@CColorMatrixEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2.c)
 *     ?SetBufferProperty@CTurbulenceEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAX_KPEA_N@Z @ 0x1C00DE920 (-SetBufferProperty@CTurbulenceEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@.c)
 *     ?SetBufferProperty@CFloodEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAX_KPEA_N@Z @ 0x1C00DEB60 (-SetBufferProperty@CFloodEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAX.c)
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 */

__int64 __fastcall DirectComposition::CFilterEffectMarshaler::SetBufferProperty(
        DirectComposition::CFilterEffectMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _OWORD *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // ebx
  unsigned int v7; // r8d

  v6 = 0;
  *a6 = 0;
  if ( (a3 & 0xC0000000) == 0xC0000000 && (v7 = a3 & 0x3FFFFFFF, a4) && a5 == 16 && v7 < *((_DWORD *)this + 12) )
  {
    *(_OWORD *)(*((_QWORD *)this + 9) + 16LL * v7) = *a4;
    *((_DWORD *)this + 20) = 0;
    *a6 = 1;
    Win32FreePool(a4);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
