/*
 * XREFs of ?NotifyInvalid@CAnalogExclusiveView@@UEAAXPEBVIDeviceResource@@@Z @ 0x180165720
 * Callers:
 *     <none>
 * Callees:
 *     ?DeactivateSwapChain@CAnalogExclusiveView@@AEAAXXZ @ 0x180165588 (-DeactivateSwapChain@CAnalogExclusiveView@@AEAAXXZ.c)
 */

void __fastcall CAnalogExclusiveView::NotifyInvalid(CAnalogExclusiveView *this, const struct IDeviceResource *a2)
{
  CAnalogExclusiveView *v2; // rbx

  v2 = (CAnalogExclusiveView *)((char *)this - 112);
  CAnalogExclusiveView::DeactivateSwapChain((CAnalogExclusiveView *)((char *)this - 112));
  CAnalogExclusiveView::ReleaseSwapChain(v2);
}
