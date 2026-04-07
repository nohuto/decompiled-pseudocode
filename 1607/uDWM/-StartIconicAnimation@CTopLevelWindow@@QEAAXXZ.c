/*
 * XREFs of ?StartIconicAnimation@CTopLevelWindow@@QEAAXXZ @ 0x18007EDB0
 * Callers:
 *     ?SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x1800385A0 (-SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 * Callees:
 *     ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x180041880 (-RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z.c)
 *     ?HasAnimation@CTopLevelWindow@@AEAA_NXZ @ 0x18007E814 (-HasAnimation@CTopLevelWindow@@AEAA_NXZ.c)
 */

void __fastcall CTopLevelWindow::StartIconicAnimation(CTopLevelWindow *this)
{
  struct CVisual *v2; // rcx

  if ( (*((_BYTE *)this + 264) & 0x40) == 0 )
  {
    if ( !(unsigned __int8)CTopLevelWindow::HasAnimation(this) )
      CDesktopManager::RegisterForGlobalTimeChangeNotification(v2);
    *((_BYTE *)this + 264) |= 0x40u;
  }
}
