/*
 * XREFs of ?IssueSurfaceNotifications@CWARPDrawListEntry@@QEAAXPEAVCDrawingContext@@@Z @ 0x180118220
 * Callers:
 *     ?AppendWARPDrawListEntries@CWARPDrawListCache@@QEAAJPEAVCDrawingContext@@AEBUD2D_MATRIX_4X4_F@@W4D2D1_ANTIALIAS_MODE@@W4Enum@BlendMode@@W4D2D1_INTERPOLATION_MODE@@M@Z @ 0x1801178FC (-AppendWARPDrawListEntries@CWARPDrawListCache@@QEAAJPEAVCDrawingContext@@AEBUD2D_MATRIX_4X4_F@@W.c)
 * Callees:
 *     ?RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@@Z @ 0x18003C568 (-RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV-$.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

void __fastcall CWARPDrawListEntry::IssueSurfaceNotifications(CWARPDrawListEntry *this, struct CDrawingContext *a2)
{
  CCachedVisualImage *v3; // rdx
  __int128 v4; // [rsp+30h] [rbp-28h] BYREF

  if ( *((_BYTE *)this + 353) )
  {
    v3 = (CCachedVisualImage *)*((_QWORD *)this + 14);
    v4 = *((_OWORD *)this + 1);
    if ( v3 )
      v3 = (CCachedVisualImage *)((char *)v3 + 40);
    CDrawingContext::RecordBitmapContentInfo(a2, v3, v3, (struct MilRectF *)&v4, 0LL);
  }
}
