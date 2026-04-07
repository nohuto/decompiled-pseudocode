/*
 * XREFs of ?UpdateSettings@CDesktopManager@@QEAAJK@Z @ 0x18001DDE0
 * Callers:
 *     ?SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z @ 0x180030A40 (-SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z.c)
 *     ?Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z @ 0x180046620 (-Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z.c)
 * Callees:
 *     ?ModeChangeImpl@CDesktopManager@@AEAAJXZ @ 0x18001EEA4 (-ModeChangeImpl@CDesktopManager@@AEAAJXZ.c)
 *     ?RecreateDesktopWindowReplacementForDesktops@CWindowList@@QEAAXXZ @ 0x18002BCCC (-RecreateDesktopWindowReplacementForDesktops@CWindowList@@QEAAXXZ.c)
 *     ?UpdateLayout@CAccent@@UEAAJXZ @ 0x180035920 (-UpdateLayout@CAccent@@UEAAJXZ.c)
 *     ?RefreshPresentationModeSettings@CContactManager@@QEAAJXZ @ 0x18003A8EC (-RefreshPresentationModeSettings@CContactManager@@QEAAJXZ.c)
 *     ?EnsureWindowFrames@CTopLevelWindow@@CAJXZ @ 0x18004191C (-EnsureWindowFrames@CTopLevelWindow@@CAJXZ.c)
 *     ?SetWindowAnimation@CDesktopManager@@SAX_N@Z @ 0x180044BF8 (-SetWindowAnimation@CDesktopManager@@SAX_N@Z.c)
 *     ?SetupDPIValues@CDesktopManager@@QEAAXXZ @ 0x180045BC0 (-SetupDPIValues@CDesktopManager@@QEAAXXZ.c)
 *     ?UpdateWindowShadows@CDesktopManager@@QEAAXXZ @ 0x180045D94 (-UpdateWindowShadows@CDesktopManager@@QEAAXXZ.c)
 *     ?UnloadTheme@CDesktopManager@@AEAAXXZ @ 0x180046080 (-UnloadTheme@CDesktopManager@@AEAAXXZ.c)
 *     ?SetupColorization@CDesktopManager@@AEAAXXZ @ 0x180046180 (-SetupColorization@CDesktopManager@@AEAAXXZ.c)
 *     ?LoadTheme@CDesktopManager@@AEAAJXZ @ 0x180046314 (-LoadTheme@CDesktopManager@@AEAAJXZ.c)
 *     ?ReadSystemColors@CTopLevelWindow@@SAXXZ @ 0x180049C10 (-ReadSystemColors@CTopLevelWindow@@SAXXZ.c)
 *     ?ReleaseCVICache@CDesktopManager@@SAXXZ @ 0x18004CB40 (-ReleaseCVICache@CDesktopManager@@SAXXZ.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800505A6 (memset_0.c)
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
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xAA6u);
  }
  else
  {
    if ( (a2 & 1) != 0 )
    {
      memset_0((char *)this + 264, 0, 0x1F8uLL);
      *((_DWORD *)this + 66) = 504;
      SystemParametersInfoW(0x29u, 0x1F8u, (char *)this + 264, 0);
      *((_DWORD *)this + 192) = 504;
      SystemParametersInfoW(0xA4u, 0x1F8u, (char *)this + 768, 0);
      *((_DWORD *)this + 318) = GetSystemMetrics(76);
      *((_DWORD *)this + 319) = GetSystemMetrics(77);
      *((_DWORD *)this + 320) = GetSystemMetrics(78);
      *((_DWORD *)this + 321) = GetSystemMetrics(79);
      v6 = MonitorFromWindow(0LL, 1u);
      mi.cbSize = 40;
      if ( GetMonitorInfoW(v6, &mi) )
      {
        if ( !EqualRect((const RECT *)((char *)this + 1288), &mi.rcMonitor) )
          CDesktopManager::ReleaseCVICache();
        *(RECT *)((char *)this + 1288) = mi.rcMonitor;
      }
      else
      {
        v11 = CDesktopManager::s_pDesktopManagerInstance;
        v12 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 318);
        *((_DWORD *)this + 322) = v12;
        *((_DWORD *)this + 324) = *((_DWORD *)v11 + 320) + v12;
        v13 = *((_DWORD *)v11 + 319);
        *((_DWORD *)this + 323) = v13;
        *((_DWORD *)this + 325) = *((_DWORD *)v11 + 321) + v13;
      }
      v7 = CTopLevelWindow::EnsureWindowFrames();
      Theme = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x160u);
      }
      else
      {
        CTopLevelWindow::s_marMinInflationThickness.cxLeftWidth = GetSystemMetrics(5);
        dword_1800B7D68 = GetSystemMetrics(6);
        dword_1800B7D64 = CTopLevelWindow::s_marMinInflationThickness.cxLeftWidth;
        dword_1800B7D6C = dword_1800B7D68;
      }
      if ( Theme < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, Theme, 0xACAu);
        return (unsigned int)Theme;
      }
      v8 = (CAccent *)*((_QWORD *)this + 24);
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
                                                               + 165));
    if ( (a2 & 0x40) != 0 )
      CDesktopManager::UpdateWindowShadows(this);
    if ( (a2 & 0x80u) != 0 )
      CDesktopManager::SetupDPIValues(this);
    if ( (a2 & 0x100) != 0 )
      CContactManager::RefreshPresentationModeSettings(*((CContactManager **)this + 18));
    if ( (a2 & 0x200) != 0 )
    {
      pvParam[0] = 8;
      if ( SystemParametersInfoW(0x48u, 8u, pvParam, 0) )
        CDesktopManager::SetWindowAnimation(pvParam[1] != 0);
    }
  }
  return (unsigned int)Theme;
}
