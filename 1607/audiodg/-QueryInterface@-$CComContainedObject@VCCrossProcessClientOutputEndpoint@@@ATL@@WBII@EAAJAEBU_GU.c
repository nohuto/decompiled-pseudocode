/*
 * XREFs of ?QueryInterface@?$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBII@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001A170
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComContainedObject<CCrossProcessClientOutputEndpoint>::QueryInterface(__int64 a1)
{
  return ATL::CComContainedObject<CCrossProcessServerInputEndpoint>::QueryInterface(a1 - 392);
}
