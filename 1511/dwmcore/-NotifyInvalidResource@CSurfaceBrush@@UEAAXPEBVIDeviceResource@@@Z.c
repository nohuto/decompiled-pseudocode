/*
 * XREFs of ?NotifyInvalidResource@CSurfaceBrush@@UEAAXPEBVIDeviceResource@@@Z @ 0x180122340
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CSurfaceBrush::NotifyInvalidResource(CSurfaceBrush *this, const struct IDeviceResource *a2)
{
  CSurfaceBrush::ReleaseResources((CSurfaceBrush *)((char *)this - 48));
}
