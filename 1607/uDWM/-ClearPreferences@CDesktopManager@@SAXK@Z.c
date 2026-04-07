/*
 * XREFs of ?ClearPreferences@CDesktopManager@@SAXK@Z @ 0x180049E9C
 * Callers:
 *     ?StartupEnd@CWindowList@@AEAAJXZ @ 0x180047864 (-StartupEnd@CWindowList@@AEAAJXZ.c)
 *     ?NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ @ 0x180076BEC (-NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CDesktopManager::ClearPreferences()
{
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 7) + 80LL))(
    *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 7),
    16LL);
}
