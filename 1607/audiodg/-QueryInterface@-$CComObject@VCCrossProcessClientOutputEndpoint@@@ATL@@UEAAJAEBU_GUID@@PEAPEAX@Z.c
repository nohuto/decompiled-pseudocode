/*
 * XREFs of ?QueryInterface@?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140037280
 * Callers:
 *     ?QueryInterface@?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001A230 (-QueryInterface@-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@.c)
 *     ?QueryInterface@?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBHI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001A240 (-QueryInterface@-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBHI@EAAJAEBU_GUID@@PEAPE.c)
 *     ?QueryInterface@?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBIA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001A250 (-QueryInterface@-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBIA@EAAJAEBU_GUID@@PEAPE.c)
 *     ?QueryInterface@?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBII@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001A260 (-QueryInterface@-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBII@EAAJAEBU_GUID@@PEAPE.c)
 *     ?QueryInterface@?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBKI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001A270 (-QueryInterface@-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBKI@EAAJAEBU_GUID@@PEAPE.c)
 *     ?QueryInterface@?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBMA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001A280 (-QueryInterface@-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBMA@EAAJAEBU_GUID@@PEAPE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CCrossProcessClientOutputEndpoint>::QueryInterface(
        char *a1,
        const struct _GUID *a2,
        char **a3)
{
  return ATL::AtlInternalQueryInterface(
           a1,
           (const struct ATL::_ATL_INTMAP_ENTRY *)&`CCrossProcessClientOutputEndpoint::_GetEntries'::`2'::_entries,
           a2,
           a3);
}
