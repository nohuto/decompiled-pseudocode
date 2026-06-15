/*
 * XREFs of ?QueryInterface@?$CComObject@VCSaProvider@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002E2D0
 * Callers:
 *     GetSAProvider @ 0x18002E018 (GetSAProvider.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CSaProvider>::QueryInterface(char *a1, const struct _GUID *a2, char **a3)
{
  return ATL::AtlInternalQueryInterface(
           a1,
           (const struct ATL::_ATL_INTMAP_ENTRY *)&`CSaProvider::_GetEntries'::`2'::_entries,
           a2,
           a3);
}
