/*
 * XREFs of ?QueryInterface@?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140013EA0
 * Callers:
 *     ?OnConnectedToPump@CPipeInstance@@QEAAX_J0@Z @ 0x1400044C0 (-OnConnectedToPump@CPipeInstance@@QEAAX_J0@Z.c)
 *     ?QueryInterface@?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001A6A0 (-QueryInterface@-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@WBHI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001A6B0 (-QueryInterface@-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@WBHI@EAAJAEBU_GUID@@PEAPEA.c)
 *     ?QueryInterface@?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@WBLI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001A6C0 (-QueryInterface@-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@WBLI@EAAJAEBU_GUID@@PEAPEA.c)
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
