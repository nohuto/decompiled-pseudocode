/*
 * XREFs of ?StopStoryboard@CTransitionVisualSet@CAnimationEngine@@QEAAXXZ @ 0x18003AE1C
 * Callers:
 *     ?NotifyAnimationCompleteAndCleanupByIndex@CAnimationEngine@@AEAAJH@Z @ 0x18003160C (-NotifyAnimationCompleteAndCleanupByIndex@CAnimationEngine@@AEAAJH@Z.c)
 *     ?ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z @ 0x180033230 (-ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z.c)
 *     ?Cleanup@CAnimationEngine@@QEAAXXZ @ 0x18008AFDC (-Cleanup@CAnimationEngine@@QEAAXXZ.c)
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

void __fastcall CAnimationEngine::CTransitionVisualSet::StopStoryboard(CAnimationEngine::CTransitionVisualSet *this)
{
  __int64 i; // rbp

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 1); i = (unsigned int)(i + 1) )
    (*(void (__fastcall **)(_QWORD))(***(_QWORD ***)(*((_QWORD *)this + 3) + 8 * i) + 8LL))(**(_QWORD **)(*((_QWORD *)this + 3) + 8 * i));
  *((_BYTE *)this + 33) = 1;
}
