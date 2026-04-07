/*
 * XREFs of ?StopStoryboard@CTransitionVisualSet@CAnimationEngine@@QEAAXXZ @ 0x1800393D4
 * Callers:
 *     ?NotifyAnimationCompleteAndCleanupByIndex@CAnimationEngine@@AEAAJH@Z @ 0x180036FCC (-NotifyAnimationCompleteAndCleanupByIndex@CAnimationEngine@@AEAAJH@Z.c)
 *     ?ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z @ 0x180038BEC (-ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z.c)
 *     ?Cleanup@CAnimationEngine@@QEAAXXZ @ 0x18008EAAC (-Cleanup@CAnimationEngine@@QEAAXXZ.c)
 * Callees:
 *     ?OnStoryboardEnd@CAnimatedTransitionVisual@@UEAAJXZ @ 0x180039B10 (-OnStoryboardEnd@CAnimatedTransitionVisual@@UEAAJXZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

void __fastcall CAnimationEngine::CTransitionVisualSet::StopStoryboard(CAnimationEngine::CTransitionVisualSet *this)
{
  __int64 i; // rbx
  CAnimatedTransitionVisual **v3; // rcx
  __int64 (__fastcall *v4)(CAnimatedTransitionVisual *__hidden); // rbp

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 1); i = (unsigned int)(i + 1) )
  {
    v3 = *(CAnimatedTransitionVisual ***)(*((_QWORD *)this + 3) + 8 * i);
    v4 = *(__int64 (__fastcall **)(CAnimatedTransitionVisual *__hidden))(*(_QWORD *)*v3 + 8LL);
    if ( v4 == CAnimatedTransitionVisual::OnStoryboardEnd )
      CAnimatedTransitionVisual::OnStoryboardEnd(*v3);
    else
      v4(*v3);
  }
  *((_BYTE *)this + 33) = 1;
}
