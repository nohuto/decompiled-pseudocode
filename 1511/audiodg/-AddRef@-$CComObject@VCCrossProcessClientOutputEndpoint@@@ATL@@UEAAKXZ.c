/*
 * XREFs of ?AddRef@?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAAKXZ @ 0x1400365F0
 * Callers:
 *     ?AddRef@?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@W7EAAKXZ @ 0x14001A580 (-AddRef@-$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@W7EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBHI@EAAKXZ @ 0x14001A590 (-AddRef@-$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBHI@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBIA@EAAKXZ @ 0x14001A5A0 (-AddRef@-$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBIA@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBII@EAAKXZ @ 0x14001A5B0 (-AddRef@-$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBII@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBKA@EAAKXZ @ 0x14001A5C0 (-AddRef@-$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBKA@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBLI@EAAKXZ @ 0x14001A5D0 (-AddRef@-$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBLI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CCrossProcessClientOutputEndpoint>::AddRef(__int64 a1)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 456));
}
