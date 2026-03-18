/*
 * XREFs of ?HasVirtualModeScale@CDisplay@@QEBA_NXZ @ 0x1800346B8
 * Callers:
 *     ?DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N222@Z @ 0x180074BBC (-DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180074CC0 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CDisplay::HasVirtualModeScale(CDisplay *this)
{
  char v1; // r8
  bool v2; // zf

  v1 = 0;
  if ( ((*((_DWORD *)this + 73) - 1) & 0xFFFFFFFD) != 0 )
  {
    if ( *((_DWORD *)this + 24) - *((_DWORD *)this + 22) != *((_DWORD *)this + 29) - *((_DWORD *)this + 27) )
      return 1;
    v2 = *((_DWORD *)this + 25) - *((_DWORD *)this + 23) == *((_DWORD *)this + 28) - *((_DWORD *)this + 26);
  }
  else
  {
    if ( *((_DWORD *)this + 24) - *((_DWORD *)this + 22) != *((_DWORD *)this + 28) - *((_DWORD *)this + 26) )
      return 1;
    v2 = *((_DWORD *)this + 25) - *((_DWORD *)this + 23) == *((_DWORD *)this + 29) - *((_DWORD *)this + 27);
  }
  if ( !v2 )
    return 1;
  return v1;
}
