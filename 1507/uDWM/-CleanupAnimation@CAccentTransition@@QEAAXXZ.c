/*
 * XREFs of ?CleanupAnimation@CAccentTransition@@QEAAXXZ @ 0x180097BF8
 * Callers:
 *     ?StartAnimation@CAccentTransition@@QEAAJPEBUACCENT_POLICY@@PEAVCAccent@@@Z @ 0x180097C9C (-StartAnimation@CAccentTransition@@QEAAJPEBUACCENT_POLICY@@PEAVCAccent@@@Z.c)
 *     ?StopAnimation@CAccentTransition@@QEAAXXZ @ 0x180097F3C (-StopAnimation@CAccentTransition@@QEAAXXZ.c)
 * Callees:
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x18001116C (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x180031480 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?UnregisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x180032F8C (-UnregisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z.c)
 *     ?ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z @ 0x180033230 (-ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z.c)
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
