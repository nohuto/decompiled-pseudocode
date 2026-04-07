/*
 * XREFs of ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x18001116C
 * Callers:
 *     ?_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ @ 0x18000B784 (-_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ.c)
 *     ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x18000ECAC (-CleanupTransition@CTransitionVisualController@@QEAAJXZ.c)
 *     ?ScheduleStartAnimation@CStoryboard@@QEAAJXZ @ 0x18000FCE4 (-ScheduleStartAnimation@CStoryboard@@QEAAJXZ.c)
 *     ?UpdateScene@CWindowList@@UEAAJXZ @ 0x1800298C0 (-UpdateScene@CWindowList@@UEAAJXZ.c)
 *     ?MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ @ 0x18002F63C (-MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ.c)
 *     ?_CleanupAnimation@CLoginTransition@@AEAAXXZ @ 0x18003C8A4 (-_CleanupAnimation@CLoginTransition@@AEAAXXZ.c)
 *     ?StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z @ 0x18003CA5C (-StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z.c)
 *     ?OnAnimationComplete@CTransitionVisualController@@UEAAJI@Z @ 0x18008CDE0 (-OnAnimationComplete@CTransitionVisualController@@UEAAJI@Z.c)
 *     ?MidDelayExpired@CScreenRotation@@AEAAJXZ @ 0x18008E54C (-MidDelayExpired@CScreenRotation@@AEAAJXZ.c)
 *     ?PreDelayExpired@CScreenRotation@@AEAAJXZ @ 0x18008E95C (-PreDelayExpired@CScreenRotation@@AEAAJXZ.c)
 *     ?Stop@CScreenRotation@@QEAAX_N@Z @ 0x18008EEC8 (-Stop@CScreenRotation@@QEAAX_N@Z.c)
 *     ?ScheduleStopAnimation@CStoryboard@@QEAAJXZ @ 0x1800921A8 (-ScheduleStopAnimation@CStoryboard@@QEAAJXZ.c)
 *     ?CleanupAnimation@CAccentTransition@@QEAAXXZ @ 0x180097BF8 (-CleanupAnimation@CAccentTransition@@QEAAXXZ.c)
 *     ?StartAnimation@CAccentTransition@@QEAAJPEBUACCENT_POLICY@@PEAVCAccent@@@Z @ 0x180097C9C (-StartAnimation@CAccentTransition@@QEAAJPEBUACCENT_POLICY@@PEAVCAccent@@@Z.c)
 *     ?StartAnimation@CThumbnailTransition@@QEAAJPEAVCThumbnailAnimatedVisual@@H@Z @ 0x18009A25C (-StartAnimation@CThumbnailTransition@@QEAAJPEAVCThumbnailAnimatedVisual@@H@Z.c)
 *     ?_CleanupAnimation@CThumbnailTransition@@AEAAXXZ @ 0x18009A420 (-_CleanupAnimation@CThumbnailTransition@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

struct CAnimationEngine *CDesktopManager::AcquireAnimationEngine(void)
{
  CDesktopManager *v0; // rax
  __int64 v1; // rcx

  v0 = CDesktopManager::s_pDesktopManagerInstance;
  v1 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22);
  if ( v1 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v1 + 116));
    v0 = CDesktopManager::s_pDesktopManagerInstance;
  }
  return (struct CAnimationEngine *)*((_QWORD *)v0 + 22);
}
