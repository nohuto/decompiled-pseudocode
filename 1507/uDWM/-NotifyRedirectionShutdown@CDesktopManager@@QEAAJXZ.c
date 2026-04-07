/*
 * XREFs of ?NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ @ 0x18006CDBC
 * Callers:
 *     ?Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z @ 0x180040248 (-Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z.c)
 *     DwmClientShutdown @ 0x180073600 (DwmClientShutdown.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x1800197A0 (-CheckAnyPreference@CDesktopManager@@SA_NK@Z.c)
 *     ?CreateOrDestroyDesktopWindowReplacementForDesktops@CWindowList@@QEAAX_N@Z @ 0x180046220 (-CreateOrDestroyDesktopWindowReplacementForDesktops@CWindowList@@QEAAX_N@Z.c)
 *     ?SetPreferences@CDesktopManager@@SAXK@Z @ 0x180046C98 (-SetPreferences@CDesktopManager@@SAXK@Z.c)
 *     ?ClearPreferences@CDesktopManager@@SAXK@Z @ 0x180046D60 (-ClearPreferences@CDesktopManager@@SAXK@Z.c)
 *     TemplateEventDescriptor @ 0x18006B828 (TemplateEventDescriptor.c)
 *     ?ReleaseDesktopRenderTarget@CDesktopManager@@AEAAJXZ @ 0x18006D10C (-ReleaseDesktopRenderTarget@CDesktopManager@@AEAAJXZ.c)
 */

__int64 __fastcall CDesktopManager::NotifyRedirectionShutdown(CDesktopManager *this)
{
  CDesktopManager *v1; // rbx
  signed int v3; // ebx
  __int64 v4; // rax
  unsigned int v5; // edx
  struct MIL_CHANNEL__ *v6; // rcx
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
      *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 167),
      0);
    v4 = *((_QWORD *)v1 + 8);
    if ( v4 )
      v5 = *(_DWORD *)(v4 + 24);
    else
      v5 = 0;
    if ( v4 )
      v6 = *(struct MIL_CHANNEL__ **)(v4 + 16);
    else
      v6 = 0LL;
    v7 = DwmRedirectionManagerSetClientRenderTarget(v6, v5);
    v3 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0x3E3u);
    if ( v3 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v3, 0x19Fu);
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
    *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 167),
    0);
  if ( *((_QWORD *)this + 190) )
  {
    SetLastError(0);
    if ( !PostThreadMessageW(*((_DWORD *)this + 378), 0x12u, 0LL, 0LL) )
    {
      LastError = GetLastError();
      v3 = LastError;
      if ( LastError > 0 )
        v3 = (unsigned __int16)LastError | 0x80070000;
      if ( v3 >= 0 )
        v3 = -2003304445;
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v3, 0x1ABu);
    }
    if ( v3 >= 0 )
    {
      LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
      SetLastError(0);
      if ( WaitForSingleObject(*((HANDLE *)this + 190), 0xFFFFFFFF) )
      {
        v11 = GetLastError();
        v3 = v11;
        if ( v11 > 0 )
          v3 = (unsigned __int16)v11 | 0x80070000;
        if ( v3 >= 0 )
          v3 = -2003304445;
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v3, 0x1B3u);
      }
      EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    }
    *((_DWORD *)this + 378) = 0;
    v12 = (void *)*((_QWORD *)this + 190);
    if ( v12 )
    {
      CloseHandle(v12);
      *((_QWORD *)this + 190) = 0LL;
    }
  }
  if ( !v8 )
    CDesktopManager::ClearPreferences();
  return (unsigned int)v3;
}
