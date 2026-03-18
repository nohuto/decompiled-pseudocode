/*
 * XREFs of ?IsEquivalentTo@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180036B84
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@222W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x180007808 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV-$.c)
 *     ?UpdateViewbox@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NAEBUMilRectF@@@Z @ 0x18005C118 (-UpdateViewbox@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NAEBUMilRectF@@@Z.c)
 *     ?ProcessSetDxClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETDXCLIP@@@Z @ 0x18005E4E8 (-ProcessSetDxClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETDXCLIP@@@Z.c)
 *     ?NotifyPowerManagerContentType@CHwndRenderTarget@@QEAAXXZ @ 0x18007BAE0 (-NotifyPowerManagerContentType@CHwndRenderTarget@@QEAAXXZ.c)
 *     ?DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N222@Z @ 0x18007D438 (-DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?CanFastDisableDesktopPlane@COverlayContext@@AEAA_NAEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@@Z @ 0x18010FE70 (-CanFastDisableDesktopPlane@COverlayContext@@AEAA_NAEAV-$DynArray@PEAUOverlayPlaneInfo@COverlayC.c)
 *     ?CheckAndNotifyFullScreenSwapChain@COverlayContext@@QEAAJPEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801100CC (-CheckAndNotifyFullScreenSwapChain@COverlayContext@@QEAAJPEAVISwapChainContent@@PEAV-$TMilRect_@.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036DF0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036E98 (-IsInfinite@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 */

char __fastcall TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEquivalentTo(float *a1, float *a2)
{
  char v2; // dl
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r8

  if ( *a1 == *a2 && a1[1] == a2[1] && a1[2] == a2[2] && a1[3] == a2[3]
    || (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(a1)
    && (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(v4)
    || (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite(v5)
    && (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite(v6) )
  {
    return 1;
  }
  return v2;
}
