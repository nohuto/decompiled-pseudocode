/*
 * XREFs of ?Clear@CArrayBasedCoverageSet@@UEAAXXZ @ 0x180036AD0
 * Callers:
 *     ?Compute@COcclusionContext@@AEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEBV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEAVCOverlayContext@@@Z @ 0x18005524C (-Compute@COcclusionContext@@AEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ?Initialize@COcclusionContext@@AEAAJXZ @ 0x180058074 (-Initialize@COcclusionContext@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CArrayBasedCoverageSet::Clear(CArrayBasedCoverageSet *this)
{
  *((_DWORD *)this + 12) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 24, 20LL);
}
