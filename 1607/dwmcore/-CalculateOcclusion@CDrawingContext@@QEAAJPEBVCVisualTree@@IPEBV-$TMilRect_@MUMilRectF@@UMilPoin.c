/*
 * XREFs of ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAPEAVCOcclusionContext@@@Z @ 0x18006D184
 * Callers:
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x180004184 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?RenderForCapture@CHwndRenderTarget@@IEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800095B8 (-RenderForCapture@CHwndRenderTarget@@IEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180074CC0 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z @ 0x1800BB910 (-Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x180120B7C (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_N@Z @ 0x180144498 (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Compute@COcclusionContext@@AEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEBV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEBV?$DynArray@PEAVCOverlayContext@@$0A@@@@Z @ 0x18005BE84 (-Compute@COcclusionContext@@AEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ??_GCOcclusionContext@@QEAAPEAXI@Z @ 0x18005C138 (--_GCOcclusionContext@@QEAAPEAXI@Z.c)
 *     ?UpdateCVIRenderTargets@CDrawingContext@@QEAAXPEBVCVisualTree@@@Z @ 0x18006D12C (-UpdateCVIRenderTargets@CDrawingContext@@QEAAXPEBVCVisualTree@@@Z.c)
 *     ?Create@COcclusionContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800B17DC (-Create@COcclusionContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CDrawingContext::CalculateOcclusion(
        CDrawingContext *this,
        struct CVisualTree *a2,
        unsigned int a3,
        __int64 a4,
        char a5,
        _QWORD *a6)
{
  _QWORD *v10; // rsi
  int v11; // eax
  int v12; // edi
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  COcclusionContext *v17; // rcx

  if ( !*((_QWORD *)this + 808) )
  {
    v10 = (_QWORD *)((char *)this + 6472);
    v11 = COcclusionContext::Create(*((struct CComposition **)this + 3), (struct COcclusionContext **)this + 809);
    v12 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1801B0A2C, 1u, v11, 0x258Au);
      goto LABEL_6;
    }
    *((_QWORD *)this + 808) = *v10;
  }
  v13 = COcclusionContext::Compute(*((_QWORD *)this + 808), (__int64)a2, a3, a4, a5, (__int64)this + 3184, 0LL);
  v12 = v13;
  if ( v13 < 0 )
    MilInstrumentationCheckHR(0x14u, &dword_1801B0A2C, 1u, v13, 0x259Du);
  else
    CDrawingContext::UpdateCVIRenderTargets((COcclusionContext **)this, a2);
LABEL_6:
  if ( v12 < 0 )
  {
    v17 = (COcclusionContext *)*((_QWORD *)this + 809);
    if ( v17 )
    {
      COcclusionContext::`scalar deleting destructor'(v17, v14, v15);
      *((_QWORD *)this + 809) = 0LL;
    }
    *((_QWORD *)this + 808) = 0LL;
  }
  *a6 = *((_QWORD *)this + 808);
  return (unsigned int)v12;
}
