/*
 * XREFs of ?EnsureVisualTree@CHwndBitmap@@AEAAJXZ @ 0x18000F410
 * Callers:
 *     ?Draw@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000F450 (-Draw@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UM.c)
 *     ?GetBounds@CHwndBitmap@@UEAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000F5A0 (-GetBounds@CHwndBitmap@@UEAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UM.c)
 * Callees:
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x180048704 (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CHwndBitmap::EnsureVisualTree(CVisual **this, __int64 a2, bool a3)
{
  unsigned int v3; // ebx
  int VisualTree; // eax

  v3 = 0;
  if ( !this[57] )
  {
    VisualTree = CVisual::GetVisualTree(this[56], this + 57, a3);
    v3 = VisualTree;
    if ( VisualTree < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, VisualTree, 0x17Eu);
  }
  return v3;
}
