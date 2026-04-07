/*
 * XREFs of ?StartupEnd@CWindowList@@AEAAJXZ @ 0x18004654C
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x18002FEE0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z @ 0x180008C3C (-SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000C8D8 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?CreateDesktopRenderTarget@CDesktopManager@@AEAAJXZ @ 0x18003FA30 (-CreateDesktopRenderTarget@CDesktopManager@@AEAAJXZ.c)
 *     ?CreateOrDestroyDesktopWindowReplacementForDesktops@CWindowList@@QEAAX_N@Z @ 0x180046220 (-CreateOrDestroyDesktopWindowReplacementForDesktops@CWindowList@@QEAAX_N@Z.c)
 *     ?ClearPreferences@CDesktopManager@@SAXK@Z @ 0x180046D60 (-ClearPreferences@CDesktopManager@@SAXK@Z.c)
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
  struct MIL_CHANNEL__ *v9; // rcx
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
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v3, 0x1653u);
  }
  else
  {
    v5 = CDesktopManager::s_pDesktopManagerInstance;
    v4 = 0;
    if ( !*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 8) )
    {
      DesktopRenderTarget = CDesktopManager::CreateDesktopRenderTarget((struct MIL_CHANNEL__ **)CDesktopManager::s_pDesktopManagerInstance);
      v4 = DesktopRenderTarget;
      if ( DesktopRenderTarget < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, DesktopRenderTarget, 0x3CFu);
      }
      else
      {
        CWindowList::CreateOrDestroyDesktopWindowReplacementForDesktops(
          *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 167),
          1);
        v7 = *((_QWORD *)v5 + 8);
        if ( v7 )
          v8 = *(_DWORD *)(v7 + 24);
        else
          v8 = 0;
        if ( v7 )
          v9 = *(struct MIL_CHANNEL__ **)(v7 + 16);
        else
          v9 = 0LL;
        v10 = DwmRedirectionManagerSetClientRenderTarget(v9, v8);
        v4 = v10;
        if ( v10 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v10, 0x3E3u);
      }
      if ( v4 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v4, 0x1655u);
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v13);
  return (unsigned int)v4;
}
