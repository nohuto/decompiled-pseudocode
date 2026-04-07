/*
 * XREFs of ?OnEndTransitionRequest@CDialogSwitch@@UEAAJXZ @ 0x180092BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnEndTransitionRequest@CStoryboard@@UEAAJXZ @ 0x18000F3D0 (-OnEndTransitionRequest@CStoryboard@@UEAAJXZ.c)
 *     ?AbandonTransition@CAnimationScheduler@@QEAAJH@Z @ 0x18001065C (-AbandonTransition@CAnimationScheduler@@QEAAJH@Z.c)
 */

__int64 __fastcall CDialogSwitch::OnEndTransitionRequest(struct _GUID *this)
{
  unsigned int v1; // ebx

  v1 = CStoryboard::OnEndTransitionRequest(this);
  CAnimationScheduler::AbandonTransition(*((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 22), 18);
  return v1;
}
