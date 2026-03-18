/*
 * XREFs of ?IsOverlayCompatible@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x18000FD80
 * Callers:
 *     ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000FF20 (-Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@.c)
 * Callees:
 *     ?IsOverlayCompatible@CDxHandleBitmapRealization@@UEBA_NXZ @ 0x180010370 (-IsOverlayCompatible@CDxHandleBitmapRealization@@UEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CCompositionSurfaceBitmap::IsOverlayCompatible(CCompositionSurfaceBitmap *this)
{
  __int64 v1; // rax
  char v2; // bl
  CDxHandleBitmapRealization *v4; // rcx
  __int64 (*v5)(void); // rax
  char IsOverlayCompatible; // al

  v1 = *((_QWORD *)this + 52);
  v2 = 0;
  if ( v1 )
  {
    v4 = (CDxHandleBitmapRealization *)(v1 + 112);
    v5 = *(__int64 (**)(void))(*(_QWORD *)(v1 + 112) + 64LL);
    if ( (char *)v5 == (char *)CDxHandleBitmapRealization::IsOverlayCompatible )
      IsOverlayCompatible = CDxHandleBitmapRealization::IsOverlayCompatible(v4);
    else
      IsOverlayCompatible = v5();
    if ( IsOverlayCompatible )
      return *(_DWORD *)(*((_QWORD *)this + 51) + 104LL) > 1u;
  }
  return v2;
}
