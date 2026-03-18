/*
 * XREFs of ?NotifyOfDwmTermination@CCompositionBuffer@@UEAAXXZ @ 0x1C00F3C40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CCompositionBuffer::NotifyOfDwmTermination(CRegion **this)
{
  CRegion::SetFullRegion(this[32]);
}
