/*
 * XREFs of ?UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z @ 0x180029D28
 * Callers:
 *     ?GDISurfaceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002B330 (-GDISurfaceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18002E0BC (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18002EABC (-ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?ShellWindowChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSHELLWINDOWCHANGE@@@Z @ 0x180046478 (-ShellWindowChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSHELLWINDOWCHANGE@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ShowDesktopWindowReplacement@CDesktopManager@@QEAAX_N_K@Z @ 0x18001B944 (-ShowDesktopWindowReplacement@CDesktopManager@@QEAAX_N_K@Z.c)
 *     ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z @ 0x18002988C (-GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x18002F378 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 */

__int64 __fastcall CWindowList::UpdateDesktopWindowReplacement(CWindowList *this, unsigned __int64 a2)
{
  char v2; // bl
  unsigned int v4; // edi
  HWND ShellWindowForDesktop; // rax
  int SyncedWindowDataByHwnd; // eax
  struct CWindowData *v9; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  v4 = 0;
  v9 = 0LL;
  ShellWindowForDesktop = CWindowList::GetShellWindowForDesktop(this, a2);
  if ( !ShellWindowForDesktop )
    goto LABEL_8;
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, ShellWindowForDesktop, &v9);
  v4 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, SyncedWindowDataByHwnd, 0x18B9u);
    return v4;
  }
  if ( !v9 || (*((_BYTE *)v9 + 552) & 1) == 0 || !*((_QWORD *)v9 + 44) )
LABEL_8:
    v2 = 1;
  CDesktopManager::ShowDesktopWindowReplacement(CDesktopManager::s_pDesktopManagerInstance, v2, a2);
  return v4;
}
