/*
 * XREFs of ?ForceDisconnectClientNode@CWindowData@@QEAAXXZ @ 0x18001DF74
 * Callers:
 *     ?ForceDisconnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002DAA0 (-ForceDisconnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?ForceDisconnectClientArea@CTopLevelWindow@@QEAAXXZ @ 0x18000FD38 (-ForceDisconnectClientArea@CTopLevelWindow@@QEAAXXZ.c)
 */

void __fastcall CWindowData::ForceDisconnectClientNode(CWindowData *this)
{
  CTopLevelWindow *v2; // rcx
  unsigned int v3; // edx

  v2 = (CTopLevelWindow *)*((_QWORD *)this + 48);
  if ( v2 )
    CTopLevelWindow::ForceDisconnectClientArea(v2);
  v3 = *((_DWORD *)this + 32);
  if ( v3 )
  {
    MilResource_ReleaseOnChannel(*((struct MIL_CHANNEL__ **)CDesktopManager::s_pDesktopManagerInstance + 4), v3, 0LL);
    *((_DWORD *)this + 32) = 0;
  }
}
