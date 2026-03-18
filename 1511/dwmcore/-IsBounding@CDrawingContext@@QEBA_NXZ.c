/*
 * XREFs of ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x180037068
 * Callers:
 *     ?TileImage@CDrawingContext@@UEAAJPEAVCResource@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUMilPoint2F@@M@Z @ 0x18000EB90 (-TileImage@CDrawingContext@@UEAAJPEAVCResource@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?GetBrushRealizer@CDrawingContext@@QEAAJPEAVCResource@@PEBULegacyMilBrushContext@@PEAPEAVCLegacyMilBrushRealizer@@@Z @ 0x180037CC0 (-GetBrushRealizer@CDrawingContext@@QEAAJPEAVCResource@@PEBULegacyMilBrushContext@@PEAPEAVCLegacy.c)
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x18003E644 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?DrawBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@PEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@W4Enum@MilCompositingMode@@PEA_N@Z @ 0x18003FC14 (-DrawBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@PEBUMilRectF@@1HU-$TMILFlagsEnum@W4Fl.c)
 *     ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@W4Enum@MilBitmapWrapMode@@@Z @ 0x18003FD48 (-FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBV-$CMatrix@UBaseSampling@Coordin.c)
 *     ?DrawImage@CDrawingContext@@UEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0DB@@@@Z @ 0x180042970 (-DrawImage@CDrawingContext@@UEAAJPEAVCResource@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?DrawShape@CDrawingContext@@QEAAJPEAVCShape@@PEAVCLegacyMilBrush@@@Z @ 0x180042E18 (-DrawShape@CDrawingContext@@QEAAJPEAVCShape@@PEAVCLegacyMilBrush@@@Z.c)
 *     ?DrawGeometry@CDrawingContext@@UEAAJPEAVCLegacyMilBrush@@PEAVCGeometry@@@Z @ 0x180042F10 (-DrawGeometry@CDrawingContext@@UEAAJPEAVCLegacyMilBrush@@PEAVCGeometry@@@Z.c)
 *     ?DrawRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCLegacyMilBrush@@PEAV?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0DB@@@@Z @ 0x1800433A0 (-DrawRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     ?Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x180044FA0 (-Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCEffectBrush@@AEBUD2D_RECT_F@@@Z @ 0x18010B978 (-DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCEffectBrush@@AEBUD2D_RECT_F@@@Z.c)
 *     ?DrawCommonRenderingEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCSpriteVisualContent@@AEBUD2D_SIZE_F@@@Z @ 0x18010C250 (-DrawCommonRenderingEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCSpriteVisualContent@@AEBUD2D_.c)
 *     ?DrawMesh2D@CDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z @ 0x18010CCE0 (-DrawMesh2D@CDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z.c)
 *     ?FlushD2D@CDrawingContext@@QEAAJXZ @ 0x18010D9C4 (-FlushD2D@CDrawingContext@@QEAAJXZ.c)
 *     ?Draw@CEffectBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180122930 (-Draw@CEffectBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@U.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDrawingContext::IsBounding(CDrawingContext *this)
{
  __int64 result; // rax

  result = 0LL;
  if ( *((_BYTE *)this + 2616) || *((_DWORD *)this + 1447) )
    return 1LL;
  return result;
}
