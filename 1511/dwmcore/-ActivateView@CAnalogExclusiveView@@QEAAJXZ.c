/*
 * XREFs of ?ActivateView@CAnalogExclusiveView@@QEAAJXZ @ 0x18013B398
 * Callers:
 *     ?RegisterExclusiveView@CAnalogCompositorClient@@QEAAJPEAVCAnalogExclusiveView@@@Z @ 0x18013D558 (-RegisterExclusiveView@CAnalogCompositorClient@@QEAAJPEAVCAnalogExclusiveView@@@Z.c)
 *     ?SetActiveExclusiveView@CAnalogCompositorClient@@QEAAXI@Z @ 0x18013D6AC (-SetActiveExclusiveView@CAnalogCompositorClient@@QEAAXI@Z.c)
 * Callees:
 *     ?ActivateSwapChain@CAnalogExclusiveView@@AEAAJXZ @ 0x18013B2A8 (-ActivateSwapChain@CAnalogExclusiveView@@AEAAJXZ.c)
 */

__int64 __fastcall CAnalogExclusiveView::ActivateView(CAnalogExclusiveView *this)
{
  __int64 v1; // rax
  unsigned int v3; // ebx

  v1 = *((_QWORD *)this + 2);
  *((_BYTE *)this + 56) = 1;
  v3 = 0;
  SetEvent(*(HANDLE *)(*(_QWORD *)(v1 + 504) + 96LL));
  if ( *((_QWORD *)this + 8) )
    return (unsigned int)CAnalogExclusiveView::ActivateSwapChain(this);
  return v3;
}
