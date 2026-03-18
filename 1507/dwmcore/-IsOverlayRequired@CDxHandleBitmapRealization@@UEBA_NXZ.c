/*
 * XREFs of ?IsOverlayRequired@CDxHandleBitmapRealization@@UEBA_NXZ @ 0x180007A30
 * Callers:
 *     ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180008100 (-Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CDxHandleBitmapRealization::IsOverlayRequired(CDxHandleBitmapRealization *this)
{
  return *((_DWORD *)this + 35) != 0;
}
