/*
 * XREFs of ?QueryInterface@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14002DC40
 * Callers:
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140019DF0 (-QueryInterface@-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140019E00 (-QueryInterface@-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140019E10 (-QueryInterface@-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBBA@EAAJAEBU_GUID@@PEAPEAX@.c)
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140019E20 (-QueryInterface@-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBBI@EAAJAEBU_GUID@@PEAPEAX@.c)
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBFI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140019E30 (-QueryInterface@-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBFI@EAAJAEBU_GUID@@PEAPEAX@.c)
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBGA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140019E40 (-QueryInterface@-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBGA@EAAJAEBU_GUID@@PEAPEAX@.c)
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBGI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140019E50 (-QueryInterface@-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBGI@EAAJAEBU_GUID@@PEAPEAX@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CSystemAudioDeviceOffloadGraph>::QueryInterface(
        char *a1,
        const struct _GUID *a2,
        char **a3)
{
  return ATL::AtlInternalQueryInterface(
           a1,
           (const struct ATL::_ATL_INTMAP_ENTRY *)&`CSystemAudioDeviceOffloadGraph::_GetEntries'::`2'::_entries,
           a2,
           a3);
}
