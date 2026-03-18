/*
 * XREFs of ?Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ @ 0x1C00D8BA0
 * Callers:
 *     ?Initialize@CGaussianBlurEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x1C00DBBA0 (-Initialize@CGaussianBlurEffectMarshaler@DirectComposition@@UEAAJXZ.c)
 *     ?Initialize@CBrightnessEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x1C00DBD30 (-Initialize@CBrightnessEffectMarshaler@DirectComposition@@UEAAJXZ.c)
 *     ?Initialize@CColorMatrixEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x1C00DC000 (-Initialize@CColorMatrixEffectMarshaler@DirectComposition@@UEAAJXZ.c)
 *     ?Initialize@CShadowEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x1C00DC4A0 (-Initialize@CShadowEffectMarshaler@DirectComposition@@UEAAJXZ.c)
 *     ?Initialize@CSaturationEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x1C00DC840 (-Initialize@CSaturationEffectMarshaler@DirectComposition@@UEAAJXZ.c)
 *     ?Initialize@CTurbulenceEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x1C00DC980 (-Initialize@CTurbulenceEffectMarshaler@DirectComposition@@UEAAJXZ.c)
 *     ?Initialize@CFloodEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x1C00DCBC0 (-Initialize@CFloodEffectMarshaler@DirectComposition@@UEAAJXZ.c)
 *     ?Initialize@CLinearTransferEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x1C00DCDD0 (-Initialize@CLinearTransferEffectMarshaler@DirectComposition@@UEAAJXZ.c)
 *     ?Initialize@CCompositeEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x1C00DD170 (-Initialize@CCompositeEffectMarshaler@DirectComposition@@UEAAJXZ.c)
 *     ?Initialize@CArithmeticCompositeEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x1C00DD360 (-Initialize@CArithmeticCompositeEffectMarshaler@DirectComposition@@UEAAJXZ.c)
 *     ?Initialize@CAffineTransform2DEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x1C00DD5B0 (-Initialize@CAffineTransform2DEffectMarshaler@DirectComposition@@UEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CFilterEffectMarshaler::Initialize(
        DirectComposition::CFilterEffectMarshaler *this)
{
  unsigned int v2; // eax

  v2 = (*(__int64 (__fastcall **)(DirectComposition::CFilterEffectMarshaler *))(*(_QWORD *)this + 208LL))(this);
  return DirectComposition::CEffectInputSet::Initialize(
           (DirectComposition::CFilterEffectMarshaler *)((char *)this + 56),
           v2);
}
