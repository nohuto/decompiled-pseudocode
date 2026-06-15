/*
 * XREFs of ?QueryInterface@?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140038190
 * Callers:
 *     ?QueryInterface@?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001A6D0 (-QueryInterface@-$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@.c)
 *     ?QueryInterface@?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@WBHI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001A6E0 (-QueryInterface@-$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@WBHI@EAAJAEBU_GUID@@PEAPE.c)
 *     ?QueryInterface@?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@WBLI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001A6F0 (-QueryInterface@-$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@WBLI@EAAJAEBU_GUID@@PEAPE.c)
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
