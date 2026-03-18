/*
 * XREFs of ?IsIn3DMode@CDrawingContext@@UEBA_NXZ @ 0x180037090
 * Callers:
 *     ?DrawCommandListBitmapRepresentation@CDrawingContext@@QEAAJPEAVCCommandListBitmapRepresentation@@PEBVCMILMatrix@@@Z @ 0x18000E870 (-DrawCommandListBitmapRepresentation@CDrawingContext@@QEAAJPEAVCCommandListBitmapRepresentation@.c)
 *     ?Draw@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000F450 (-Draw@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UM.c)
 *     ?DrawAtlasedRects@CDrawingContext@@UEAAJPEAVCAtlasedRects@@PEAVCImageSource@@@Z @ 0x18003E8D0 (-DrawAtlasedRects@CDrawingContext@@UEAAJPEAVCAtlasedRects@@PEAVCImageSource@@@Z.c)
 *     ?FillShapeWithD2DBitmap@CDrawingContext@@QEAAJPEAUID2D1Bitmap1@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@W4Enum@MilCompositingMode@@@Z @ 0x18003F4A4 (-FillShapeWithD2DBitmap@CDrawingContext@@QEAAJPEAUID2D1Bitmap1@@PEBV-$CMatrix@UBaseSampling@Coor.c)
 *     ?FillShapeForBounds@CDrawingContext@@AEAAJPEAVCShape@@_N@Z @ 0x180042B20 (-FillShapeForBounds@CDrawingContext@@AEAAJPEAVCShape@@_N@Z.c)
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x180042FC0 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?DrawInk@CDrawingContext@@UEAAJPEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkStyle@@@Z @ 0x18010CBC0 (-DrawInk@CDrawingContext@@UEAAJPEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkStyle@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDrawingContext::IsIn3DMode(CDrawingContext *this)
{
  bool result; // al
  int v2; // edx

  result = 0;
  if ( *((_DWORD *)this + 108) )
  {
    v2 = *((_DWORD *)this + 108);
    if ( v2 )
      return *(_BYTE *)((unsigned int)(v2 - 1) + *((_QWORD *)this + 56));
  }
  return result;
}
