/*
 * XREFs of ?NotifyInvalid@CAnalogExclusiveView@@UEAAXPEBVIDeviceResource@@@Z @ 0x18013B540
 * Callers:
 *     <none>
 * Callees:
 *     ?DeactivateSwapChain@CAnalogExclusiveView@@AEAAXXZ @ 0x18013B3E4 (-DeactivateSwapChain@CAnalogExclusiveView@@AEAAXXZ.c)
 */

void __fastcall CAnalogExclusiveView::NotifyInvalid(CAnalogExclusiveView *this, const struct IDeviceResource *a2)
{
  CAnalogExclusiveView *v2; // rbx

  v2 = (CAnalogExclusiveView *)((char *)this - 40);
  CAnalogExclusiveView::DeactivateSwapChain((CAnalogExclusiveView *)((char *)this - 40));
  CAnalogExclusiveView::ReleaseSwapChain(v2);
}
