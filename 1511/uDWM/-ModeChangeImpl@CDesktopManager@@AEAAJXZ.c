/*
 * XREFs of ?ModeChangeImpl@CDesktopManager@@AEAAJXZ @ 0x180021C48
 * Callers:
 *     ?UpdateSettings@CDesktopManager@@QEAAJK@Z @ 0x180021020 (-UpdateSettings@CDesktopManager@@QEAAJK@Z.c)
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180032BE0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateRenderTargets@CDesktopManager@@AEAAJXZ @ 0x1800219FC (-CreateRenderTargets@CDesktopManager@@AEAAJXZ.c)
 *     ?RecreateDesktopWindowReplacementForDesktops@CWindowList@@QEAAXXZ @ 0x18002C58C (-RecreateDesktopWindowReplacementForDesktops@CWindowList@@QEAAXXZ.c)
 *     ?SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z @ 0x18003F790 (-SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z.c)
 */

__int64 __fastcall CDesktopManager::ModeChangeImpl(CDesktopManager *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int RenderTargets; // eax
  unsigned __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  GetDesktopID(1LL, &v6);
  v2 = CDesktopManager::SendSwitchModeCommand(v6);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v2, 0x31Fu);
  }
  else
  {
    RenderTargets = CDesktopManager::CreateRenderTargets(this);
    v3 = RenderTargets;
    if ( RenderTargets < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, RenderTargets, 0x321u);
  }
  CWindowList::RecreateDesktopWindowReplacementForDesktops(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance
                                                           + 167));
  return v3;
}
