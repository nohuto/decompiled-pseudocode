/*
 * XREFs of ?QueryInterface@?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14002CBD0
 * Callers:
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140019BB0 (-QueryInterface@-$CComObject@VCSystemAudioDeviceOffload@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140019BC0 (-QueryInterface@-$CComObject@VCSystemAudioDeviceOffload@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@WBBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140019BD0 (-QueryInterface@-$CComObject@VCSystemAudioDeviceOffload@@@ATL@@WBBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@WBBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140019BE0 (-QueryInterface@-$CComObject@VCSystemAudioDeviceOffload@@@ATL@@WBBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@WBCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140019BF0 (-QueryInterface@-$CComObject@VCSystemAudioDeviceOffload@@@ATL@@WBCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CSystemAudioDeviceOffload>::QueryInterface(
        char *a1,
        const struct _GUID *a2,
        char **a3)
{
  return ATL::AtlInternalQueryInterface(
           a1,
           (const struct ATL::_ATL_INTMAP_ENTRY *)&`CSystemAudioDeviceOffload::_GetEntries'::`2'::_entries,
           a2,
           a3);
}
