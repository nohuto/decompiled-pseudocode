/*
 * XREFs of ?GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU2@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180012BC0
 * Callers:
 *     ?InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@4PEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@@Z @ 0x180005DE0 (-InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4S.c)
 *     ?ReloadApos@AudioEffectsWatcher@@AEAAJXZ @ 0x180030D60 (-ReloadApos@AudioEffectsWatcher@@AEAAJXZ.c)
 *     ?DeriveMixFormatFromDevicePipeFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x1800817E0 (-DeriveMixFormatFromDevicePipeFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ?IsConnectorFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3@Z @ 0x180083B54 (-IsConnectorFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MID.c)
 *     ?CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53_NPEAPEAUIAudioDeviceGraph@@@Z @ 0x18008BBE8 (-CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_aud.c)
 * Callees:
 *     ?GetInitializedSystemEffectInterface@@YAJPEAUIMMDevice@@U_tagpropertykey@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU3@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1800115C0 (-GetInitializedSystemEffectInterface@@YAJPEAUIMMDevice@@U_tagpropertykey@@U_GUID@@HHW4__MIDL___M.c)
 *     ?GetSupportedMFXAPOModes@CEndpointCharacteristics@@AEAAPEBVCAudioSignalProcessingModeArray@1@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180012A54 (-GetSupportedMFXAPOModes@CEndpointCharacteristics@@AEAAPEBVCAudioSignalProcessingModeArray@1@W4_.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180040F4C (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 */

__int64 __fastcall CEndpointCharacteristics::GetModeEffect(
        CEndpointCharacteristics *this,
        struct _GUID *a2,
        int a3,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a4,
        struct _GUID *a5,
        struct IAudioProcessingObject **a6,
        struct IAudioSystemEffects2 **a7)
{
  int v7; // ebx
  GUID v10; // xmm6
  GUID fmtid; // xmm1
  DWORD pid; // eax
  struct _GUID v14; // xmm0
  struct IMMDevice *v15; // rcx
  int InitializedSystemEffectInterface; // eax
  const struct CEndpointCharacteristics::CAudioSignalProcessingModeArray *SupportedMFXAPOModes; // rax
  struct _tagpropertykey v19; // [rsp+58h] [rbp-41h] BYREF
  struct _GUID v20; // [rsp+78h] [rbp-21h] BYREF
  struct _GUID v21; // [rsp+88h] [rbp-11h] BYREF

  v7 = 0;
  v10 = GUID_00000000_0000_0000_0000_000000000000;
  *(_QWORD *)&v20.Data1 = a2;
  v21 = GUID_00000000_0000_0000_0000_000000000000;
  if ( a5 )
    *a5 = GUID_00000000_0000_0000_0000_000000000000;
  if ( a6 )
    *a6 = 0LL;
  if ( a7 )
    *a7 = 0LL;
  if ( a3
    || (SupportedMFXAPOModes = CEndpointCharacteristics::GetSupportedMFXAPOModes(this, a4),
        (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                        SupportedMFXAPOModes,
                        *(_QWORD *)&v20.Data1) != -1) )
  {
    switch ( a4 )
    {
      case eHostProcessConnector:
        fmtid = PKEY_FX_ModeEffectClsid.fmtid;
        pid = PKEY_FX_ModeEffectClsid.pid;
        goto LABEL_10;
      case eOffloadConnector:
        fmtid = PKEY_FX_Offload_ModeEffectClsid.fmtid;
        pid = PKEY_FX_Offload_ModeEffectClsid.pid;
        break;
      case eKeywordDetectorConnector:
        fmtid = PKEY_FX_KeywordDetector_ModeEffectClsid.fmtid;
        pid = PKEY_FX_KeywordDetector_ModeEffectClsid.pid;
        break;
      default:
        pid = v19.pid;
        v7 = -2147023728;
        fmtid = v19.fmtid;
LABEL_10:
        if ( v7 < 0 )
          goto LABEL_12;
        break;
    }
    v14 = *a2;
    v15 = (struct IMMDevice *)*((_QWORD *)this + 2);
    v19.pid = pid;
    v20 = v14;
    v19.fmtid = fmtid;
    InitializedSystemEffectInterface = GetInitializedSystemEffectInterface(v15, &v19, &v20, a3, 0, a4, &v21, a6, a7);
    v10 = v21;
    v7 = InitializedSystemEffectInterface;
  }
LABEL_12:
  if ( a5 )
    *a5 = v10;
  return (unsigned int)v7;
}
