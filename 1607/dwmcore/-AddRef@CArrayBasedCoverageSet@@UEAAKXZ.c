/*
 * XREFs of ?AddRef@CArrayBasedCoverageSet@@UEAAKXZ @ 0x1800A4720
 * Callers:
 *     ?AddRef@CRenderTargetImageSource@@W7EAAKXZ @ 0x1800BFF70 (-AddRef@CRenderTargetImageSource@@W7EAAKXZ.c)
 *     ?AddRef@CRenderTargetImageSource@@WBI@EAAKXZ @ 0x1800BFF80 (-AddRef@CRenderTargetImageSource@@WBI@EAAKXZ.c)
 *     ?AddRef@CRenderTargetImageSource@@WHI@EAAKXZ @ 0x1800BFF90 (-AddRef@CRenderTargetImageSource@@WHI@EAAKXZ.c)
 *     ?AddRef@CRenderTargetImageSource@@WIA@EAAKXZ @ 0x1800BFFA0 (-AddRef@CRenderTargetImageSource@@WIA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CArrayBasedCoverageSet::AddRef(CArrayBasedCoverageSet *this)
{
  return CBitmapOfDeviceBitmaps::AddRef((CArrayBasedCoverageSet *)((char *)this + 8));
}
