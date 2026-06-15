/*
 * XREFs of ?QueryInterface@?$CComObject@VCVpoContext@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140016790
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCVpoContext@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140017A54 (-CreateInstance@-$CComCreator@V-$CComObject@VCVpoContext@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CVpoContext>::QueryInterface(char *a1, const struct _GUID *a2, char **a3)
{
  return ATL::AtlInternalQueryInterface(
           a1,
           (const struct ATL::_ATL_INTMAP_ENTRY *)&`CVpoContext::_GetEntries'::`2'::_entries,
           a2,
           a3);
}
