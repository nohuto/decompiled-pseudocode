/*
 * XREFs of ?ActivateView@CAnalogExclusiveView@@QEAAJXZ @ 0x180165534
 * Callers:
 *     ?RegisterExclusiveView@CAnalogCompositorClient@@QEAAJPEAVCAnalogExclusiveView@@@Z @ 0x180167574 (-RegisterExclusiveView@CAnalogCompositorClient@@QEAAJPEAVCAnalogExclusiveView@@@Z.c)
 *     ?SetActiveExclusiveView@CAnalogCompositorClient@@QEAAXI@Z @ 0x1801676B8 (-SetActiveExclusiveView@CAnalogCompositorClient@@QEAAXI@Z.c)
 * Callees:
 *     ?ActivateSwapChain@CAnalogExclusiveView@@AEAAJXZ @ 0x180165444 (-ActivateSwapChain@CAnalogExclusiveView@@AEAAJXZ.c)
 */

__int64 __fastcall CAnalogExclusiveView::ActivateView(CAnalogExclusiveView *this)
{
  __int64 v1; // rax
  unsigned int v3; // ebx

  v1 = *((_QWORD *)this + 2);
  *((_BYTE *)this + 128) = 1;
  v3 = 0;
  SetEvent(*(HANDLE *)(*(_QWORD *)(v1 + 512) + 96LL));
  if ( *((_QWORD *)this + 17) )
    return (unsigned int)CAnalogExclusiveView::ActivateSwapChain(this);
  return v3;
}
