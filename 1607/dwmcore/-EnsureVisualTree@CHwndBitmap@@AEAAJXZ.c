/*
 * XREFs of ?EnsureVisualTree@CHwndBitmap@@AEAAJXZ @ 0x18000A400
 * Callers:
 *     ?Draw@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000A440 (-Draw@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UM.c)
 *     ?GetBounds@CHwndBitmap@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000A590 (-GetBounds@CHwndBitmap@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UM.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x18004F7EC (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 */

__int64 __fastcall CHwndBitmap::EnsureVisualTree(CVisual **this, __int64 a2, bool a3)
{
  unsigned int v3; // ebx
  int VisualTree; // eax

  v3 = 0;
  if ( !this[67] )
  {
    VisualTree = CVisual::GetVisualTree(this[66], this + 67, a3);
    v3 = VisualTree;
    if ( VisualTree < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, VisualTree, 0x17Eu);
  }
  return v3;
}
