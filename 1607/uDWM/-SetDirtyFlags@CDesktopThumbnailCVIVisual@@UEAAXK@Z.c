/*
 * XREFs of ?SetDirtyFlags@CDesktopThumbnailCVIVisual@@UEAAXK@Z @ 0x18007ECF0
 * Callers:
 *     ?OnOffsetUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180027040 (-OnOffsetUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x180032E10 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?Update@CDesktopThumbnailCVIVisual@@QEAAXAEBUtagRECT@@N@Z @ 0x18009782C (-Update@CDesktopThumbnailCVIVisual@@QEAAXAEBUtagRECT@@N@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001FFF0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
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
