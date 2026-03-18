/*
 * XREFs of ?DrawPath@CHwDisplayRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAULegacyMilBrushContext@@PEAVCShape@@PEAVCLegacyMilBrushRealizer@@5W4Enum@MilCompositingMode@@@Z @ 0x18008EB70
 * Callers:
 *     ?DrawPath@CHwDisplayRenderTarget@@WLA@EAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAULegacyMilBrushContext@@PEAVCShape@@PEAVCLegacyMilBrushRealizer@@5W4Enum@MilCompositingMode@@@Z @ 0x1800C0F80 (-DrawPath@CHwDisplayRenderTarget@@WLA@EAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextSta.c)
 * Callees:
 *     ?DrawPathInternal@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@PEAULegacyMilBrushContext@@PEAVCShape@@PEAVCLegacyMilBrushRealizer@@6W4Enum@MilCompositingMode@@@Z @ 0x18002DB00 (-DrawPathInternal@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCConte.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::DrawPath(
        CHwSurfaceRenderTarget *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        struct LegacyMilBrushContext *a5,
        CRectanglesShape *a6,
        __int64 a7,
        CImmediateBrushRealizer *a8,
        int a9)
{
  unsigned int v9; // ebx
  int v10; // eax
  int v12; // [rsp+38h] [rbp-20h]

  v9 = 0;
  if ( *((_BYTE *)a1 + 192) )
  {
    v10 = CHwSurfaceRenderTarget::DrawPathInternal(a1, a2, a3, a4, a4 + 212, a5, a6, v12, a8, a9);
    v9 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x184u);
  }
  return v9;
}
