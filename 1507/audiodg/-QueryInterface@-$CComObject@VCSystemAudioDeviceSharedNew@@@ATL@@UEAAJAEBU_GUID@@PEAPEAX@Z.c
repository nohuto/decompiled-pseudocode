/*
 * XREFs of ?QueryInterface@?$CComObject@VCSystemAudioDeviceSharedNew@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140013B70
 * Callers:
 *     GetStreamingResourceManager @ 0x14000DCC0 (GetStreamingResourceManager.c)
 *     ?DisconnectFromDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@@Z @ 0x140011830 (-DisconnectFromDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@@Z.c)
 *     ?ConnectToDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@W4STREAMGROUP_CONNECT_OPTIONS@@@Z @ 0x140011960 (-ConnectToDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@W4STREAMGROUP_CONNECT_OPTIONS@@@.c)
 *     ?StopStream@CStreamGroup@@UEAAJ_K@Z @ 0x140011B80 (-StopStream@CStreamGroup@@UEAAJ_K@Z.c)
 *     ?StartStream@CStreamGroup@@UEAAJ_K@Z @ 0x140011CC0 (-StartStream@CStreamGroup@@UEAAJ_K@Z.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCSystemAudioDeviceSharedNew@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x1400144DC (-CreateInstance@-$CComCreator@V-$CComObject@VCSystemAudioDeviceSharedNew@@@ATL@@@ATL@@SAJPEAXAEB.c)
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceSharedNew@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001A150 (-QueryInterface@-$CComObject@VCSystemAudioDeviceSharedNew@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceSharedNew@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001A160 (-QueryInterface@-$CComObject@VCSystemAudioDeviceSharedNew@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceSharedNew@@@ATL@@WBBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001A170 (-QueryInterface@-$CComObject@VCSystemAudioDeviceSharedNew@@@ATL@@WBBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceSharedNew@@@ATL@@WBBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001A180 (-QueryInterface@-$CComObject@VCSystemAudioDeviceSharedNew@@@ATL@@WBBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CSystemAudioDeviceSharedNew>::QueryInterface(
        char *a1,
        const struct _GUID *a2,
        char **a3)
{
  return ATL::AtlInternalQueryInterface(
           a1,
           (const struct ATL::_ATL_INTMAP_ENTRY *)&`CSystemAudioDeviceSharedNew::_GetEntries'::`2'::_entries,
           a2,
           a3);
}
