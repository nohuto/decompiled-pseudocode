/*
 * XREFs of ?IsOverlayAssigned@COverlayContext@@QEAA_NPEBVCVisual@@PEAVIImageSource@@PEA_N@Z @ 0x1800073A4
 * Callers:
 *     ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180008100 (-Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@.c)
 *     ?IsOverlayAssigned@CDrawingContext@@QEAA_NPEBVCVisual@@PEAVIImageSource@@PEA_N@Z @ 0x1800102B8 (-IsOverlayAssigned@CDrawingContext@@QEAA_NPEBVCVisual@@PEAVIImageSource@@PEA_N@Z.c)
 * Callees:
 *     ?RequiresFrontPlane@COverlayContext@@CA_NPEAUOverlayPlaneInfo@1@@Z @ 0x1800F7634 (-RequiresFrontPlane@COverlayContext@@CA_NPEAUOverlayPlaneInfo@1@@Z.c)
 */

char __fastcall COverlayContext::IsOverlayAssigned(
        COverlayContext *this,
        const struct CVisual *a2,
        struct IImageSource *a3,
        bool *a4)
{
  unsigned int v4; // edi
  char v5; // r11
  unsigned int v6; // r10d
  __int64 v8; // rbx
  __int64 v9; // rcx
  bool v10; // al
  bool *v11; // r9

  v4 = *((_DWORD *)this + 56);
  v5 = 0;
  v6 = 0;
  if ( v4 )
  {
    v8 = *((_QWORD *)this + 25);
    while ( 1 )
    {
      v9 = 240LL * v6;
      if ( *(const struct CVisual **)(v9 + v8) == a2 && *(struct IImageSource **)(v9 + v8 + 8) == a3 )
        break;
      if ( ++v6 >= v4 )
        return v5;
    }
    if ( v6 != -1 )
    {
      v5 = 1;
      if ( a4 )
      {
        v10 = COverlayContext::RequiresFrontPlane((struct COverlayContext::OverlayPlaneInfo *)(v8 + 240LL * v6));
        *v11 = v10;
      }
    }
  }
  return v5;
}
