/*
 * XREFs of ?AddRef@CRenderTargetImageSource@@W7EAAKXZ @ 0x1800BFF70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRenderTargetImageSource::AddRef(__int64 a1)
{
  return CArrayBasedCoverageSet::AddRef((CArrayBasedCoverageSet *)(a1 - 8));
}
