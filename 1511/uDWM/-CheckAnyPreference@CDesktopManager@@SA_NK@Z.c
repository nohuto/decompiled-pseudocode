/*
 * XREFs of ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x180038F64
 * Callers:
 *     ?IsEnabled@CStoryboard@@QEAA_NXZ @ 0x180007648 (-IsEnabled@CStoryboard@@QEAA_NXZ.c)
 *     ?_IsAnimationNeeded@CAccent@@IEAA_NXZ @ 0x180010A3C (-_IsAnimationNeeded@CAccent@@IEAA_NXZ.c)
 *     ?AdvanceTimelines@CDesktopManager@@AEAAXN@Z @ 0x180021570 (-AdvanceTimelines@CDesktopManager@@AEAAXN@Z.c)
 *     ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x180033D70 (-StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z.c)
 *     ?ShouldShowTransition@CTopLevelWindow3D@@AEAA_NXZ @ 0x180035EB0 (-ShouldShowTransition@CTopLevelWindow3D@@AEAA_NXZ.c)
 *     ?SetupDPIValues@CDesktopManager@@QEAAXXZ @ 0x180044448 (-SetupDPIValues@CDesktopManager@@QEAAXXZ.c)
 *     ?StartupBegin@CWindowList@@AEAAJXZ @ 0x180045FCC (-StartupBegin@CWindowList@@AEAAJXZ.c)
 *     ?NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ @ 0x180074CFC (-NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ.c)
 *     ?WindowCreated@CDwmWinSqm@@QEAAXPEAVCWindowData@@@Z @ 0x1800829A8 (-WindowCreated@CDwmWinSqm@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?ShouldShowTransition@CWindowArrangementTransition@@AEAA_NPEAVCWindowData@@@Z @ 0x18008490C (-ShouldShowTransition@CWindowArrangementTransition@@AEAA_NPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CDesktopManager::CheckAnyPreference(unsigned int a1)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 7) + 64LL))(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 7),
           a1);
}
