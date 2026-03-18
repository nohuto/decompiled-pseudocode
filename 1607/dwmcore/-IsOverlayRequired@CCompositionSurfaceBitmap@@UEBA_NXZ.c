/*
 * XREFs of ?IsOverlayRequired@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x18010C060
 * Callers:
 *     ?Draw@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18013A0F0 (-Draw@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CCompositionSurfaceBitmap::IsOverlayRequired(CCompositionSurfaceBitmap *this)
{
  char v2; // bl
  __int64 v3; // rcx

  v2 = 0;
  v3 = *((_QWORD *)this + 52);
  if ( v3 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(v3 + 112) + 72LL))(v3 + 112) )
    return *(_DWORD *)(*((_QWORD *)this + 51) + 104LL) > 1u;
  return v2;
}
