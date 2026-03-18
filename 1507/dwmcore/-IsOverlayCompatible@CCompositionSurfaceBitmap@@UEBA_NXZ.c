/*
 * XREFs of ?IsOverlayCompatible@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x180007FF0
 * Callers:
 *     ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180008100 (-Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@.c)
 * Callees:
 *     ?IsOverlayCompatible@CDxHandleBitmapRealization@@UEBA_NXZ @ 0x180007A50 (-IsOverlayCompatible@CDxHandleBitmapRealization@@UEBA_NXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

char __fastcall CCompositionSurfaceBitmap::IsOverlayCompatible(CCompositionSurfaceBitmap *this)
{
  __int64 v1; // rax
  char v2; // bl
  CDxHandleBitmapRealization *v4; // rsi
  char (__fastcall *v5)(CDxHandleBitmapRealization *); // rbp
  char IsOverlayCompatible; // al

  v1 = *((_QWORD *)this + 50);
  v2 = 0;
  if ( v1 )
  {
    v4 = (CDxHandleBitmapRealization *)(v1 + 112);
    v5 = *(char (__fastcall **)(CDxHandleBitmapRealization *))(*(_QWORD *)(v1 + 112) + 56LL);
    if ( v5 == CDxHandleBitmapRealization::IsOverlayCompatible )
      IsOverlayCompatible = CDxHandleBitmapRealization::IsOverlayCompatible(v4);
    else
      IsOverlayCompatible = v5(v4);
    if ( IsOverlayCompatible )
      return *(_DWORD *)(*((_QWORD *)this + 49) + 112LL) > 1u;
  }
  return v2;
}
