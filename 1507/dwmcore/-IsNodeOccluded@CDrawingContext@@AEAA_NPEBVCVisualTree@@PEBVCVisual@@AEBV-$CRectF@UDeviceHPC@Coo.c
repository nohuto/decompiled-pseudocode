/*
 * XREFs of ?IsNodeOccluded@CDrawingContext@@AEAA_NPEBVCVisualTree@@PEBVCVisual@@AEBV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x1800DC290
 * Callers:
 *     ?UpdateCVIRenderTargets@COcclusionContext@@AEAAXPEAVCDrawingContext@@PEBVCVisualTree@@@Z @ 0x18001F774 (-UpdateCVIRenderTargets@COcclusionContext@@AEAAXPEAVCDrawingContext@@PEBVCVisualTree@@@Z.c)
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x18004BE00 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 * Callees:
 *     ?IsOccluded@COcclusionContext@@QEAA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NH@Z @ 0x18001F284 (-IsOccluded@COcclusionContext@@QEAA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     ?GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@@Z @ 0x1800DCDD8 (-GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@@Z.c)
 */

bool __fastcall CDrawingContext::IsNodeOccluded(__int64 a1, const struct CVisualTree *a2, CVisual *a3, __int64 a4)
{
  char v4; // bl
  struct COcclusionInfo *OcclusionInfo; // rax
  __int64 v8; // r8

  v4 = 0;
  if ( *(_BYTE *)(a1 + 5931) )
  {
    if ( *(_QWORD *)(a1 + 5744) )
    {
      OcclusionInfo = CVisual::GetOcclusionInfo(a3, a2);
      if ( OcclusionInfo )
      {
        LOBYTE(v8) = *(_BYTE *)(a1 + 5608) == 0;
        return COcclusionContext::IsOccluded(*(_QWORD *)(a1 + 5744), a4, v8, *((_DWORD *)OcclusionInfo + 3)) != 0;
      }
    }
  }
  return v4;
}
