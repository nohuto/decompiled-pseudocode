/*
 * XREFs of ?GetMixFormatInternal@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18001F934
 * Callers:
 *     ?CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z @ 0x180013FE0 (-CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z.c)
 *     ?GetDeviceDefaults@CSaProvider@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x180024AB0 (-GetDeviceDefaults@CSaProvider@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengine.c)
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180025240 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHPEAVCEndpo.c)
 *     ?CompleteConstruction@CPerEndpointVolumeAudioSession@@EEAAJK@Z @ 0x1800771F0 (-CompleteConstruction@CPerEndpointVolumeAudioSession@@EEAAJK@Z.c)
 *     ?GetMixFormat@CPolicyConfig@@UEAAJPEBGPEAPEAUtWAVEFORMATEX@@@Z @ 0x180087370 (-GetMixFormat@CPolicyConfig@@UEAAJPEBGPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     PolicyConfigGetMixFormat @ 0x1800895A0 (PolicyConfigGetMixFormat.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x18008C790 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 * Callees:
 *     ?GetMixFormatInternal@CPolicyConfig@@QEAAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18001F1A0 (-GetMixFormatInternal@CPolicyConfig@@QEAAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPolicyConfig::GetMixFormatInternal(
        CPolicyConfig *this,
        struct CEndpointCharacteristics *a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        struct _GUID *a4,
        struct tWAVEFORMATEX **a5)
{
  struct IMMDevice *v8; // rbx
  int MixFormatInternal; // esi
  struct _GUID v11; // [rsp+40h] [rbp-28h] BYREF

  v8 = 0LL;
  if ( a5 )
  {
    *a5 = 0LL;
    v8 = (struct IMMDevice *)*((_QWORD *)a2 + 2);
    ((void (__fastcall *)(struct IMMDevice *))v8->lpVtbl->AddRef)(v8);
    v11 = *a4;
    MixFormatInternal = CPolicyConfig::GetMixFormatInternal(this, v8, a3, &v11, a5);
    if ( MixFormatInternal >= 0 )
      goto LABEL_3;
  }
  else
  {
    MixFormatInternal = -2147467261;
  }
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      32LL,
      &WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids,
      (unsigned int)MixFormatInternal);
  }
LABEL_3:
  if ( v8 )
    ((void (__fastcall *)(struct IMMDevice *))v8->lpVtbl->Release)(v8);
  return (unsigned int)MixFormatInternal;
}
