/*
 * XREFs of ?DrawPath@CHwDisplayRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAULegacyMilBrushContext@@PEAVCShape@@PEAVCLegacyMilBrushRealizer@@5W4Enum@MilCompositingMode@@@Z @ 0x1800801D0
 * Callers:
 *     ?DrawPath@CHwDisplayRenderTarget@@WLA@EAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAULegacyMilBrushContext@@PEAVCShape@@PEAVCLegacyMilBrushRealizer@@5W4Enum@MilCompositingMode@@@Z @ 0x1800BD870 (-DrawPath@CHwDisplayRenderTarget@@WLA@EAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextSta.c)
 * Callees:
 *     ?DrawPathInternal@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@PEAULegacyMilBrushContext@@PEAVCShape@@PEAVCLegacyMilBrushRealizer@@6W4Enum@MilCompositingMode@@@Z @ 0x18008C6E0 (-DrawPathInternal@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCConte.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::DrawPath(
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
      if ( !dword_1801A4178 )
        return v9;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x1AEu);
  }
  return v9;
}
