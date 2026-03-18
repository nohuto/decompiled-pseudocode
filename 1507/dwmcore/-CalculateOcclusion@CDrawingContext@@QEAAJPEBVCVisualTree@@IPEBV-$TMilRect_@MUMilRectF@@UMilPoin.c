/*
 * XREFs of ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAVCOverlayContext@@PEAPEAVCOcclusionContext@@@Z @ 0x18002F32C
 * Callers:
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x1800299D8 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?RenderForCapture@CHwndRenderTarget@@IEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18004BAA8 (-RenderForCapture@CHwndRenderTarget@@IEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x18004BE00 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@_N@Z @ 0x180053DA4 (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@_N@Z.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z @ 0x1800ED270 (-Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x1800F0774 (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 * Callees:
 *     ?Compute@COcclusionContext@@AEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEBV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEAVCOverlayContext@@@Z @ 0x18001F420 (-Compute@COcclusionContext@@AEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ?UpdateCVIRenderTargets@COcclusionContext@@AEAAXPEAVCDrawingContext@@PEBVCVisualTree@@@Z @ 0x18001F774 (-UpdateCVIRenderTargets@COcclusionContext@@AEAAXPEAVCDrawingContext@@PEBVCVisualTree@@@Z.c)
 *     ??_GCOcclusionContext@@QEAAPEAXI@Z @ 0x18001F840 (--_GCOcclusionContext@@QEAAPEAXI@Z.c)
 *     ?Create@COcclusionContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x18005ED78 (-Create@COcclusionContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     TemplateEventDescriptor @ 0x1800E1E38 (TemplateEventDescriptor.c)
 */

__int64 __fastcall CDrawingContext::CalculateOcclusion(
        struct CComposition **a1,
        struct CVisualTree *a2,
        unsigned int a3,
        const struct MilRectF *a4,
        char a5,
        __int64 a6,
        __int64 *a7)
{
  __int64 *v7; // rbx
  int v12; // eax
  int v13; // edi
  int v14; // eax
  __int64 v15; // rcx
  unsigned int v16; // edx
  __int64 v17; // rcx

  v7 = (__int64 *)(a1 + 718);
  if ( a1[718] || (v12 = COcclusionContext::Create(a1[3], (struct COcclusionContext **)v7), v13 = v12, v12 >= 0) )
  {
    v14 = COcclusionContext::Compute(*v7, (__int64)a2, a3, a4, a5, (struct D2DMatrix *)(a1 + 339), a6);
    v13 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_18016AB1C, 1u, v14, 0x25D3u);
    }
    else
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        TemplateEventDescriptor(v15, &EVTDESC_RENDER_CVIPASS_Start);
      COcclusionContext::UpdateCVIRenderTargets((COcclusionContext *)*v7, (struct CDrawingContext *)a1, a2);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        TemplateEventDescriptor(v17, &EVTDESC_RENDER_CVIPASS_Stop);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, &dword_18016AB1C, 1u, v12, 0x25C1u);
  }
  if ( v13 < 0 && *v7 )
  {
    COcclusionContext::`scalar deleting destructor'((COcclusionContext *)*v7, v16);
    *v7 = 0LL;
  }
  *a7 = *v7;
  return (unsigned int)v13;
}
