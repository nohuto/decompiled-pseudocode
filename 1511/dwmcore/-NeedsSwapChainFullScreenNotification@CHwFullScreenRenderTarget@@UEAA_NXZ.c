/*
 * XREFs of ?NeedsSwapChainFullScreenNotification@CHwFullScreenRenderTarget@@UEAA_NXZ @ 0x18000A6F0
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18000AB8C (-CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEBV.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?NeedsSwapChainFullScreenNotification@CDWMSwapChain@@UEAA_NXZ @ 0x1800731F0 (-NeedsSwapChainFullScreenNotification@CDWMSwapChain@@UEAA_NXZ.c)
 */

bool __fastcall CHwFullScreenRenderTarget::NeedsSwapChainFullScreenNotification(CHwFullScreenRenderTarget *this)
{
  bool (__fastcall *v1)(CDWMSwapChain *__hidden); // rdi

  v1 = *(bool (__fastcall **)(CDWMSwapChain *__hidden))(**((_QWORD **)this + 4) + 232LL);
  if ( v1 == CDWMSwapChain::NeedsSwapChainFullScreenNotification )
    return CDWMSwapChain::NeedsSwapChainFullScreenNotification(*((CDWMSwapChain **)this + 4));
  else
    return v1(*((CDWMSwapChain **)this + 4));
}
