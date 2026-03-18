/*
 * XREFs of ?DeactivateView@CAnalogExclusiveView@@QEAAXXZ @ 0x18013B4A8
 * Callers:
 *     ?SetActiveExclusiveView@CAnalogCompositorClient@@QEAAXI@Z @ 0x18013D6AC (-SetActiveExclusiveView@CAnalogCompositorClient@@QEAAXI@Z.c)
 *     ?UnregisterExclusiveView@CAnalogCompositorClient@@QEAAXPEAVCAnalogExclusiveView@@@Z @ 0x18013D7C4 (-UnregisterExclusiveView@CAnalogCompositorClient@@QEAAXPEAVCAnalogExclusiveView@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CAnalogExclusiveView::DeactivateView(CAnalogExclusiveView *this)
{
  SetEvent(*(HANDLE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 504LL) + 96LL));
  *((_BYTE *)this + 56) = 0;
  CAnalogExclusiveView::DeactivateSwapChain(this);
}
