/*
 * XREFs of ?Start@CPenBarrelKeyVisual@@QEAAJPEBUtagPOINT@@KI@Z @ 0x1800875BC
 * Callers:
 *     ?StartPenBarrelVisual@CContactManager@@AEAAJPEAUCPenContact@@_K@Z @ 0x180081A70 (-StartPenBarrelVisual@CContactManager@@AEAAJPEAUCPenContact@@_K@Z.c)
 * Callees:
 *     ?SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z @ 0x180012700 (-SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z.c)
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x18001D130 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 *     ?MonitorDpiFromPoint@CDesktopManager@@SAIUtagPOINT@@@Z @ 0x180047750 (-MonitorDpiFromPoint@CDesktopManager@@SAIUtagPOINT@@@Z.c)
 *     ?PlaceVisuals@CPenBarrelKeyVisual@@IEAAJXZ @ 0x1800874E4 (-PlaceVisuals@CPenBarrelKeyVisual@@IEAAJXZ.c)
 *     ?UpdateBarrelAlpha@CPenBarrelKeyVisual@@IEAAJXZ @ 0x180087650 (-UpdateBarrelAlpha@CPenBarrelKeyVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CPenBarrelKeyVisual::Start(CPenBarrelKeyVisual *this, const struct tagPOINT *a2, int a3, int a4)
{
  int v5; // eax
  int v6; // eax
  struct CBitmapSource *v7; // rdx
  CImage *v8; // rcx

  *(struct tagPOINT *)((char *)this + 284) = *a2;
  *((_DWORD *)this + 73) = a3;
  *((_DWORD *)this + 70) = a4;
  v5 = CDesktopManager::MonitorDpiFromPoint(*a2);
  v6 = MulDiv(20, v5, 96);
  v7 = (struct CBitmapSource *)*((_QWORD *)this + 37);
  v8 = (CImage *)*((_QWORD *)this + 38);
  *((_DWORD *)this + 80) = v6;
  CImage::SetBitmapSource(v8, v7);
  CPenBarrelKeyVisual::PlaceVisuals(this);
  CVisual::SetOpacity(this, 1.0);
  CPenBarrelKeyVisual::UpdateBarrelAlpha(this);
  return 0LL;
}
