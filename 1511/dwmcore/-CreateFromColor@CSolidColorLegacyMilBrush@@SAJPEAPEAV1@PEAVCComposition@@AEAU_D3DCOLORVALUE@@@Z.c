/*
 * XREFs of ?CreateFromColor@CSolidColorLegacyMilBrush@@SAJPEAPEAV1@PEAVCComposition@@AEAU_D3DCOLORVALUE@@@Z @ 0x18010B8B4
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAU_MARGINS@@H_N77PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x18005F160 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?DrawOverlayArea@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEAVCShape@@_N2@Z @ 0x18010CEB8 (-DrawOverlayArea@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEAVCShape@@_N2@Z.c)
 *     ?EndBoundingFrame@CRenderData@@AEAAJPEAHPEAPEAVCRenderDataDrawFrame@@PEAPEAUIDrawingContext@@PEAU3@@Z @ 0x18011FD18 (-EndBoundingFrame@CRenderData@@AEAAJPEAHPEAPEAVCRenderDataDrawFrame@@PEAPEAUIDrawingContext@@PEA.c)
 *     ?RenderBlackImage@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z @ 0x180123E1C (-RenderBlackImage@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x1800253A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ??0CSolidColorLegacyMilBrush@@IEAA@PEAVCComposition@@@Z @ 0x1800589EC (--0CSolidColorLegacyMilBrush@@IEAA@PEAVCComposition@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CSolidColorLegacyMilBrush::CreateFromColor(
        struct CSolidColorLegacyMilBrush **a1,
        struct CComposition *a2,
        struct _D3DCOLORVALUE *a3)
{
  unsigned int v6; // esi
  CSolidColorLegacyMilBrush *v7; // rax
  CSolidColorLegacyMilBrush *v8; // rbx
  __int128 v9; // xmm0

  v6 = 0;
  v7 = (CSolidColorLegacyMilBrush *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                               + 16LL))(
                                      WPF::g_pProcessHeap,
                                      184LL);
  if ( v7 )
    v8 = CSolidColorLegacyMilBrush::CSolidColorLegacyMilBrush(v7, a2);
  else
    v8 = 0LL;
  if ( v8 )
  {
    v9 = *(_OWORD *)&a3->r;
    *((_QWORD *)v8 + 7) = 0x3FF0000000000000LL;
    *(_OWORD *)((char *)v8 + 88) = v9;
    CBitmapOfDeviceBitmaps::AddRef(v8);
    *a1 = v8;
  }
  else
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x42u);
  }
  return v6;
}
