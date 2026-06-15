/*
 * XREFs of ?QueryInterface@?$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14000EC10
 * Callers:
 *     ?GetStreamingResourceManager@CSystemAudioDeviceSharedNew@@UEAAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x14000DE50 (-GetStreamingResourceManager@CSystemAudioDeviceSharedNew@@UEAAJPEAPEAUIAudioStreamingResourceReg.c)
 *     ?GetDevicePipeFormat@CSystemAudioDeviceSharedNew@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x14000DF70 (-GetDevicePipeFormat@CSystemAudioDeviceSharedNew@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?AddPipeToMixSplitConnection@CSystemAudioDeviceSharedNew@@UEAAJPEAVCPipeInstance@@@Z @ 0x14000E530 (-AddPipeToMixSplitConnection@CSystemAudioDeviceSharedNew@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCAudioDeviceGraph@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140014354 (-CreateInstance@-$CComCreator@V-$CComObject@VCAudioDeviceGraph@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PE.c)
 *     ??0?$CComQIPtr@UIAudioDeviceGraphInternal@@$1?_GUID_0576b5aa_7951_4359_8e0c_367830add031@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x1400187D0 (--0-$CComQIPtr@UIAudioDeviceGraphInternal@@$1-_GUID_0576b5aa_7951_4359_8e0c_367830add031@@3U__s_.c)
 *     ?QueryInterface@?$CComObject@VCAudioDeviceGraph@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140019D70 (-QueryInterface@-$CComObject@VCAudioDeviceGraph@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComObject@VCAudioDeviceGraph@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140019D80 (-QueryInterface@-$CComObject@VCAudioDeviceGraph@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CAudioDeviceGraph>::QueryInterface(void *a1, const struct _GUID *a2, void **a3)
{
  return ATL::AtlInternalQueryInterface(
           a1,
           (const struct ATL::_ATL_INTMAP_ENTRY *)&`CAudioDeviceGraph::_GetEntries'::`2'::_entries,
           a2,
           a3);
}
