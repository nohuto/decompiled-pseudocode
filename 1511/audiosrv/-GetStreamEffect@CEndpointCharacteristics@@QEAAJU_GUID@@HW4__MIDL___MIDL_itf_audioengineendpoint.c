/*
 * XREFs of ?GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU2@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180012CC4
 * Callers:
 *     ?InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@4PEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@@Z @ 0x180005DE0 (-InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4S.c)
 *     ?ReloadApos@AudioEffectsWatcher@@AEAAJXZ @ 0x180030D60 (-ReloadApos@AudioEffectsWatcher@@AEAAJXZ.c)
 *     ?DeriveStreamFormatFromMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x180081D6C (-DeriveStreamFormatFromMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_a.c)
 * Callees:
 *     ?GetInitializedSystemEffectInterface@@YAJPEAUIMMDevice@@U_tagpropertykey@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU3@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1800115C0 (-GetInitializedSystemEffectInterface@@YAJPEAUIMMDevice@@U_tagpropertykey@@U_GUID@@HHW4__MIDL___M.c)
 *     ?AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x1800129D0 (-AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180040F4C (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
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
  int v7; // ebx
  GUID v10; // xmm6
  __int64 v11; // rdi
  GUID fmtid; // xmm1
  DWORD pid; // eax
  struct _GUID v14; // xmm0
  struct IMMDevice *v15; // rcx
  int InitializedSystemEffectInterface; // eax
  char *v18; // rcx
  struct _tagpropertykey v19; // [rsp+58h] [rbp-41h] BYREF
  struct _GUID v20; // [rsp+78h] [rbp-21h] BYREF
  struct _GUID v21; // [rsp+88h] [rbp-11h] BYREF

  v7 = 0;
  v10 = GUID_00000000_0000_0000_0000_000000000000;
  v11 = a4;
  *(_QWORD *)&v20.Data1 = a2;
  v21 = GUID_00000000_0000_0000_0000_000000000000;
  if ( a5 )
    *a5 = GUID_00000000_0000_0000_0000_000000000000;
  if ( a6 )
    *a6 = 0LL;
  if ( a7 )
    *a7 = 0LL;
  if ( a3
    || (CEndpointCharacteristics::AreEnhancementsEnabled(this) || (_DWORD)v11 == 3
      ? (v18 = (char *)this + 16 * v11 + 144)
      : (v18 = (char *)this + 352),
        (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(v18, *(_QWORD *)&v20.Data1) != -1) )
  {
    switch ( (_DWORD)v11 )
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
    InitializedSystemEffectInterface = GetInitializedSystemEffectInterface(
                                         v15,
                                         &v19,
                                         &v20,
                                         a3,
                                         0,
                                         (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v11,
                                         &v21,
                                         a6,
                                         a7);
    v10 = v21;
    v7 = InitializedSystemEffectInterface;
  }
LABEL_12:
  if ( a5 )
    *a5 = v10;
  return (unsigned int)v7;
}
