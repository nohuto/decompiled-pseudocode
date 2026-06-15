/*
 * XREFs of ?QueryInterface@?$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180081620
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CAudioSessionManagerProvider>::QueryInterface(
        char *a1,
        const struct _GUID *a2,
        char **a3)
{
  return ATL::AtlInternalQueryInterface(
           a1,
           (const struct ATL::_ATL_INTMAP_ENTRY *)&`CAudioSessionManagerProvider::_GetEntries'::`2'::_entries,
           a2,
           a3);
}
