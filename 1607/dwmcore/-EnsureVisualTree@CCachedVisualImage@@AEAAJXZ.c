/*
 * XREFs of ?EnsureVisualTree@CCachedVisualImage@@AEAAJXZ @ 0x1800337F4
 * Callers:
 *     ?GetBounds@CCachedVisualImage@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180033840 (-GetBounds@CCachedVisualImage@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRe.c)
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_N@Z @ 0x180144498 (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x18004F7EC (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 */

__int64 __fastcall CCachedVisualImage::EnsureVisualTree(CCachedVisualImage *this, __int64 a2, bool a3)
{
  unsigned int v3; // ebx
  struct CVisualTree **v4; // rdx
  CVisual *v6; // rcx
  int VisualTree; // eax

  v3 = 0;
  v4 = (struct CVisualTree **)((char *)this + 224);
  if ( !*((_QWORD *)this + 28) )
  {
    v6 = (CVisual *)*((_QWORD *)this + 24);
    if ( v6 )
    {
      VisualTree = CVisual::GetVisualTree(v6, v4, a3);
      v3 = VisualTree;
      if ( VisualTree < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, VisualTree, 0x18Fu);
    }
    else
    {
      v3 = -2003292412;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292412, 0x193u);
    }
  }
  return v3;
}
