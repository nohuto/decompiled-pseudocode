/*
 * XREFs of ?AddRef@?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@W7EAAKXZ @ 0x14001A100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall ATL::CComObject<CCrossProcessClientInputEndpoint>::AddRef(__int64 a1, volatile int *a2)
{
  return ATL::CComObject<CCrossProcessServerOutputEndpoint>::AddRef(a1 - 8, a2);
}
