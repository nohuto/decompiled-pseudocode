/*
 * XREFs of ?IsOverlayRequired@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x18000C2E0
 * Callers:
 *     ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000C480 (-Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@.c)
 *     ?Draw@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180121CF0 (-Draw@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@.c)
 * Callees:
 *     ?IsOverlayRequired@CDxHandleBitmapRealization@@UEBA_NXZ @ 0x18000CEB0 (-IsOverlayRequired@CDxHandleBitmapRealization@@UEBA_NXZ.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

char __fastcall CCompositionSurfaceBitmap::IsOverlayRequired(CCompositionSurfaceBitmap *this)
{
  __int64 v1; // rax
  char v2; // bl
  CDxHandleBitmapRealization *v4; // rsi
  bool (__fastcall *v5)(CDxHandleBitmapRealization *__hidden); // rbp
  bool IsOverlayRequired; // al

  v1 = *((_QWORD *)this + 51);
  v2 = 0;
  if ( v1 )
  {
    v4 = (CDxHandleBitmapRealization *)(v1 + 112);
    v5 = *(bool (__fastcall **)(CDxHandleBitmapRealization *__hidden))(*(_QWORD *)(v1 + 112) + 72LL);
    if ( v5 == CDxHandleBitmapRealization::IsOverlayRequired )
      IsOverlayRequired = CDxHandleBitmapRealization::IsOverlayRequired(v4);
    else
      IsOverlayRequired = v5(v4);
    if ( IsOverlayRequired )
      return *(_DWORD *)(*((_QWORD *)this + 50) + 104LL) > 1u;
  }
  return v2;
}
