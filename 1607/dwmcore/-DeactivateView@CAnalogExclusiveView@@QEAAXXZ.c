/*
 * XREFs of ?DeactivateView@CAnalogExclusiveView@@QEAAXXZ @ 0x180165670
 * Callers:
 *     ?SetActiveExclusiveView@CAnalogCompositorClient@@QEAAXI@Z @ 0x1801676B8 (-SetActiveExclusiveView@CAnalogCompositorClient@@QEAAXI@Z.c)
 *     ?UnregisterExclusiveView@CAnalogCompositorClient@@QEAAXPEAVCAnalogExclusiveView@@@Z @ 0x1801677B4 (-UnregisterExclusiveView@CAnalogCompositorClient@@QEAAXPEAVCAnalogExclusiveView@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CAnalogExclusiveView::DeactivateView(CAnalogExclusiveView *this)
{
  SetEvent(*(HANDLE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 512LL) + 96LL));
  *((_BYTE *)this + 128) = 0;
  CAnalogExclusiveView::DeactivateSwapChain(this);
}
