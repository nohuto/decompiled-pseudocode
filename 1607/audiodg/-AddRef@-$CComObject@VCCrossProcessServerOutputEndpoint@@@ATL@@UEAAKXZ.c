/*
 * XREFs of ?AddRef@?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAAKXZ @ 0x140011660
 * Callers:
 *     ?AtlInternalQueryInterface@ATL@@YAJPEAXPEBU_ATL_INTMAP_ENTRY@1@AEBU_GUID@@PEAPEAX@Z @ 0x140010C30 (-AtlInternalQueryInterface@ATL@@YAJPEAXPEBU_ATL_INTMAP_ENTRY@1@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?privateCreateCrossProcessEndpoint@@YAJU_GUID@@0W4EP_INTERFACE_TYPE@@PEAPEAUIAudioEndpointRT@@PEAPEAUIAudioEndpoint@@@Z @ 0x1400150B4 (-privateCreateCrossProcessEndpoint@@YAJU_GUID@@0W4EP_INTERFACE_TYPE@@PEAPEAUIAudioEndpointRT@@PE.c)
 *     ?AddRef@?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBII@EAAKXZ @ 0x14001A0E0 (-AddRef@-$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBII@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBMA@EAAKXZ @ 0x14001A0F0 (-AddRef@-$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBMA@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@W7EAAKXZ @ 0x14001A100 (-AddRef@-$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@W7EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBHI@EAAKXZ @ 0x14001A110 (-AddRef@-$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBHI@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBIA@EAAKXZ @ 0x14001A120 (-AddRef@-$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBIA@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBKI@EAAKXZ @ 0x14001A130 (-AddRef@-$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBKI@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@WBLI@EAAKXZ @ 0x14001A140 (-AddRef@-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@WBLI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall ATL::CComObject<CCrossProcessServerOutputEndpoint>::AddRef(__int64 a1, volatile int *a2)
{
  return Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(a1 + 464), a2);
}
