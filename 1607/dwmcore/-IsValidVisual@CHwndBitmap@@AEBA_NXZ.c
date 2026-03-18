/*
 * XREFs of ?IsValidVisual@CHwndBitmap@@AEBA_NXZ @ 0x18000A5F4
 * Callers:
 *     ?Draw@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000A440 (-Draw@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UM.c)
 *     ?GetBoundsInternal@CHwndBitmap@@AEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000A4F4 (-GetBoundsInternal@CHwndBitmap@@AEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     ?GetBounds@CHwndBitmap@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000A590 (-GetBounds@CHwndBitmap@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UM.c)
 *     ?GetBitmapSource@CHwndBitmap@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x180142D90 (-GetBitmapSource@CHwndBitmap@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 *     ?GetD2DBitmapRealizationForContextOwner@CHwndBitmap@@UEAAJPEAVID2DContextOwner@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180142E40 (-GetD2DBitmapRealizationForContextOwner@CHwndBitmap@@UEAAJPEAVID2DContextOwner@@PEAPEAUID2D1Bitm.c)
 * Callees:
 *     ?IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18004FDA0 (-IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CHwndBitmap::IsValidVisual(CHwndBitmap *this)
{
  char v2; // bl
  __int64 v3; // rcx
  __int64 (__fastcall *v4)(__int64, __int64); // rax
  char v5; // al

  v2 = 0;
  v3 = *((_QWORD *)this + 66);
  if ( v3 )
  {
    v4 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 48LL);
    if ( v4 == CVisual::IsOfType )
      v5 = CVisual::IsOfType(v3, 34LL);
    else
      v5 = v4(v3, 34LL);
    if ( !v5 || *(_BYTE *)(*((_QWORD *)this + 66) + 1035LL) )
      return 1;
  }
  return v2;
}
