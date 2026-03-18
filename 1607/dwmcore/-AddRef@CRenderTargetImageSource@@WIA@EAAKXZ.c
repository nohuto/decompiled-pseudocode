/*
 * XREFs of ?AddRef@CRenderTargetImageSource@@WIA@EAAKXZ @ 0x1800BFFA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRenderTargetImageSource::AddRef(__int64 a1)
{
  return CArrayBasedCoverageSet::AddRef((CArrayBasedCoverageSet *)(a1 - 128));
}
