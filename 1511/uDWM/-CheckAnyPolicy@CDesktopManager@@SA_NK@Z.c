/*
 * XREFs of ?CheckAnyPolicy@CDesktopManager@@SA_NK@Z @ 0x18003FBC0
 * Callers:
 *     ?IsLivePreviewAllowed@CDesktopManager@@SA_NXZ @ 0x1800137C4 (-IsLivePreviewAllowed@CDesktopManager@@SA_NXZ.c)
 *     ?SetWindowAnimation@CDesktopManager@@SAX_N@Z @ 0x180043698 (-SetWindowAnimation@CDesktopManager@@SAX_N@Z.c)
 *     ?SetupColorization@CDesktopManager@@AEAAXXZ @ 0x180044AA8 (-SetupColorization@CDesktopManager@@AEAAXXZ.c)
 *     ?GetGlobalState@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_GETGLOBALSTATE@@@Z @ 0x1800803AC (-GetGlobalState@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_GETGLOBALSTATE@@@Z.c)
 *     ?SetColorizationParameters@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETERS@@@Z @ 0x180081608 (-SetColorizationParameters@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETER.c)
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CDesktopManager::CheckAnyPolicy(unsigned int a1)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 7) + 56LL))(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 7),
           a1);
}
