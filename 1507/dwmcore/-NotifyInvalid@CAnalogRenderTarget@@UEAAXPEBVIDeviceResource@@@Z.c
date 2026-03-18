/*
 * XREFs of ?NotifyInvalid@CAnalogRenderTarget@@UEAAXPEBVIDeviceResource@@@Z @ 0x1801266B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAnalogRenderTarget::NotifyInvalid(CAnalogRenderTarget *this, const struct IDeviceResource *a2)
{
  CAnalogRenderTarget::UnregisterSwapChain((CAnalogRenderTarget *)((char *)this - 80));
}
