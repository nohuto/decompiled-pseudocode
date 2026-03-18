/*
 * XREFs of ?HasSubtreeSurface@CVisual@@QEBA_NXZ @ 0x180138A00
 * Callers:
 *     ?DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCEffectBrush@@AEBUD2D_SIZE_F@@@Z @ 0x180121C8C (-DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCEffectBrush@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?Draw@CEffectBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18013B900 (-Draw@CEffectBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@U.c)
 *     ?PrepareForDrawing@CEffectBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18013C520 (-PrepareForDrawing@CEffectBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?RenderSubgraphs@CEffectBrush@@QEAAJPEAVCDrawingContext@@_KPEAVCVisual@@AEBUCCommonDrawListCacheParameters@@_NPEAVCDrawListCache@@@Z @ 0x18013D4E8 (-RenderSubgraphs@CEffectBrush@@QEAAJPEAVCDrawingContext@@_KPEAVCVisual@@AEBUCCommonDrawListCache.c)
 * Callees:
 *     ?GetTreeEffectInternal@CVisual@@QEBAPEAVCTreeEffect@@XZ @ 0x18010A1B0 (-GetTreeEffectInternal@CVisual@@QEBAPEAVCTreeEffect@@XZ.c)
 */

bool __fastcall CVisual::HasSubtreeSurface(CVisual *this)
{
  __int64 v1; // r10
  struct CTreeEffect *TreeEffectInternal; // rax

  LOBYTE(v1) = 0;
  if ( (*(_DWORD *)(*((_QWORD *)this + 34) + 4LL) & 0x10000) != 0 )
  {
    TreeEffectInternal = CVisual::GetTreeEffectInternal(this);
    if ( *((_QWORD *)TreeEffectInternal + 1) != v1 )
      LOBYTE(v1) = 1;
  }
  return v1;
}
