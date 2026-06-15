/*
 * XREFs of ?QueryInterface@?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14002E220
 * Callers:
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001A130 (-QueryInterface@-$CComObject@VCSystemAudioDeviceOffload@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001A140 (-QueryInterface@-$CComObject@VCSystemAudioDeviceOffload@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@WBBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001A150 (-QueryInterface@-$CComObject@VCSystemAudioDeviceOffload@@@ATL@@WBBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@WBBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001A160 (-QueryInterface@-$CComObject@VCSystemAudioDeviceOffload@@@ATL@@WBBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@WBCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001A170 (-QueryInterface@-$CComObject@VCSystemAudioDeviceOffload@@@ATL@@WBCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
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
