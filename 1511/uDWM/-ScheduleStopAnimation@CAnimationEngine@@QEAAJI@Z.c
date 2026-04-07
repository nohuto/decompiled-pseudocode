/*
 * XREFs of ?ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z @ 0x180038BEC
 * Callers:
 *     ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x18000A8F0 (-CleanupTransition@CTransitionVisualController@@QEAAJXZ.c)
 *     ?_CleanupAnimation@CLoginTransition@@AEAAXXZ @ 0x180040338 (-_CleanupAnimation@CLoginTransition@@AEAAXXZ.c)
 *     ?Stop@CScreenRotation@@QEAAX_N@Z @ 0x180092438 (-Stop@CScreenRotation@@QEAAX_N@Z.c)
 *     ?ScheduleStopAnimation@CStoryboard@@QEAAJXZ @ 0x180094B58 (-ScheduleStopAnimation@CStoryboard@@QEAAJXZ.c)
 *     ?CleanupAnimation@CAccentTransition@@QEAAXXZ @ 0x1800992B4 (-CleanupAnimation@CAccentTransition@@QEAAXXZ.c)
 *     ?_CleanupAnimation@CThumbnailTransition@@AEAAXXZ @ 0x18009BB10 (-_CleanupAnimation@CThumbnailTransition@@AEAAXXZ.c)
 * Callees:
 *     ?GetTransitionVisualSetIndex@CAnimationEngine@@AEAAHI@Z @ 0x1800367D4 (-GetTransitionVisualSetIndex@CAnimationEngine@@AEAAHI@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038FB0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?StopStoryboard@CTransitionVisualSet@CAnimationEngine@@QEAAXXZ @ 0x1800393D4 (-StopStoryboard@CTransitionVisualSet@CAnimationEngine@@QEAAXXZ.c)
 */

__int64 __fastcall CAnimationEngine::ScheduleStopAnimation(CAnimationEngine *this, int a2)
{
  unsigned int v4; // edi
  int TransitionVisualSetIndex; // eax
  struct _RTL_CRITICAL_SECTION *v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0;
  TransitionVisualSetIndex = CAnimationEngine::GetTransitionVisualSetIndex(this, a2);
  if ( TransitionVisualSetIndex < 0 )
    v4 = -2147467259;
  else
    CAnimationEngine::CTransitionVisualSet::StopStoryboard(*(CAnimationEngine::CTransitionVisualSet **)(*((_QWORD *)this + 5) + 8LL * (unsigned int)TransitionVisualSetIndex));
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v7);
  return v4;
}
