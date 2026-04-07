/*
 * XREFs of ?AbortAllAnimations@CAnimationScheduler@@QEAAXXZ @ 0x180010BDC
 * Callers:
 *     ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x18002D4D0 (-SwitchDesktop@CWindowList@@UEAAJK_K@Z.c)
 *     ?DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z @ 0x180030654 (-DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z.c)
 *     ?HandleHardwareExpressionActivation@CWindowList@@AEAAJK@Z @ 0x1800811D8 (-HandleHardwareExpressionActivation@CWindowList@@AEAAJK@Z.c)
 *     ?RotationModeChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE@@@Z @ 0x180081CE8 (-RotationModeChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE@@@Z.c)
 *     ?OnGlobalTimeUpdated@CScreenRotation@@MEAAJXZ @ 0x1800907D0 (-OnGlobalTimeUpdated@CScreenRotation@@MEAAJXZ.c)
 *     ?SkipAnimationDelays@CScreenRotation@@QEAAJXZ @ 0x180090C60 (-SkipAnimationDelays@CScreenRotation@@QEAAJXZ.c)
 *     ?Start@CScreenRotation@@QEAAJXZ @ 0x180090D34 (-Start@CScreenRotation@@QEAAJXZ.c)
 * Callees:
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x18000436C (-Abandon@CStoryboard@@QEAAXXZ.c)
 *     ?_CleanupTransition@CAnimationScheduler@@AEAAXXZ @ 0x180010620 (-_CleanupTransition@CAnimationScheduler@@AEAAXXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180010F54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 */

void __fastcall CAnimationScheduler::AbortAllAnimations(CAnimationScheduler *this)
{
  __int64 v2; // rdx
  __int64 i; // rbx
  struct _RTL_CRITICAL_SECTION *v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 10); i = (unsigned int)(i + 1) )
    CStoryboard::Abandon(*(struct _GUID **)(*((_QWORD *)this + 2) + 8 * i));
  CAnimationScheduler::_CleanupTransition(this, v2);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v4);
}
