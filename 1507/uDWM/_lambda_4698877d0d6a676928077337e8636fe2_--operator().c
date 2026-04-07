/*
 * XREFs of _lambda_4698877d0d6a676928077337e8636fe2_::operator() @ 0x180001AD4
 * Callers:
 *     ??$ForEachOwnedWindow@V_lambda_4698877d0d6a676928077337e8636fe2_@@@CTransitionVisualController@@KAJPEBVCWindowData@@AEBV_lambda_4698877d0d6a676928077337e8636fe2_@@_N@Z @ 0x180001A0C (--$ForEachOwnedWindow@V_lambda_4698877d0d6a676928077337e8636fe2_@@@CTransitionVisualController@@.c)
 * Callees:
 *     ?ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x180001C40 (-ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?IsWindowCurrentlyAnimating@CAnimationScheduler@@QEAA_NQEAUHWND__@@HK@Z @ 0x18000C59C (-IsWindowCurrentlyAnimating@CAnimationScheduler@@QEAA_NQEAUHWND__@@HK@Z.c)
 *     ?_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222PEA_N@Z @ 0x18000EE7C (-_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222P.c)
 */

__int64 __fastcall lambda_4698877d0d6a676928077337e8636fe2_::operator()(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  char v6; // al

  v4 = 0;
  if ( CTransitionVisualController::ShouldCloneWindow(*(HWND *)(a2 + 40)) && (*(_DWORD *)(a2 + 100) & 0x20000000) == 0 )
  {
    v6 = *(_BYTE *)(a2 + 552);
    if ( (v6 & 4) == 0
      && (v6 & 1) != 0
      && (**(_DWORD **)a1 == -1
       || !CAnimationScheduler::IsWindowCurrentlyAnimating(
             *((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 24),
             *(HWND *)(a2 + 40),
             **(_DWORD **)a1,
             0)) )
    {
      return (unsigned int)CTransitionVisualController::_StageCloneRelative(
                             *(CTransitionVisualController **)(a1 + 8),
                             *(struct CTopLevelWindow **)(a2 + 368),
                             **(struct CVisual ***)(a1 + 16),
                             0,
                             0LL,
                             0,
                             **(_BYTE **)(a1 + 24),
                             1,
                             *(bool **)(a1 + 32));
    }
  }
  return v4;
}
