/*
 * XREFs of ?HasVirtualModeScale@CDisplay@@QEBA_NXZ @ 0x180057B50
 * Callers:
 *     ?DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N222@Z @ 0x18004BCA8 (-DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x18004BE00 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CDisplay::HasVirtualModeScale(CDisplay *this)
{
  char v1; // r8
  bool v2; // zf

  v1 = 0;
  if ( ((*((_DWORD *)this + 224) - 1) & 0xFFFFFFFD) != 0 )
  {
    if ( *((_DWORD *)this + 26) - *((_DWORD *)this + 24) != *((_DWORD *)this + 31) - *((_DWORD *)this + 29) )
      return 1;
    v2 = *((_DWORD *)this + 27) - *((_DWORD *)this + 25) == *((_DWORD *)this + 30) - *((_DWORD *)this + 28);
  }
  else
  {
    if ( *((_DWORD *)this + 26) - *((_DWORD *)this + 24) != *((_DWORD *)this + 30) - *((_DWORD *)this + 28) )
      return 1;
    v2 = *((_DWORD *)this + 27) - *((_DWORD *)this + 25) == *((_DWORD *)this + 31) - *((_DWORD *)this + 29);
  }
  if ( !v2 )
    return 1;
  return v1;
}
