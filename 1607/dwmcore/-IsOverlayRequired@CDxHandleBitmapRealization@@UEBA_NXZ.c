/*
 * XREFs of ?IsOverlayRequired@CDxHandleBitmapRealization@@UEBA_NXZ @ 0x180010350
 * Callers:
 *     ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000FF20 (-Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDxHandleBitmapRealization::IsOverlayRequired(CDxHandleBitmapRealization *this)
{
  return *((unsigned __int8 *)this + 132) >> 7;
}
