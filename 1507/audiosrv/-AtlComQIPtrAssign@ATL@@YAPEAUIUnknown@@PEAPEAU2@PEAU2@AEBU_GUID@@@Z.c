/*
 * XREFs of ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x18002B950
 * Callers:
 *     AudioSessionManagerGetCurrentSession @ 0x18002B720 (AudioSessionManagerGetCurrentSession.c)
 *     ??$?4UIMMDevice@@@?$CComPtr@UIMMEndpointInternal@@@ATL@@QEAAPEAUIMMEndpointInternal@@AEBV?$CComPtr@UIMMDevice@@@1@@Z @ 0x18002B9D0 (--$-4UIMMDevice@@@-$CComPtr@UIMMEndpointInternal@@@ATL@@QEAAPEAUIMMEndpointInternal@@AEBV-$CComP.c)
 *     ?GetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x18002D5C0 (-GetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@PEAUtagPROPVARI.c)
 *     s_rtgGetDefaultAudioEndpoint @ 0x18002FF30 (s_rtgGetDefaultAudioEndpoint.c)
 *     ?ConfirmDeviceCanRenderFormat@CPolicyConfig@@CAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x180032BB8 (-ConfirmDeviceCanRenderFormat@CPolicyConfig@@CAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@U_GUID@@W4__MI.c)
 *     ?RefreshDeviceFormat@CPolicyConfig@@AEAAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180033A1C (-RefreshDeviceFormat@CPolicyConfig@@AEAAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_.c)
 *     ?ToMigratedString@CAudioEndpointId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x180036E50 (-ToMigratedString@CAudioEndpointId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@.c)
 *     ?CreateSystemEffect@@YAJAEBU_GUID@@PEAPEAUIAudioProcessingObject@@@Z @ 0x180037E04 (-CreateSystemEffect@@YAJAEBU_GUID@@PEAPEAUIAudioProcessingObject@@@Z.c)
 *     ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z @ 0x18003C238 (-RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z.c)
 *     ?Initialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x18003D6A0 (-Initialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 *     ?FindMeterControlForEndpoint@CMeterHardware@@IEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x18003DDCC (-FindMeterControlForEndpoint@CMeterHardware@@IEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     ?FindMuteControlForEndpoint@CMuteHardware@@IEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x18003E33C (-FindMuteControlForEndpoint@CMuteHardware@@IEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     ?Initialize@CVolumeControlBase@@UEAAJPEAUIMMDevice@@@Z @ 0x18003E5C0 (-Initialize@CVolumeControlBase@@UEAAJPEAUIMMDevice@@@Z.c)
 *     ?FindVolumeControlForEndpoint@CVolumeHardware@@IEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x18003F0F0 (-FindVolumeControlForEndpoint@CVolumeHardware@@IEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     ?FindSaDeviceForAudioDeviceGraph@CEndpointSaDeviceLists@@QEAAPEAVCSaDeviceInstance@@PEAUIAudioDeviceGraph@@@Z @ 0x180074184 (-FindSaDeviceForAudioDeviceGraph@CEndpointSaDeviceLists@@QEAAPEAVCSaDeviceInstance@@PEAUIAudioDe.c)
 *     ??$?4UIAudioVolume@@@?$CComPtr@UIAudioMuteAPO@@@ATL@@QEAAPEAUIAudioMuteAPO@@AEBV?$CComPtr@UIAudioVolume@@@1@@Z @ 0x1800818C4 (--$-4UIAudioVolume@@@-$CComPtr@UIAudioMuteAPO@@@ATL@@QEAAPEAUIAudioMuteAPO@@AEBV-$CComPtr@UIAudi.c)
 *     ?GetPreferredFormatsArray@@YAJPEAUIMMDevice@@PEAPEAU_AudioFormat@@PEA_K@Z @ 0x180087418 (-GetPreferredFormatsArray@@YAJPEAUIMMDevice@@PEAPEAU_AudioFormat@@PEA_K@Z.c)
 *     ?SetApplicationDefaultEndpoint@CPolicyConfig@@UEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@PEBG@Z @ 0x180088020 (-SetApplicationDefaultEndpoint@CPolicyConfig@@UEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_00.c)
 *     ?SetDeviceFormat@CPolicyConfig@@QEAAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@@Z @ 0x1800884F4 (-SetDeviceFormat@CPolicyConfig@@QEAAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@@Z.c)
 *     ?EndpointRequiresAC97VistaShim@@YAHPEAUIMMDevice@@@Z @ 0x18008A054 (-EndpointRequiresAC97VistaShim@@YAHPEAUIMMDevice@@@Z.c)
 *     ?KsNotifications_AudioInterfaceArrival@@YAXPEBG@Z @ 0x18009E5A4 (-KsNotifications_AudioInterfaceArrival@@YAXPEBG@Z.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

struct IUnknown *__fastcall ATL::AtlComQIPtrAssign(struct IUnknown **a1, struct IUnknown *a2, const struct _GUID *a3)
{
  __int64 v4; // rsi

  if ( !a1 )
    return 0LL;
  v4 = (__int64)*a1;
  *a1 = 0LL;
  if ( a2 )
    ((void (__fastcall *)(struct IUnknown *, const struct _GUID *, struct IUnknown **))a2->lpVtbl->QueryInterface)(
      a2,
      a3,
      a1);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return *a1;
}
