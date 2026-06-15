/*
 * XREFs of ?QueryInterface@?$CComObject@VCVADServer@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800888A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CVADServer>::QueryInterface(char *a1, const struct _GUID *a2, char **a3)
{
  return ATL::AtlInternalQueryInterface(
           a1,
           (const struct ATL::_ATL_INTMAP_ENTRY *)&`CVADServer::_GetEntries'::`2'::_entries,
           a2,
           a3);
}
