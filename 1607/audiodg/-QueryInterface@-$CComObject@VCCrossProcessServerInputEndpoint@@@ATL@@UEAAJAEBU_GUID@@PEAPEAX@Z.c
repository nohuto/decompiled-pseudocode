/*
 * XREFs of ?QueryInterface@?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140011680
 * Callers:
 *     ??0?$CComQIPtr@UIAudioCrossProcessServerEndpoint@@$1?_GUID_1d1bf0fb_6622_4a68_a04a_312d410a34bc@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x140011D70 (--0-$CComQIPtr@UIAudioCrossProcessServerEndpoint@@$1-_GUID_1d1bf0fb_6622_4a68_a04a_312d410a34bc@.c)
 *     ?QueryInterface@?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001A290 (-QueryInterface@-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@WBHI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001A2A0 (-QueryInterface@-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@WBHI@EAAJAEBU_GUID@@PEAPEA.c)
 *     ?QueryInterface@?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@WBLI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001A2B0 (-QueryInterface@-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@WBLI@EAAJAEBU_GUID@@PEAPEA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CCrossProcessServerInputEndpoint>::QueryInterface(
        char *a1,
        const struct _GUID *a2,
        char **a3)
{
  return ATL::AtlInternalQueryInterface(
           a1,
           (const struct ATL::_ATL_INTMAP_ENTRY *)&`CCrossProcessServerInputEndpoint::_GetEntries'::`2'::_entries,
           a2,
           a3);
}
