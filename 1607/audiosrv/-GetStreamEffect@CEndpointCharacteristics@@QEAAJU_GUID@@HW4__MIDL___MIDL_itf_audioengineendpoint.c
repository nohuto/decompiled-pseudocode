/*
 * XREFs of ?GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU2@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18001B39C
 * Callers:
 *     ?GetSystemEffect@CEndpointCharacteristics@@QEAAJU_tagpropertykey@@U_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU3@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180003A7C (-GetSystemEffect@CEndpointCharacteristics@@QEAAJU_tagpropertykey@@U_GUID@@HW4__MIDL___MIDL_itf_a.c)
 *     ?InitializeAPOInfo@CEndpointCharacteristics@@AEAAJXZ @ 0x18001D3E0 (-InitializeAPOInfo@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@4PEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@@Z @ 0x18001DAE0 (-InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4S.c)
 *     ?DeriveStreamFormatFromMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x18006A538 (-DeriveStreamFormatFromMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_a.c)
 * Callees:
 *     ?AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x18001B214 (-AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJU_tagpropertykey@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU3@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18001CA10 (-GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJU_tagpropertykey@@U_GUID@@HH.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x18002761C (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 */

__int64 __fastcall CEndpointCharacteristics::GetStreamEffect(
        CEndpointCharacteristics *this,
        struct _GUID *a2,
        int a3,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a4,
        struct _GUID *a5,
        struct IAudioProcessingObject **a6,
        struct IAudioSystemEffects2 **a7)
{
  int InitializedSystemEffectInterface; // ebx
  __int64 v10; // rdi
  GUID fmtid; // xmm1
  DWORD pid; // eax
  struct _GUID v13; // xmm0
  char *v15; // rcx
  struct _GUID v16; // [rsp+50h] [rbp-51h] BYREF
  struct _tagpropertykey v17; // [rsp+60h] [rbp-41h] BYREF
  struct _GUID v18; // [rsp+80h] [rbp-21h] BYREF

  InitializedSystemEffectInterface = 0;
  v10 = a4;
  *(_QWORD *)&v16.Data1 = a2;
  v18 = GUID_00000000_0000_0000_0000_000000000000;
  if ( a5 )
    *a5 = GUID_00000000_0000_0000_0000_000000000000;
  if ( a6 )
    *a6 = 0LL;
  if ( a7 )
    *a7 = 0LL;
  if ( a3
    || (CEndpointCharacteristics::AreEnhancementsEnabled(this) || (_DWORD)v10 == 3
      ? (v15 = (char *)this + 16 * v10 + 144)
      : (v15 = (char *)this + 352),
        (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(v15, *(_QWORD *)&v16.Data1) != -1) )
  {
    switch ( (_DWORD)v10 )
    {
      case 0:
        fmtid = PKEY_FX_StreamEffectClsid.fmtid;
        pid = PKEY_FX_StreamEffectClsid.pid;
        goto LABEL_10;
      case 1:
        fmtid = PKEY_FX_Offload_StreamEffectClsid.fmtid;
        pid = PKEY_FX_Offload_StreamEffectClsid.pid;
        break;
      case 3:
        fmtid = PKEY_FX_KeywordDetector_StreamEffectClsid.fmtid;
        pid = PKEY_FX_KeywordDetector_StreamEffectClsid.pid;
        break;
      default:
        pid = v17.pid;
        InitializedSystemEffectInterface = -2147023728;
        fmtid = v17.fmtid;
LABEL_10:
        if ( InitializedSystemEffectInterface < 0 )
          goto LABEL_12;
        break;
    }
    v13 = *a2;
    v17.pid = pid;
    v16 = v13;
    v17.fmtid = fmtid;
    InitializedSystemEffectInterface = CEndpointCharacteristics::GetInitializedSystemEffectInterface(
                                         this,
                                         &v17,
                                         &v16,
                                         a3,
                                         0,
                                         (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v10,
                                         &v18,
                                         a6,
                                         a7);
  }
LABEL_12:
  if ( a5 )
    *a5 = v18;
  return (unsigned int)InitializedSystemEffectInterface;
}
