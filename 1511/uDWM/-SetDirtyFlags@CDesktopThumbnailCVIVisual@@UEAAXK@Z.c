/*
 * XREFs of ?SetDirtyFlags@CDesktopThumbnailCVIVisual@@UEAAXK@Z @ 0x18007E100
 * Callers:
 *     ?OnOffsetUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18002A020 (-OnOffsetUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x180033010 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?Update@CDesktopThumbnailCVIVisual@@QEAAXAEBUtagRECT@@N@Z @ 0x18009AA20 (-Update@CDesktopThumbnailCVIVisual@@QEAAXAEBUtagRECT@@N@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180022D90 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 */

void __fastcall CDesktopThumbnailCVIVisual::SetDirtyFlags(CDesktopThumbnailCVIVisual *this, int a2)
{
  __int64 v4; // rax
  CVisual *v5; // rcx

  if ( *((_BYTE *)this + 321) )
  {
    v4 = *((_QWORD *)this + 37);
    if ( v4 )
    {
      v5 = *(CVisual **)(v4 + 384);
      if ( v5 )
        CVisual::SetDirtyFlags(v5, 0x8000000);
    }
  }
  CVisual::SetDirtyFlags(this, a2);
}
