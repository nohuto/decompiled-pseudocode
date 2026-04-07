/*
 * XREFs of ?NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ @ 0x180076BEC
 * Callers:
 *     ?Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z @ 0x180046620 (-Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z.c)
 *     ?DwmClientShutdown@@YAJXZ @ 0x18007C4E0 (-DwmClientShutdown@@YAJXZ.c)
 * Callees:
 *     ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x18004100C (-CheckAnyPreference@CDesktopManager@@SA_NK@Z.c)
 *     ?CreateOrDestroyDesktopWindowReplacementForDesktops@CWindowList@@QEAAX_N@Z @ 0x180047428 (-CreateOrDestroyDesktopWindowReplacementForDesktops@CWindowList@@QEAAX_N@Z.c)
 *     ?SetPreferences@CDesktopManager@@SAXK@Z @ 0x180049E78 (-SetPreferences@CDesktopManager@@SAXK@Z.c)
 *     ?ClearPreferences@CDesktopManager@@SAXK@Z @ 0x180049E9C (-ClearPreferences@CDesktopManager@@SAXK@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     TemplateEventDescriptor @ 0x180075A10 (TemplateEventDescriptor.c)
 *     ?ReleaseDesktopRenderTarget@CDesktopManager@@AEAAJXZ @ 0x180076F3C (-ReleaseDesktopRenderTarget@CDesktopManager@@AEAAJXZ.c)
 */

__int64 __fastcall CDesktopManager::NotifyRedirectionShutdown(CDesktopManager *this)
{
  CDesktopManager *v1; // rbx
  signed int v3; // ebx
  __int64 v4; // rax
  unsigned int v5; // edx
  struct IDwmChannel *v6; // rcx
  int v7; // eax
  char v8; // si
  __int64 v9; // rcx
  signed int LastError; // eax
  signed int v11; // eax
  void *v12; // rcx

  v1 = CDesktopManager::s_pDesktopManagerInstance;
  *((_BYTE *)this + 19) = 1;
  if ( *((_QWORD *)v1 + 8) )
  {
    CDesktopManager::ReleaseDesktopRenderTarget(v1);
    CWindowList::CreateOrDestroyDesktopWindowReplacementForDesktops(
      *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 165),
      0);
    v4 = *((_QWORD *)v1 + 8);
    if ( v4 )
      v5 = *(_DWORD *)(v4 + 24);
    else
      v5 = 0;
    if ( v4 )
      v6 = *(struct IDwmChannel **)(v4 + 16);
    else
      v6 = 0LL;
    v7 = DwmRedirectionManagerSetClientRenderTarget(v6, v5);
    v3 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0x46Fu);
    if ( v3 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v3, 0x1ABu);
  }
  else
  {
    v3 = 0;
  }
  v8 = CDesktopManager::CheckAnyPreference(0x10u);
  CDesktopManager::SetPreferences();
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    TemplateEventDescriptor(v9, (__int64)&UdwmShutdownMessage_Info);
  CWindowList::CreateOrDestroyDesktopWindowReplacementForDesktops(
    *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 165),
    0);
  if ( *((_QWORD *)this + 188) )
  {
    SetLastError(0);
    if ( !PostThreadMessageW(*((_DWORD *)this + 374), 0x12u, 0LL, 0LL) )
    {
      LastError = GetLastError();
      v3 = LastError;
      if ( LastError > 0 )
        v3 = (unsigned __int16)LastError | 0x80070000;
      if ( v3 >= 0 )
        v3 = -2003304445;
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v3, 0x1B7u);
    }
    if ( v3 >= 0 )
    {
      LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
      SetLastError(0);
      if ( WaitForSingleObject(*((HANDLE *)this + 188), 0xFFFFFFFF) )
      {
        v11 = GetLastError();
        v3 = v11;
        if ( v11 > 0 )
          v3 = (unsigned __int16)v11 | 0x80070000;
        if ( v3 >= 0 )
          v3 = -2003304445;
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v3, 0x1BFu);
      }
      EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    }
    *((_DWORD *)this + 374) = 0;
    v12 = (void *)*((_QWORD *)this + 188);
    if ( v12 )
    {
      CloseHandle(v12);
      *((_QWORD *)this + 188) = 0LL;
    }
  }
  if ( !v8 )
    CDesktopManager::ClearPreferences();
  return (unsigned int)v3;
}
