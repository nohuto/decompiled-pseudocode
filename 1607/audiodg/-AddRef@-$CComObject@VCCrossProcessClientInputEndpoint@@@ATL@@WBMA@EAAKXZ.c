/*
 * XREFs of ?AddRef@?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBMA@EAAKXZ @ 0x14001A0F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall ATL::CComObject<CCrossProcessClientInputEndpoint>::AddRef(__int64 a1, volatile int *a2)
{
  return ATL::CComObject<CCrossProcessServerOutputEndpoint>::AddRef(a1 - 448, a2);
}
