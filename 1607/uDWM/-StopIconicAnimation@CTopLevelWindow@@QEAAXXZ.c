/*
 * XREFs of ?StopIconicAnimation@CTopLevelWindow@@QEAAXXZ @ 0x180021F54
 * Callers:
 *     ?CleanupAnimationResources@CWindowIconic@@QEAAXXZ @ 0x1800384C4 (-CleanupAnimationResources@CWindowIconic@@QEAAXXZ.c)
 * Callees:
 *     ?HasAnimation@CTopLevelWindow@@AEAA_NXZ @ 0x18007E814 (-HasAnimation@CTopLevelWindow@@AEAA_NXZ.c)
 */

void __fastcall CTopLevelWindow::StopIconicAnimation(CTopLevelWindow *this)
{
  char v1; // al
  struct CVisual *v2; // rcx

  v1 = *((_BYTE *)this + 264);
  if ( (v1 & 0x40) != 0 )
  {
    *((_BYTE *)this + 264) = v1 & 0xBF;
    if ( !CTopLevelWindow::HasAnimation(this) )
      CDesktopManager::UnregisterForGlobalTimeChangeNotification(v2);
  }
}
