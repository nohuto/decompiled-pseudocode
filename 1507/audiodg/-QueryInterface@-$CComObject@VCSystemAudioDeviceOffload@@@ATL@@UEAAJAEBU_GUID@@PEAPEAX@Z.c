/*
 * XREFs of ?QueryInterface@?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400013E0
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x1400011B4 (-CreateInstance@-$CComCreator@V-$CComObject@VCSystemAudioDeviceOffload@@@ATL@@@ATL@@SAJPEAXAEBU_.c)
 *     GetStreamingResourceManager @ 0x14000DCC0 (GetStreamingResourceManager.c)
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001A310 (-QueryInterface@-$CComObject@VCSystemAudioDeviceOffload@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001A320 (-QueryInterface@-$CComObject@VCSystemAudioDeviceOffload@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@WBBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001A330 (-QueryInterface@-$CComObject@VCSystemAudioDeviceOffload@@@ATL@@WBBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@WBBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001A340 (-QueryInterface@-$CComObject@VCSystemAudioDeviceOffload@@@ATL@@WBBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@WBCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001A350 (-QueryInterface@-$CComObject@VCSystemAudioDeviceOffload@@@ATL@@WBCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CSystemAudioDeviceOffload>::QueryInterface(
        void *a1,
        const struct _GUID *a2,
        void **a3)
{
  return ATL::AtlInternalQueryInterface(
           a1,
           (const struct ATL::_ATL_INTMAP_ENTRY *)&`CSystemAudioDeviceOffload::_GetEntries'::`2'::_entries,
           a2,
           a3);
}
