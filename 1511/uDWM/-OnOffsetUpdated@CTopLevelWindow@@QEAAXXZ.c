/*
 * XREFs of ?OnOffsetUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18002A020
 * Callers:
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x18003B22C (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 * Callees:
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x1800224E8 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?SetDirtyFlags@CDesktopThumbnailCVIVisual@@UEAAXK@Z @ 0x18007E100 (-SetDirtyFlags@CDesktopThumbnailCVIVisual@@UEAAXK@Z.c)
 */

void __fastcall CTopLevelWindow::OnOffsetUpdated(CTopLevelWindow *this)
{
  bool v1; // zf
  CDesktopThumbnailCVIVisual *v3; // rcx
  struct tagPOINT v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = (*((_BYTE *)this + 265) & 1) == 0;
  v4 = *(struct tagPOINT *)(*((_QWORD *)this + 93) + 48LL);
  if ( !v1 )
  {
    v4.x = -32000;
    v4.y = -32000;
  }
  CVisual::SetOffset((struct tagPOINT *)this, &v4);
  v3 = *(CDesktopThumbnailCVIVisual **)(*((_QWORD *)this + 93) + 560LL);
  if ( v3 )
    CDesktopThumbnailCVIVisual::SetDirtyFlags(v3, 0x1000u);
  CTopLevelWindow::NotifyMouseLeave(this);
}
