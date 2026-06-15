/*
 * XREFs of ?QueryInterface@?$CComObject@VCStreamGroup@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140013A30
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCStreamGroup@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x1400131F4 (-CreateInstance@-$CComCreator@V-$CComObject@VCStreamGroup@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX.c)
 *     ?QueryInterface@?$CComObject@VCStreamGroup@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140019E40 (-QueryInterface@-$CComObject@VCStreamGroup@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CStreamGroup>::QueryInterface(char *a1, const struct _GUID *a2, char **a3)
{
  return ATL::AtlInternalQueryInterface(
           a1,
           (const struct ATL::_ATL_INTMAP_ENTRY *)&`CStreamGroup::_GetEntries'::`2'::_entries,
           a2,
           a3);
}
