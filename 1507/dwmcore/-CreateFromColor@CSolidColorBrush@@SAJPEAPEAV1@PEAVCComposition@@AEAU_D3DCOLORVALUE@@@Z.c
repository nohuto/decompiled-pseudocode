/*
 * XREFs of ?CreateFromColor@CSolidColorBrush@@SAJPEAPEAV1@PEAVCComposition@@AEAU_D3DCOLORVALUE@@@Z @ 0x1800F19A4
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAU_MARGINS@@H_N77PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180079EF0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?DrawOverlayArea@CDrawingContext@@QEAAJPEAVIImageSource@@PEAVCShape@@_N2@Z @ 0x1800F23A8 (-DrawOverlayArea@CDrawingContext@@QEAAJPEAVIImageSource@@PEAVCShape@@_N2@Z.c)
 *     ?EndBoundingFrame@CRenderData@@AEAAJPEAHPEAPEAVCRenderDataDrawFrame@@PEAPEAUIDrawingContext@@PEAU3@@Z @ 0x1801032E4 (-EndBoundingFrame@CRenderData@@AEAAJPEAHPEAPEAVCRenderDataDrawFrame@@PEAPEAUIDrawingContext@@PEA.c)
 *     ?RenderBlackImage@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z @ 0x180106284 (-RenderBlackImage@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180035460 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0CSolidColorBrush@@IEAA@PEAVCComposition@@@Z @ 0x180083C88 (--0CSolidColorBrush@@IEAA@PEAVCComposition@@@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CSolidColorBrush::CreateFromColor(
        struct CSolidColorBrush **a1,
        struct CComposition *a2,
        struct _D3DCOLORVALUE *a3)
{
  unsigned int v6; // esi
  CSolidColorBrush *v7; // rax
  CSolidColorBrush *v8; // rbx
  __int128 v9; // xmm0

  v6 = 0;
  v7 = (CSolidColorBrush *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                      + 16LL))(
                             WPF::g_pProcessHeap,
                             184LL);
  if ( v7 )
    v8 = CSolidColorBrush::CSolidColorBrush(v7, a2);
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
