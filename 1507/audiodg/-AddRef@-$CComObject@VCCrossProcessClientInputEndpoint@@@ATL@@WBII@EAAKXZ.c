/*
 * XREFs of ?AddRef@?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBII@EAAKXZ @ 0x14001A4F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CCrossProcessClientInputEndpoint>::AddRef(__int64 a1)
{
  return ATL::CComObject<CCrossProcessClientOutputEndpoint>::AddRef(a1 - 392);
}
