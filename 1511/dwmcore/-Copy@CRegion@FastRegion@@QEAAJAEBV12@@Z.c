/*
 * XREFs of ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800FBDA4
 * Callers:
 *     ?Init@CDirectFlipInfo@@QEAAXPEAVCOverlayContext@@PEAVIRenderTarget@@PEBVCVisual@@PEAVCCompositionSurfaceInfo@@_NPEBVCRegion@@@Z @ 0x180006EF4 (-Init@CDirectFlipInfo@@QEAAXPEAVCOverlayContext@@PEAVIRenderTarget@@PEBVCVisual@@PEAVCCompositio.c)
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@222W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x180007808 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV-$.c)
 * Callees:
 *     ?CopyData@CRegion@FastRegion@@IEAAJPEBVCRgnData@Internal@2@@Z @ 0x18006DE10 (-CopyData@CRegion@FastRegion@@IEAAJPEBVCRgnData@Internal@2@@Z.c)
 */

__int64 __fastcall FastRegion::CRegion::Copy(
        const struct FastRegion::Internal::CRgnData **this,
        const struct FastRegion::Internal::CRgnData **a2)
{
  const struct FastRegion::Internal::CRgnData *v2; // rdx
  __int64 result; // rax

  if ( this != a2 )
  {
    v2 = *a2;
    if ( *(_DWORD *)v2 )
    {
      result = FastRegion::CRegion::CopyData((FastRegion::CRegion *)this, v2);
      if ( (int)result < 0 )
        return result;
    }
    else
    {
      *(_DWORD *)*this = 0;
    }
  }
  return 0LL;
}
