/*
 * XREFs of ?StartupEnd@CWindowList@@AEAAJXZ @ 0x180047864
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x18002F3B0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180010F54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z @ 0x180041B98 (-SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z.c)
 *     ?CreateDesktopRenderTarget@CDesktopManager@@AEAAJXZ @ 0x180045E84 (-CreateDesktopRenderTarget@CDesktopManager@@AEAAJXZ.c)
 *     ?CreateOrDestroyDesktopWindowReplacementForDesktops@CWindowList@@QEAAX_N@Z @ 0x180047428 (-CreateOrDestroyDesktopWindowReplacementForDesktops@CWindowList@@QEAAX_N@Z.c)
 *     ?ClearPreferences@CDesktopManager@@SAXK@Z @ 0x180049E9C (-ClearPreferences@CDesktopManager@@SAXK@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CWindowList::StartupEnd(CWindowList *this)
{
  unsigned int v2; // ecx
  int v3; // eax
  int v4; // ebx
  CDesktopManager *v5; // rdi
  int DesktopRenderTarget; // eax
  __int64 v7; // rax
  unsigned int v8; // edx
  struct IDwmChannel *v9; // rcx
  int v10; // eax
  unsigned __int64 v12; // [rsp+40h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( *((_BYTE *)this + 384) )
    CDesktopManager::ClearPreferences(v2);
  GetDesktopID(1LL, &v12);
  v3 = CDesktopManager::SendSwitchModeCommand(v12);
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x1368u);
  }
  else
  {
    v5 = CDesktopManager::s_pDesktopManagerInstance;
    v4 = 0;
    if ( !*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 8) )
    {
      DesktopRenderTarget = CDesktopManager::CreateDesktopRenderTarget(CDesktopManager::s_pDesktopManagerInstance);
      v4 = DesktopRenderTarget;
      if ( DesktopRenderTarget < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, DesktopRenderTarget, 0x45Bu);
      }
      else
      {
        CWindowList::CreateOrDestroyDesktopWindowReplacementForDesktops(
          *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 165),
          1);
        v7 = *((_QWORD *)v5 + 8);
        if ( v7 )
          v8 = *(_DWORD *)(v7 + 24);
        else
          v8 = 0;
        if ( v7 )
          v9 = *(struct IDwmChannel **)(v7 + 16);
        else
          v9 = 0LL;
        v10 = DwmRedirectionManagerSetClientRenderTarget(v9, v8);
        v4 = v10;
        if ( v10 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x46Fu);
      }
      if ( v4 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x136Au);
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v13);
  return (unsigned int)v4;
}
