/*
 * XREFs of ?IsIdle@CAnimationEngine@@QEAA_NXZ @ 0x180030F9C
 * Callers:
 *     ?_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ @ 0x18000B784 (-_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ.c)
 *     ?UpdateScene@CWindowList@@UEAAJXZ @ 0x1800298C0 (-UpdateScene@CWindowList@@UEAAJXZ.c)
 *     ?MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ @ 0x18002F63C (-MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ.c)
 *     ?OnTick@CAnimationEngine@@QEAAJNPEA_N@Z @ 0x180030FE8 (-OnTick@CAnimationEngine@@QEAAJNPEA_N@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CAnimationEngine::IsIdle(CAnimationEngine *this)
{
  char v2; // bl

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v2 = 0;
  if ( !*((_DWORD *)this + 16) || !*((_BYTE *)this + 120) )
    v2 = 1;
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v2;
}
