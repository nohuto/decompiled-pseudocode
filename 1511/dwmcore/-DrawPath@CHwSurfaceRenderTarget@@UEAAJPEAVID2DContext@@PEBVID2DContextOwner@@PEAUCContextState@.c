/*
 * XREFs of ?DrawPath@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAULegacyMilBrushContext@@PEAVCShape@@PEAVCLegacyMilBrushRealizer@@5W4Enum@MilCompositingMode@@@Z @ 0x18008D4A4
 * Callers:
 *     ?DrawPath@CHwTextureRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAULegacyMilBrushContext@@PEAVCShape@@PEAVCLegacyMilBrushRealizer@@5W4Enum@MilCompositingMode@@@Z @ 0x18002C650 (-DrawPath@CHwTextureRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@.c)
 * Callees:
 *     ?DrawPathInternal@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@PEAULegacyMilBrushContext@@PEAVCShape@@PEAVCLegacyMilBrushRealizer@@6W4Enum@MilCompositingMode@@@Z @ 0x18008C6E0 (-DrawPathInternal@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCConte.c)
 */

__int64 __fastcall CHwSurfaceRenderTarget::DrawPath(
        CHwDisplayRenderTarget *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        struct LegacyMilBrushContext *a5,
        CRectangleShape *a6,
        __int64 a7,
        CImmediateBrushRealizer *a8,
        int a9)
{
  int v10; // [rsp+38h] [rbp-20h]

  return CHwSurfaceRenderTarget::DrawPathInternal(a1, a2, a3, a4, a4 + 204, a5, a6, v10, a8, a9);
}
