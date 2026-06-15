/*
 * XREFs of ?AddRef@?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@WBHI@EAAKXZ @ 0x14001A5F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CCrossProcessServerInputEndpoint>::AddRef(__int64 a1)
{
  return ATL::CComObject<CCrossProcessServerOutputEndpoint>::AddRef(a1 - 376);
}
