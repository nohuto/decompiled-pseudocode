/*
 * XREFs of ?QueryInterface@?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140037260
 * Callers:
 *     ?QueryInterface@?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001A1D0 (-QueryInterface@-$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBHI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001A1E0 (-QueryInterface@-$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBHI@EAAJAEBU_GUID@@PEAPEA.c)
 *     ?QueryInterface@?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBIA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001A1F0 (-QueryInterface@-$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBIA@EAAJAEBU_GUID@@PEAPEA.c)
 *     ?QueryInterface@?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBII@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001A200 (-QueryInterface@-$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBII@EAAJAEBU_GUID@@PEAPEA.c)
 *     ?QueryInterface@?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBKI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001A210 (-QueryInterface@-$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBKI@EAAJAEBU_GUID@@PEAPEA.c)
 *     ?QueryInterface@?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBMA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001A220 (-QueryInterface@-$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBMA@EAAJAEBU_GUID@@PEAPEA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CCrossProcessClientInputEndpoint>::QueryInterface(
        char *a1,
        const struct _GUID *a2,
        char **a3)
{
  return ATL::AtlInternalQueryInterface(
           a1,
           (const struct ATL::_ATL_INTMAP_ENTRY *)&`CCrossProcessClientInputEndpoint::_GetEntries'::`2'::_entries,
           a2,
           a3);
}
