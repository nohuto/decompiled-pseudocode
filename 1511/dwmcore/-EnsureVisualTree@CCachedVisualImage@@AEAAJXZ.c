/*
 * XREFs of ?EnsureVisualTree@CCachedVisualImage@@AEAAJXZ @ 0x18005B374
 * Callers:
 *     ?GetBounds@CCachedVisualImage@@UEAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18005B3C0 (-GetBounds@CCachedVisualImage@@UEAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRe.c)
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@_N@Z @ 0x18005BC9C (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@_N@Z.c)
 * Callees:
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x180048704 (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CCachedVisualImage::EnsureVisualTree(CCachedVisualImage *this)
{
  unsigned int v1; // ebx
  struct CVisualTree **v2; // rdx
  CVisual *v4; // rcx
  int VisualTree; // eax

  v1 = 0;
  v2 = (struct CVisualTree **)((char *)this + 136);
  if ( !*((_QWORD *)this + 17) )
  {
    v4 = (CVisual *)*((_QWORD *)this + 14);
    if ( v4 )
    {
      VisualTree = CVisual::GetVisualTree(v4, v2);
      v1 = VisualTree;
      if ( VisualTree < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, VisualTree, 0x18Du);
    }
    else
    {
      v1 = -2003292412;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292412, 0x191u);
    }
  }
  return v1;
}
