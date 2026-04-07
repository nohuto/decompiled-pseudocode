/*
 * XREFs of ?SetWindowAnimation@CDesktopManager@@SAX_N@Z @ 0x180043698
 * Callers:
 *     ?UpdateSettings@CDesktopManager@@QEAAJK@Z @ 0x180021020 (-UpdateSettings@CDesktopManager@@QEAAJK@Z.c)
 *     ?AnimationChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYANIMATIONCHANGE@@@Z @ 0x18002D25C (-AnimationChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYANIMATIONCHANGE@@@Z.c)
 *     ?Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z @ 0x180044F5C (-Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z.c)
 * Callees:
 *     ?CheckAnyPolicy@CDesktopManager@@SA_NK@Z @ 0x18003FBC0 (-CheckAnyPolicy@CDesktopManager@@SA_NK@Z.c)
 */

void __fastcall CDesktopManager::SetWindowAnimation(char a1)
{
  char v2; // al
  char v3; // cl

  v2 = CDesktopManager::CheckAnyPolicy(1u);
  v3 = a1;
  if ( v2 )
    v3 = 0;
  *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 21) = v3;
}
