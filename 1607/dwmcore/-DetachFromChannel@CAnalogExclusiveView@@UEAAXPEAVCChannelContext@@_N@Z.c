/*
 * XREFs of ?DetachFromChannel@CAnalogExclusiveView@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1801656B0
 * Callers:
 *     <none>
 * Callees:
 *     ?DeactivateSwapChain@CAnalogExclusiveView@@AEAAXXZ @ 0x180165588 (-DeactivateSwapChain@CAnalogExclusiveView@@AEAAXXZ.c)
 *     ?ReleaseSwapChain@CAnalogExclusiveView@@AEAAXXZ @ 0x180165AEC (-ReleaseSwapChain@CAnalogExclusiveView@@AEAAXXZ.c)
 *     ?UnregisterExclusiveView@CAnalogCompositorClient@@QEAAXPEAVCAnalogExclusiveView@@@Z @ 0x1801677B4 (-UnregisterExclusiveView@CAnalogCompositorClient@@QEAAXPEAVCAnalogExclusiveView@@@Z.c)
 */

void __fastcall CAnalogExclusiveView::DetachFromChannel(CAnalogExclusiveView *this, struct CChannelContext *a2)
{
  CAnalogCompositorClient *v3; // rcx
  void *v4; // rcx

  CAnalogExclusiveView::DeactivateSwapChain(this);
  CAnalogExclusiveView::ReleaseSwapChain(this);
  CAnalogCompositorClient::UnregisterExclusiveView(v3, this);
  v4 = (void *)*((_QWORD *)this + 20);
  if ( v4 )
  {
    CloseHandle(v4);
    *((_QWORD *)this + 20) = 0LL;
  }
}
