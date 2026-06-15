/*
 * XREFs of ?QueryInterface@?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400382B0
 * Callers:
 *     ?QueryInterface@?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001A7A0 (-QueryInterface@-$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@.c)
 *     ?QueryInterface@?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@WBHI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001A7B0 (-QueryInterface@-$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@WBHI@EAAJAEBU_GUID@@PEAPE.c)
 *     ?QueryInterface@?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@WBLI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001A7C0 (-QueryInterface@-$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@WBLI@EAAJAEBU_GUID@@PEAPE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CCrossProcessServerOutputEndpoint>::QueryInterface(
        char *a1,
        const struct _GUID *a2,
        char **a3)
{
  return ATL::AtlInternalQueryInterface(
           a1,
           (const struct ATL::_ATL_INTMAP_ENTRY *)&`CCrossProcessServerOutputEndpoint::_GetEntries'::`2'::_entries,
           a2,
           a3);
}
