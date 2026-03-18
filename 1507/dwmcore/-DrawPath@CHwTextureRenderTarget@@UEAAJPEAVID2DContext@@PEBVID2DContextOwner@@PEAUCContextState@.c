/*
 * XREFs of ?DrawPath@CHwTextureRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAUBrushContext@@PEAVCShape@@PEAVCBrushRealizer@@5W4Enum@MilCompositingMode@@@Z @ 0x180082B10
 * Callers:
 *     ?DrawPath@CHwTextureRenderTarget@@WLA@EAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAUBrushContext@@PEAVCShape@@PEAVCBrushRealizer@@5W4Enum@MilCompositingMode@@@Z @ 0x18009B2B0 (-DrawPath@CHwTextureRenderTarget@@WLA@EAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextSta.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?DrawPath@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAUBrushContext@@PEAVCShape@@PEAVCBrushRealizer@@5W4Enum@MilCompositingMode@@@Z @ 0x180082384 (-DrawPath@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@.c)
 */

__int64 __fastcall CHwTextureRenderTarget::DrawPath(
        CHwDisplayRenderTarget *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        struct BrushContext *a5,
        CRectangleShape *a6,
        __int64 a7,
        CImmediateBrushRealizer *a8,
        int a9)
{
  int v13; // eax
  unsigned int v14; // ebx

  do
  {
    v13 = CHwSurfaceRenderTarget::DrawPath(a1, a2, a3, a4, a5, a6, a7, a8, a9);
    v14 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xB6u);
  }
  while ( dword_180196514 );
  return v14;
}
