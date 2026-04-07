/*
 * XREFs of ?UpdateSettings@CDesktopManager@@QEAAJK@Z @ 0x180021020
 * Callers:
 *     ?SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z @ 0x18002D3AC (-SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z.c)
 *     ?Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z @ 0x180044F5C (-Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UpdateLayout@CAccent@@UEAAJXZ @ 0x1800155F0 (-UpdateLayout@CAccent@@UEAAJXZ.c)
 *     ?ModeChangeImpl@CDesktopManager@@AEAAJXZ @ 0x180021C48 (-ModeChangeImpl@CDesktopManager@@AEAAJXZ.c)
 *     ?RecreateDesktopWindowReplacementForDesktops@CWindowList@@QEAAXXZ @ 0x18002C58C (-RecreateDesktopWindowReplacementForDesktops@CWindowList@@QEAAXXZ.c)
 *     ?EnsureWindowFrames@CTopLevelWindow@@CAJXZ @ 0x18003EE34 (-EnsureWindowFrames@CTopLevelWindow@@CAJXZ.c)
 *     ?RefreshPresentationModeSettings@CContactManager@@QEAAJXZ @ 0x18003F198 (-RefreshPresentationModeSettings@CContactManager@@QEAAJXZ.c)
 *     ?SetWindowAnimation@CDesktopManager@@SAX_N@Z @ 0x180043698 (-SetWindowAnimation@CDesktopManager@@SAX_N@Z.c)
 *     ?SetupDPIValues@CDesktopManager@@QEAAXXZ @ 0x180044448 (-SetupDPIValues@CDesktopManager@@QEAAXXZ.c)
 *     ?UpdateWindowShadows@CDesktopManager@@QEAAXXZ @ 0x18004461C (-UpdateWindowShadows@CDesktopManager@@QEAAXXZ.c)
 *     ?UnloadTheme@CDesktopManager@@AEAAXXZ @ 0x1800449A8 (-UnloadTheme@CDesktopManager@@AEAAXXZ.c)
 *     ?SetupColorization@CDesktopManager@@AEAAXXZ @ 0x180044AA8 (-SetupColorization@CDesktopManager@@AEAAXXZ.c)
 *     ?LoadTheme@CDesktopManager@@AEAAJXZ @ 0x180044C50 (-LoadTheme@CDesktopManager@@AEAAJXZ.c)
 *     ?ReleaseCVICache@CDesktopManager@@SAXXZ @ 0x180046C24 (-ReleaseCVICache@CDesktopManager@@SAXXZ.c)
 *     ?ReadSystemColors@CTopLevelWindow@@SAXXZ @ 0x180048A30 (-ReadSystemColors@CTopLevelWindow@@SAXXZ.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     memset_0 @ 0x18004FF66 (memset_0.c)
 */

__int64 __fastcall CDesktopManager::UpdateSettings(CDesktopManager *this, __int16 a2)
{
  int Theme; // ebx
  char v3; // bp
  HMONITOR v6; // rax
  int v7; // eax
  CAccent *v8; // rcx
  int v10; // eax
  CDesktopManager *v11; // rdx
  int v12; // ecx
  int v13; // ecx
  _DWORD pvParam[2]; // [rsp+30h] [rbp-58h] BYREF
  struct tagMONITORINFO mi; // [rsp+38h] [rbp-50h] BYREF

  Theme = 0;
  v3 = 0;
  if ( (a2 & 0x20) != 0 && (v10 = CDesktopManager::ModeChangeImpl(this), Theme = v10, v10 < 0) )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v10, 0xA67u);
  }
  else
  {
    if ( (a2 & 1) != 0 )
    {
      memset_0((char *)this + 280, 0, 0x1F8uLL);
      *((_DWORD *)this + 70) = 504;
      SystemParametersInfoW(0x29u, 0x1F8u, (char *)this + 280, 0);
      *((_DWORD *)this + 196) = 504;
      SystemParametersInfoW(0xA4u, 0x1F8u, (char *)this + 784, 0);
      *((_DWORD *)this + 322) = GetSystemMetrics(76);
      *((_DWORD *)this + 323) = GetSystemMetrics(77);
      *((_DWORD *)this + 324) = GetSystemMetrics(78);
      *((_DWORD *)this + 325) = GetSystemMetrics(79);
      v6 = MonitorFromWindow(0LL, 1u);
      mi.cbSize = 40;
      if ( GetMonitorInfoW(v6, &mi) )
      {
        if ( !EqualRect((const RECT *)((char *)this + 1304), &mi.rcMonitor) )
          CDesktopManager::ReleaseCVICache();
        *(RECT *)((char *)this + 1304) = mi.rcMonitor;
      }
      else
      {
        v11 = CDesktopManager::s_pDesktopManagerInstance;
        v12 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 322);
        *((_DWORD *)this + 326) = v12;
        *((_DWORD *)this + 328) = *((_DWORD *)v11 + 324) + v12;
        v13 = *((_DWORD *)v11 + 323);
        *((_DWORD *)this + 327) = v13;
        *((_DWORD *)this + 329) = *((_DWORD *)v11 + 325) + v13;
      }
      v7 = CTopLevelWindow::EnsureWindowFrames();
      Theme = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0x1A1u);
      }
      else
      {
        CTopLevelWindow::s_marMinInflationThickness.cxLeftWidth = GetSystemMetrics(5);
        dword_1800BE5F0 = GetSystemMetrics(6);
        dword_1800BE5EC = CTopLevelWindow::s_marMinInflationThickness.cxLeftWidth;
        dword_1800BE5F4 = dword_1800BE5F0;
      }
      if ( Theme < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, Theme, 0xA8Bu);
        return (unsigned int)Theme;
      }
      v8 = (CAccent *)*((_QWORD *)this + 26);
      if ( v8 )
        CAccent::UpdateLayout(v8);
    }
    if ( (a2 & 4) != 0 )
    {
      CDesktopManager::UnloadTheme(this);
      Theme = CDesktopManager::LoadTheme(this);
      if ( Theme < 0 )
        return (unsigned int)Theme;
      v3 = 1;
    }
    if ( (a2 & 0x400) != 0 || v3 )
      CDesktopManager::SetupColorization(this);
    if ( (a2 & 8) != 0 )
      CTopLevelWindow::ReadSystemColors();
    if ( (a2 & 2) != 0 )
      CWindowList::RecreateDesktopWindowReplacementForDesktops(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance
                                                               + 167));
    if ( (a2 & 0x40) != 0 )
      CDesktopManager::UpdateWindowShadows(this);
    if ( (a2 & 0x80u) != 0 )
      CDesktopManager::SetupDPIValues(this);
    if ( (a2 & 0x100) != 0 )
      CContactManager::RefreshPresentationModeSettings(*((CContactManager **)this + 20));
    if ( (a2 & 0x200) != 0 )
    {
      pvParam[0] = 8;
      if ( SystemParametersInfoW(0x48u, 8u, pvParam, 0) )
        CDesktopManager::SetWindowAnimation(pvParam[1] != 0);
    }
  }
  return (unsigned int)Theme;
}
