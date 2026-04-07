/*
 * XREFs of ?StopStoryboard@CTransitionVisualSet@CAnimationEngine@@QEAAXXZ @ 0x18003F3F8
 * Callers:
 *     ?NotifyAnimationCompleteAndCleanupByIndex@CAnimationEngine@@AEAAJH@Z @ 0x180011710 (-NotifyAnimationCompleteAndCleanupByIndex@CAnimationEngine@@AEAAJH@Z.c)
 *     ?ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z @ 0x180013188 (-ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z.c)
 *     ?Cleanup@CAnimationEngine@@QEAAXXZ @ 0x18008D96C (-Cleanup@CAnimationEngine@@QEAAXXZ.c)
 * Callees:
 *     ?OnStoryboardEnd@CAnimatedTransitionVisual@@UEAAJXZ @ 0x180013470 (-OnStoryboardEnd@CAnimatedTransitionVisual@@UEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAnimationEngine::CTransitionVisualSet::StopStoryboard(CAnimationEngine::CTransitionVisualSet *this)
{
  __int64 i; // rbx
  CAnimatedTransitionVisual *v3; // rcx
  void (*v4)(void); // rax

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 1); i = (unsigned int)(i + 1) )
  {
    v3 = **(CAnimatedTransitionVisual ***)(*((_QWORD *)this + 3) + 8 * i);
    v4 = *(void (**)(void))(*(_QWORD *)v3 + 8LL);
    if ( (char *)v4 == (char *)CAnimatedTransitionVisual::OnStoryboardEnd )
      CAnimatedTransitionVisual::OnStoryboardEnd(v3);
    else
      v4();
  }
  *((_BYTE *)this + 33) = 1;
}
