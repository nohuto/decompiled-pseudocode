/*
 * XREFs of ?CleanupAnimation@CAccentTransition@@QEAAXXZ @ 0x1800992B4
 * Callers:
 *     ?StartAnimation@CAccentTransition@@QEAAJPEBUACCENT_POLICY@@PEAVCAccent@@@Z @ 0x18009935C (-StartAnimation@CAccentTransition@@QEAAJPEBUACCENT_POLICY@@PEAVCAccent@@@Z.c)
 *     ?StopAnimation@CAccentTransition@@QEAAXXZ @ 0x1800995FC (-StopAnimation@CAccentTransition@@QEAAXXZ.c)
 * Callees:
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x180036E40 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?UnregisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x180038948 (-UnregisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z.c)
 *     ?ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z @ 0x180038BEC (-ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x180040AFC (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 */

void __fastcall CAccentTransition::CleanupAnimation(CAccentTransition *this)
{
  CAnimationEngine *v2; // rax
  CAnimationEngine *v3; // rdi
  unsigned int v4; // edx

  v2 = CDesktopManager::AcquireAnimationEngine();
  v3 = v2;
  if ( v2 )
  {
    CAnimationEngine::UnregisterForAnimationCompleteNotification(v2, this);
    CAnimationEngine::ScheduleStopAnimation(v3, *((_DWORD *)this + 9));
    CAnimationEngine::Release(v3, v4);
  }
  *((_DWORD *)this + 9) = -1;
  *((_BYTE *)this + 32) = 0;
}
