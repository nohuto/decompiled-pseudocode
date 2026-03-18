/*
 * XREFs of ?EnsureRealization@CImmediateBrushRealizer@@UEAAJPEAULegacyMilBrushContext@@PEBUCContextState@@PEBUPixelFormatInfo@@@Z @ 0x1800AF9C0
 * Callers:
 *     ?DrawPathInternal@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@PEAULegacyMilBrushContext@@PEAVCShape@@PEAVCLegacyMilBrushRealizer@@6W4Enum@MilCompositingMode@@@Z @ 0x18002DB00 (-DrawPathInternal@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCConte.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmediateBrushRealizer::EnsureRealization(
        CImmediateBrushRealizer *this,
        struct LegacyMilBrushContext *a2,
        const struct CContextState *a3,
        const struct PixelFormatInfo *a4)
{
  __int64 v5; // rax

  if ( a4 )
  {
    *(_OWORD *)((char *)a2 + 216) = *(_OWORD *)a4;
    *((_QWORD *)a2 + 29) = *((_QWORD *)a4 + 2);
    v5 = *((_QWORD *)this + 12);
    *(_OWORD *)(v5 + 8) = *(_OWORD *)a4;
    *(_QWORD *)(v5 + 24) = *((_QWORD *)a4 + 2);
  }
  return 0LL;
}
