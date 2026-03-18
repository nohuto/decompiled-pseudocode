/*
 * XREFs of ?GetBounds@CHwndBitmap@@UEAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180012050
 * Callers:
 *     ?GetBounds@CHwndBitmap@@W7EAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18009A900 (-GetBounds@CHwndBitmap@@W7EAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@U.c)
 *     ?GetBounds@CHwndBitmap@@WEA@EAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18009A910 (-GetBounds@CHwndBitmap@@WEA@EAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@.c)
 * Callees:
 *     ?EnsureVisualTree@CHwndBitmap@@AEAAJXZ @ 0x180011EC0 (-EnsureVisualTree@CHwndBitmap@@AEAAJXZ.c)
 *     ?GetBoundsInternal@CHwndBitmap@@AEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180011FB0 (-GetBoundsInternal@CHwndBitmap@@AEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     ?IsValidVisual@CHwndBitmap@@AEBA_NXZ @ 0x1800120B4 (-IsValidVisual@CHwndBitmap@@AEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CHwndBitmap::GetBounds(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  CVisual **v4; // rdi
  __int64 v6; // rdx
  bool v7; // r8
  int v8; // eax
  unsigned int v9; // ebx
  int BoundsInternal; // eax

  v4 = (CVisual **)(a1 - 8);
  if ( CHwndBitmap::IsValidVisual((CHwndBitmap *)(a1 - 8))
    && (v8 = CHwndBitmap::EnsureVisualTree(v4, v6, v7), v9 = v8, v8 < 0) )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x82u);
  }
  else
  {
    BoundsInternal = CHwndBitmap::GetBoundsInternal((__int64)v4, a4);
    v9 = BoundsInternal;
    if ( BoundsInternal < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, BoundsInternal, 0x85u);
  }
  return v9;
}
