/*
 * XREFs of ?IsInLayer@CDrawingContext@@QEAA_NXZ @ 0x180010268
 * Callers:
 *     ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180008100 (-Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@.c)
 *     ?IsOverlayAssigned@CDrawingContext@@QEAA_NPEBVCVisual@@PEAVIImageSource@@PEA_N@Z @ 0x1800102B8 (-IsOverlayAssigned@CDrawingContext@@QEAA_NPEBVCVisual@@PEAVIImageSource@@PEA_N@Z.c)
 *     ?RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z @ 0x180027DB0 (-RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z.c)
 *     ?RecordMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMilPoint2F@@PEAUHRGN__@@PEAPEAUHWND__@@PEA_N@Z @ 0x1800F448C (-RecordMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEBV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHWND__@@@Z @ 0x1800F4768 (-RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 * Callees:
 *     <none>
 */

char __fastcall CDrawingContext::IsInLayer(CDrawingContext *this)
{
  unsigned int v1; // r9d
  char v2; // dl
  unsigned int v3; // r8d
  _DWORD *v4; // rax

  v1 = *((_DWORD *)this + 106);
  v2 = 0;
  v3 = 0;
  if ( v1 )
  {
    while ( 1 )
    {
      v4 = 0LL;
      if ( v3 < v1 )
        v4 = (_DWORD *)(*((_QWORD *)this + 55) + 16LL * v3);
      if ( ((*v4 - 5) & 0xFFFFFFFD) == 0 )
        break;
      if ( ++v3 >= v1 )
        return v2;
    }
    return 1;
  }
  return v2;
}
