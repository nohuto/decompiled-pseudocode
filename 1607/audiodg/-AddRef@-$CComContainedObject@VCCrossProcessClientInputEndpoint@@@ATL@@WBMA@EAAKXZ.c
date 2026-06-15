/*
 * XREFs of ?AddRef@?$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBMA@EAAKXZ @ 0x14001A090
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComContainedObject<CCrossProcessClientInputEndpoint>::AddRef(__int64 a1)
{
  return ATL::CComContainedObject<CCrossProcessServerOutputEndpoint>::AddRef(a1 - 448);
}
