/*
 * XREFs of ?Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ @ 0x1C0003C40
 * Callers:
 *     ?Initialize@CAffineTransform2DEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x1C00036B0 (-Initialize@CAffineTransform2DEffectMarshaler@DirectComposition@@UEAAJXZ.c)
 *     ?Initialize@CCompositeEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x1C0003940 (-Initialize@CCompositeEffectMarshaler@DirectComposition@@UEAAJXZ.c)
 *     ?Initialize@CShadowEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x1C0003A40 (-Initialize@CShadowEffectMarshaler@DirectComposition@@UEAAJXZ.c)
 *     ?Initialize@CGaussianBlurEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x1C00EFB10 (-Initialize@CGaussianBlurEffectMarshaler@DirectComposition@@UEAAJXZ.c)
 *     ?Initialize@CBrightnessEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x1C00EFC60 (-Initialize@CBrightnessEffectMarshaler@DirectComposition@@UEAAJXZ.c)
 *     ?Initialize@CColorMatrixEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x1C00EFF20 (-Initialize@CColorMatrixEffectMarshaler@DirectComposition@@UEAAJXZ.c)
 *     ?Initialize@CSaturationEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x1C00F0510 (-Initialize@CSaturationEffectMarshaler@DirectComposition@@UEAAJXZ.c)
 *     ?Initialize@CTurbulenceEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x1C00F0680 (-Initialize@CTurbulenceEffectMarshaler@DirectComposition@@UEAAJXZ.c)
 *     ?Initialize@CFloodEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x1C00F08D0 (-Initialize@CFloodEffectMarshaler@DirectComposition@@UEAAJXZ.c)
 *     ?Initialize@CLinearTransferEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x1C00F0AE0 (-Initialize@CLinearTransferEffectMarshaler@DirectComposition@@UEAAJXZ.c)
 *     ?Initialize@CArithmeticCompositeEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x1C00F0FF0 (-Initialize@CArithmeticCompositeEffectMarshaler@DirectComposition@@UEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CFilterEffectMarshaler::Initialize(
        DirectComposition::CFilterEffectMarshaler *this)
{
  unsigned int v2; // eax

  v2 = (*(__int64 (__fastcall **)(DirectComposition::CFilterEffectMarshaler *))(*(_QWORD *)this + 232LL))(this);
  return DirectComposition::CEffectInputSet::Initialize(
           (DirectComposition::CFilterEffectMarshaler *)((char *)this + 56),
           v2);
}
