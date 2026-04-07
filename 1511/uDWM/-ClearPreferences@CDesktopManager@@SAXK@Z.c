/*
 * XREFs of ?ClearPreferences@CDesktopManager@@SAXK@Z @ 0x180048CEC
 * Callers:
 *     ?StartupEnd@CWindowList@@AEAAJXZ @ 0x1800464F4 (-StartupEnd@CWindowList@@AEAAJXZ.c)
 *     ?NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ @ 0x180074CFC (-NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ.c)
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

void __fastcall CDesktopManager::ClearPreferences()
{
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 7) + 80LL))(
    *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 7),
    16LL);
}
