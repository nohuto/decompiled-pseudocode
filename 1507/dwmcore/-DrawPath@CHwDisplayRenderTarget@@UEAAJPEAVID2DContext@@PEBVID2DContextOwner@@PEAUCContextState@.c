/*
 * XREFs of ?DrawPath@CHwDisplayRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAUBrushContext@@PEAVCShape@@PEAVCBrushRealizer@@5W4Enum@MilCompositingMode@@@Z @ 0x1800448D0
 * Callers:
 *     ?DrawPath@CHwDisplayRenderTarget@@WLA@EAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAUBrushContext@@PEAVCShape@@PEAVCBrushRealizer@@5W4Enum@MilCompositingMode@@@Z @ 0x18009AC00 (-DrawPath@CHwDisplayRenderTarget@@WLA@EAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextSta.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?DrawPathInternal@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@PEAUBrushContext@@PEAVCShape@@PEAVCBrushRealizer@@6W4Enum@MilCompositingMode@@@Z @ 0x180081870 (-DrawPathInternal@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCConte.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::DrawPath(
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
  unsigned int v9; // ebx
  __int64 v11; // rbp
  int v12; // eax
  int v14; // [rsp+38h] [rbp-50h]

  v9 = 0;
  if ( *((_BYTE *)a1 + 184) )
  {
    v11 = a4 + 204;
    while ( 1 )
    {
      v12 = CHwSurfaceRenderTarget::DrawPathInternal(a1, v11, a5, a6, v14, a8, a9);
      v9 = v12;
      if ( v12 < 0 )
        break;
      if ( !dword_180196514 )
        return v9;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x1ADu);
  }
  return v9;
}
