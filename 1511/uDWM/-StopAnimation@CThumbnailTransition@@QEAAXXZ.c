/*
 * XREFs of ?StopAnimation@CThumbnailTransition@@QEAAXXZ @ 0x18009BA84
 * Callers:
 *     ?_UpdateAnimatedProperties@CThumbnailVisual@@AEAAJK@Z @ 0x180018B7C (-_UpdateAnimatedProperties@CThumbnailVisual@@AEAAJK@Z.c)
 *     ??_GCThumbnailTransition@@UEAAPEAXI@Z @ 0x18009B5C0 (--_GCThumbnailTransition@@UEAAPEAXI@Z.c)
 *     ?OnAnimationComplete@CThumbnailTransition@@UEAAJI@Z @ 0x18009B7F0 (-OnAnimationComplete@CThumbnailTransition@@UEAAJI@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038FB0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?_CleanupAnimation@CThumbnailTransition@@AEAAXXZ @ 0x18009BB10 (-_CleanupAnimation@CThumbnailTransition@@AEAAXXZ.c)
 */

void __fastcall CThumbnailTransition::StopAnimation(CThumbnailTransition *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( *((_BYTE *)this + 36) )
  {
    *((_BYTE *)this + 36) = 0;
    CThumbnailTransition::_CleanupAnimation(this);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v2);
}
