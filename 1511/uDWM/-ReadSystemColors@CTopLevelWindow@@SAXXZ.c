/*
 * XREFs of ?ReadSystemColors@CTopLevelWindow@@SAXXZ @ 0x180048A30
 * Callers:
 *     ?UpdateSettings@CDesktopManager@@QEAAJK@Z @ 0x180021020 (-UpdateSettings@CDesktopManager@@QEAAJK@Z.c)
 *     ?EnsureImages@CTopLevelWindow@@SAJQEAUMIL_CHANNEL__@@@Z @ 0x1800476D8 (-EnsureImages@CTopLevelWindow@@SAJQEAUMIL_CHANNEL__@@@Z.c)
 * Callees:
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x180036768 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 */

void CTopLevelWindow::ReadSystemColors(void)
{
  void *Theme; // rax
  void *v1; // rax
  COLORREF pColor; // [rsp+40h] [rbp+8h] BYREF
  COLORREF SysColor; // [rsp+48h] [rbp+10h] BYREF

  Theme = (void *)CDesktopManager::GetTheme(0);
  if ( GetThemeColor(Theme, 47, 1, 3803, &pColor) < 0
    || (v1 = (void *)CDesktopManager::GetTheme(0), GetThemeColor(v1, 47, 2, 3803, &SysColor) < 0) )
  {
    pColor = GetSysColor(9);
    SysColor = GetSysColor(19);
  }
  *(_DWORD *)(*(_QWORD *)(CTopLevelWindow::s_rgpwfWindowFrames + 16) + 1840LL) = pColor;
  *(_DWORD *)(*(_QWORD *)(CTopLevelWindow::s_rgpwfWindowFrames + 32) + 1840LL) = pColor;
  *(_DWORD *)(*(_QWORD *)CTopLevelWindow::s_rgpwfWindowFrames + 1840LL) = pColor;
  *(_DWORD *)(*(_QWORD *)(CTopLevelWindow::s_rgpwfWindowFrames + 24) + 1840LL) = SysColor;
  *(_DWORD *)(*(_QWORD *)(CTopLevelWindow::s_rgpwfWindowFrames + 40) + 1840LL) = SysColor;
  *(_DWORD *)(*(_QWORD *)(CTopLevelWindow::s_rgpwfWindowFrames + 8) + 1840LL) = SysColor;
}
