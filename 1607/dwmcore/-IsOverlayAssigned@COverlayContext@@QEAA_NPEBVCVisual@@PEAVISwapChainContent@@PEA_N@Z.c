/*
 * XREFs of ?IsOverlayAssigned@COverlayContext@@QEAA_NPEBVCVisual@@PEAVISwapChainContent@@PEA_N@Z @ 0x1801100D4
 * Callers:
 *     ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000FF20 (-Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@.c)
 *     ?IsOverlayAssigned@CDrawingContext@@QEAA_NPEBVCVisual@@PEAVISwapChainContent@@PEA_N@Z @ 0x1801072CC (-IsOverlayAssigned@CDrawingContext@@QEAA_NPEBVCVisual@@PEAVISwapChainContent@@PEA_N@Z.c)
 * Callees:
 *     ?RequiresFrontPlane@COverlayContext@@CA_NPEAUOverlayPlaneInfo@1@@Z @ 0x180129B2C (-RequiresFrontPlane@COverlayContext@@CA_NPEAUOverlayPlaneInfo@1@@Z.c)
 */

char __fastcall COverlayContext::IsOverlayAssigned(
        COverlayContext *this,
        const struct CVisual *a2,
        struct ISwapChainContent *a3,
        bool *a4)
{
  unsigned int v4; // edi
  char v5; // r11
  unsigned int v6; // r10d
  __int64 v7; // rbx
  __int64 v8; // rcx
  bool v9; // al
  bool *v10; // r9

  v4 = *((_DWORD *)this + 66);
  v5 = 0;
  v6 = 0;
  if ( v4 )
  {
    v7 = *((_QWORD *)this + 30);
    while ( 1 )
    {
      v8 = 232LL * v6;
      if ( *(const struct CVisual **)(v8 + v7 + 8) == a2 && *(struct ISwapChainContent **)(v8 + v7 + 16) == a3 )
        break;
      if ( ++v6 >= v4 )
        return v5;
    }
    if ( v6 != -1 )
    {
      v5 = 1;
      if ( a4 )
      {
        v9 = COverlayContext::RequiresFrontPlane((struct COverlayContext::OverlayPlaneInfo *)(v7 + 232LL * v6));
        *v10 = v9;
      }
    }
  }
  return v5;
}
