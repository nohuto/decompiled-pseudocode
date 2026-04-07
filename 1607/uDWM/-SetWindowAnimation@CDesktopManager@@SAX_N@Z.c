/*
 * XREFs of ?SetWindowAnimation@CDesktopManager@@SAX_N@Z @ 0x180044BF8
 * Callers:
 *     ?UpdateSettings@CDesktopManager@@QEAAJK@Z @ 0x18001DDE0 (-UpdateSettings@CDesktopManager@@QEAAJK@Z.c)
 *     ?AnimationChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYANIMATIONCHANGE@@@Z @ 0x180030788 (-AnimationChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYANIMATIONCHANGE@@@Z.c)
 *     ?Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z @ 0x180046620 (-Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z.c)
 * Callees:
 *     ?CheckAnyPolicy@CDesktopManager@@SA_NK@Z @ 0x180041DB8 (-CheckAnyPolicy@CDesktopManager@@SA_NK@Z.c)
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
