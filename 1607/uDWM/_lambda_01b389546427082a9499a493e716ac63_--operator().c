/*
 * XREFs of _lambda_01b389546427082a9499a493e716ac63_::operator() @ 0x180005264
 * Callers:
 *     ??$ForEachOwnedWindow@V_lambda_01b389546427082a9499a493e716ac63_@@@CTransitionVisualController@@KAJPEBVCWindowData@@AEBV_lambda_01b389546427082a9499a493e716ac63_@@_N@Z @ 0x18000519C (--$ForEachOwnedWindow@V_lambda_01b389546427082a9499a493e716ac63_@@@CTransitionVisualController@@.c)
 * Callees:
 *     ?ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x1800053D4 (-ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222PEA_N@Z @ 0x18000E898 (-_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222P.c)
 *     ?IsWindowCurrentlyAnimating@CAnimationScheduler@@QEAA_NQEAUHWND__@@HK@Z @ 0x180010EDC (-IsWindowCurrentlyAnimating@CAnimationScheduler@@QEAA_NQEAUHWND__@@HK@Z.c)
 */

__int64 __fastcall lambda_01b389546427082a9499a493e716ac63_::operator()(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  char v6; // al

  v4 = 0;
  if ( CTransitionVisualController::ShouldCloneWindow(*(HWND *)(a2 + 40)) && (*(_DWORD *)(a2 + 100) & 0x20000000) == 0 )
  {
    v6 = *(_BYTE *)(a2 + 576);
    if ( (v6 & 4) == 0
      && (v6 & 1) != 0
      && (**(_DWORD **)a1 == -1
       || !CAnimationScheduler::IsWindowCurrentlyAnimating(
             *((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 22),
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
  return v4;
}
