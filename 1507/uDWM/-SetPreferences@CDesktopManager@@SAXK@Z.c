/*
 * XREFs of ?SetPreferences@CDesktopManager@@SAXK@Z @ 0x180046C98
 * Callers:
 *     ?StartupBegin@CWindowList@@AEAAJXZ @ 0x180046020 (-StartupBegin@CWindowList@@AEAAJXZ.c)
 *     ?NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ @ 0x18006CDBC (-NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ.c)
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

void __fastcall CDesktopManager::SetPreferences()
{
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 7) + 72LL))(
    *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 7),
    16LL);
}
