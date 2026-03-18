/*
 * XREFs of ?DrawPath@CHwTextureRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAULegacyMilBrushContext@@PEAVCShape@@PEAVCLegacyMilBrushRealizer@@5W4Enum@MilCompositingMode@@@Z @ 0x18002D450
 * Callers:
 *     ?DrawPath@CHwTextureRenderTarget@@WLA@EAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAULegacyMilBrushContext@@PEAVCShape@@PEAVCLegacyMilBrushRealizer@@5W4Enum@MilCompositingMode@@@Z @ 0x1800C1760 (-DrawPath@CHwTextureRenderTarget@@WLA@EAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextSta.c)
 * Callees:
 *     ?DrawPathInternal@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@PEAULegacyMilBrushContext@@PEAVCShape@@PEAVCLegacyMilBrushRealizer@@6W4Enum@MilCompositingMode@@@Z @ 0x18002DB00 (-DrawPathInternal@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCConte.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CHwTextureRenderTarget::DrawPath(
        CHwSurfaceRenderTarget *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        struct LegacyMilBrushContext *a5,
        __int64 a6,
        __int64 a7,
        CImmediateBrushRealizer *a8,
        int a9)
{
  int v9; // eax
  unsigned int v10; // ebx
  int v12; // [rsp+38h] [rbp-20h]

  v9 = CHwSurfaceRenderTarget::DrawPathInternal(a1, a4 + 212, a5, a6, v12, a8, a9);
  v10 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xA6u);
  return v10;
}
