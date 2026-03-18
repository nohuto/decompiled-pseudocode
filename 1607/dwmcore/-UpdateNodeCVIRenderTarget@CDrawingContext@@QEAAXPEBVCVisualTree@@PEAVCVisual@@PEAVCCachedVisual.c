/*
 * XREFs of ?UpdateNodeCVIRenderTarget@CDrawingContext@@QEAAXPEBVCVisualTree@@PEAVCVisual@@PEAVCCachedVisualImage@@_NAEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x180003688
 * Callers:
 *     ?UpdateCVIRenderTargets@COcclusionContext@@AEAAXPEAVCDrawingContext@@PEBVCVisualTree@@@Z @ 0x18005BCA8 (-UpdateCVIRenderTargets@COcclusionContext@@AEAAXPEAVCDrawingContext@@PEBVCVisualTree@@@Z.c)
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180074CC0 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?DrawCommonRenderingEffect@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCVisual@@@Z @ 0x18014F1CC (-DrawCommonRenderingEffect@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCVisual@@@.c)
 * Callees:
 *     ?UnregisterGraphWalkRoot@CThreadContext@@SAXXZ @ 0x18000DEB0 (-UnregisterGraphWalkRoot@CThreadContext@@SAXXZ.c)
 *     ?UpdateRenderTargetIfDirty@CCachedVisualImage@@QEAAXU_LUID@@VDisplayId@@@Z @ 0x18001B788 (-UpdateRenderTargetIfDirty@CCachedVisualImage@@QEAAXU_LUID@@VDisplayId@@@Z.c)
 *     ?RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z @ 0x1800AD988 (-RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z.c)
 *     ?IsNodeOccluded@CDrawingContext@@AEAA_NPEBVCVisualTree@@PEBVCVisual@@AEBV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x180107530 (-IsNodeOccluded@CDrawingContext@@AEAA_NPEBVCVisualTree@@PEBVCVisual@@AEBV-$CRectF@UDeviceHPC@Coo.c)
 */

void __fastcall CDrawingContext::UpdateNodeCVIRenderTarget(
        __int64 a1,
        __int64 a2,
        void *a3,
        __int64 a4,
        char a5,
        __int64 a6)
{
  if ( (int)CThreadContext::RegisterGraphWalkRoot(a3) >= 0 )
  {
    if ( a5 || !(unsigned __int8)CDrawingContext::IsNodeOccluded(a1, a2, a3, a6) )
      CCachedVisualImage::UpdateRenderTargetIfDirty(a4, *(_QWORD *)(a1 + 464), *(unsigned int *)(a1 + 472));
    CThreadContext::UnregisterGraphWalkRoot();
  }
}
