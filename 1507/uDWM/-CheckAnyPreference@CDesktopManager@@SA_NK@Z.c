/*
 * XREFs of ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x1800197A0
 * Callers:
 *     ?_IsAnimationNeeded@CAccent@@IEAA_NXZ @ 0x1800023D8 (-_IsAnimationNeeded@CAccent@@IEAA_NXZ.c)
 *     ?IsEnabled@CStoryboard@@QEAA_NXZ @ 0x18000FC08 (-IsEnabled@CStoryboard@@QEAA_NXZ.c)
 *     ?AdvanceTimelines@CDesktopManager@@AEAAXN@Z @ 0x18001BF30 (-AdvanceTimelines@CDesktopManager@@AEAAXN@Z.c)
 *     ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x180025A60 (-StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z.c)
 *     ?ShouldShowTransition@CTopLevelWindow3D@@AEAA_NXZ @ 0x180027B64 (-ShouldShowTransition@CTopLevelWindow3D@@AEAA_NXZ.c)
 *     ?SetupDPIValues@CDesktopManager@@QEAAXXZ @ 0x18003F680 (-SetupDPIValues@CDesktopManager@@QEAAXXZ.c)
 *     ?StartupBegin@CWindowList@@AEAAJXZ @ 0x180046020 (-StartupBegin@CWindowList@@AEAAJXZ.c)
 *     ?NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ @ 0x18006CDBC (-NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ.c)
 *     ?WindowCreated@CDwmWinSqm@@QEAAXPEAVCWindowData@@@Z @ 0x18007AF7C (-WindowCreated@CDwmWinSqm@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?ShouldShowTransition@CWindowArrangementTransition@@AEAA_NPEAVCWindowData@@@Z @ 0x18007CEDC (-ShouldShowTransition@CWindowArrangementTransition@@AEAA_NPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CDesktopManager::CheckAnyPreference(unsigned int a1)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 7) + 64LL))(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 7),
           a1);
}
