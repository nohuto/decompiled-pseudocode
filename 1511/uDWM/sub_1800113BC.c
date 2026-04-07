/*
 * XREFs of sub_1800113BC @ 0x1800113BC
 * Callers:
 *     ??$ForEachOwnedWindow@V_lambda_4698877d0d6a676928077337e8636fe2_@@@CTransitionVisualController@@KAJPEBVCWindowData@@AEBV_lambda_4698877d0d6a676928077337e8636fe2_@@_N@Z @ 0x18001145C (--$ForEachOwnedWindow@V_lambda_4698877d0d6a676928077337e8636fe2_@@@CTransitionVisualController@@.c)
 * Callees:
 *     ?_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222PEA_N@Z @ 0x18000AB78 (-_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222P.c)
 *     ?ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x18001108C (-ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?IsWindowCurrentlyAnimating@CAnimationScheduler@@QEAA_NQEAUHWND__@@HK@Z @ 0x180038FD8 (-IsWindowCurrentlyAnimating@CAnimationScheduler@@QEAA_NQEAUHWND__@@HK@Z.c)
 */

__int64 __fastcall sub_1800113BC(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  char v5; // al

  v4 = 0;
  if ( CTransitionVisualController::ShouldCloneWindow(*(HWND *)(a2 + 40)) )
  {
    if ( (*(_DWORD *)(a2 + 100) & 0x20000000) == 0 )
    {
      v5 = *(_BYTE *)(a2 + 568);
      if ( (v5 & 4) == 0
        && (v5 & 1) != 0
        && (**(_DWORD **)a1 == -1
         || !CAnimationScheduler::IsWindowCurrentlyAnimating(
               *((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 24),
               *(HWND *)(a2 + 40),
               **(_DWORD **)a1,
               0)) )
      {
        return (unsigned int)CTransitionVisualController::_StageCloneRelative(
                               *(CTransitionVisualController **)(a1 + 8),
                               *(struct CTopLevelWindow **)(a2 + 384),
                               **(struct CVisual ***)(a1 + 16),
                               0,
                               0LL,
                               0,
                               **(_BYTE **)(a1 + 24),
                               1,
                               *(bool **)(a1 + 32));
      }
    }
  }
  return v4;
}
