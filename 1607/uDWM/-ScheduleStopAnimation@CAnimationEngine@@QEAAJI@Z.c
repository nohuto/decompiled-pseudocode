/*
 * XREFs of ?ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z @ 0x180013188
 * Callers:
 *     ?ScheduleStopAnimation@CStoryboard@@QEAAJXZ @ 0x1800041FC (-ScheduleStopAnimation@CStoryboard@@QEAAJXZ.c)
 *     ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x18000E6C0 (-CleanupTransition@CTransitionVisualController@@QEAAJXZ.c)
 *     ?_CleanupAnimation@CLoginTransition@@AEAAXXZ @ 0x18003A144 (-_CleanupAnimation@CLoginTransition@@AEAAXXZ.c)
 *     ?Stop@CScreenRotation@@QEAAX_N@Z @ 0x180090DA4 (-Stop@CScreenRotation@@QEAAX_N@Z.c)
 *     ?CleanupAnimation@CAccentTransition@@QEAAXXZ @ 0x180096104 (-CleanupAnimation@CAccentTransition@@QEAAXXZ.c)
 *     ?_CleanupAnimation@CThumbnailTransition@@AEAAXXZ @ 0x1800988A0 (-_CleanupAnimation@CThumbnailTransition@@AEAAXXZ.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180010F54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetTransitionVisualSetIndex@CAnimationEngine@@AEAAHI@Z @ 0x180010F7C (-GetTransitionVisualSetIndex@CAnimationEngine@@AEAAHI@Z.c)
 *     ?StopStoryboard@CTransitionVisualSet@CAnimationEngine@@QEAAXXZ @ 0x18003F3F8 (-StopStoryboard@CTransitionVisualSet@CAnimationEngine@@QEAAXXZ.c)
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
