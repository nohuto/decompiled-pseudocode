/*
 * XREFs of ?ReloadApos@AudioEffectsWatcher@@AEAAJXZ @ 0x180030D60
 * Callers:
 *     ?RebuildAndPublishFullEffectsListFromApos@AudioEffectsWatcher@@AEAAXXZ @ 0x180030BAC (-RebuildAndPublishFullEffectsListFromApos@AudioEffectsWatcher@@AEAAXXZ.c)
 * Callees:
 *     ?GetEndpointEffect@CEndpointCharacteristics@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180012A90 (-GetEndpointEffect@CEndpointCharacteristics@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_.c)
 *     ?GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU2@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180012BC0 (-GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     ?GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU2@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180012CC4 (-GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointCharacteristics@@@Z @ 0x18001BA20 (-GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointChara.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001BEC0 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HPEAU_GUID@@444@Z @ 0x1800317E0 (-DeriveAudioProcessingModeConfiguration@@YAJKHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREA.c)
 *     __security_check_cookie @ 0x180047490 (__security_check_cookie.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall AudioEffectsWatcher::ReloadApos(AudioEffectsWatcher *this)
{
  const unsigned __int16 *v1; // rdx
  int AliasedEndpointCharacteristics; // eax
  CEndpointCharacteristics *v4; // r14
  int v5; // ebx
  char *v6; // rax
  int v7; // ebp
  bool v8; // r15
  struct IAudioSystemEffects2 **v9; // rdi
  struct IAudioSystemEffects2 *v10; // rsi
  struct _GUID *v11; // rcx
  int v12; // eax
  int StreamEffect; // eax
  __int64 (__fastcall *v14)(volatile signed __int32 *); // rdi
  __int128 v16; // [rsp+60h] [rbp-78h]
  struct _GUID v17; // [rsp+80h] [rbp-58h] BYREF
  CEndpointCharacteristics *v18[2]; // [rsp+90h] [rbp-48h] BYREF

  v1 = (const unsigned __int16 *)*((_QWORD *)this + 1);
  v18[0] = 0LL;
  AliasedEndpointCharacteristics = CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics(
                                     (RTL_SRWLOCK *)g_pEndpointCharacteristicsCache,
                                     v1,
                                     v18);
  v4 = v18[0];
  v5 = AliasedEndpointCharacteristics;
  if ( AliasedEndpointCharacteristics >= 0 )
  {
    v5 = DeriveAudioProcessingModeConfiguration(
           *((unsigned int *)this + 4),
           *((unsigned int *)this + 5),
           v18[0],
           *((_DWORD *)v18[0] + 93) != 0);
    if ( v5 >= 0 )
    {
      v6 = (char *)v18[0] - *((_QWORD *)this + 3);
      if ( !v6 )
        v6 = (char *)v18[1] - *((_QWORD *)this + 4);
      v7 = 0;
      v8 = v6 != 0LL;
      v9 = (struct IAudioSystemEffects2 **)((char *)this + 112);
      while ( 1 )
      {
        if ( v8 )
        {
          v10 = *v9;
          if ( *v9 )
          {
            *v9 = 0LL;
            ((void (__fastcall *)(struct IAudioSystemEffects2 *))v10->lpVtbl->Release)(v10);
          }
        }
        if ( !*v9 )
        {
          v11 = &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
          if ( !*((_BYTE *)v9 - 4) )
            v11 = (struct _GUID *)v18;
          v12 = *((_DWORD *)v9 - 2);
          v16 = *(_OWORD *)(v9 - 3);
          if ( v12 == 5 )
          {
            if ( v16 != *(_OWORD *)&PKEY_FX_StreamEffectClsid.fmtid )
              goto LABEL_27;
            v17 = *v11;
            StreamEffect = CEndpointCharacteristics::GetStreamEffect(v4, &v17, 1, eHostProcessConnector, 0LL, 0LL, v9);
          }
          else if ( v12 == 6 )
          {
            if ( v16 != *(_OWORD *)&PKEY_FX_ModeEffectClsid.fmtid )
              goto LABEL_27;
            v17 = *v11;
            StreamEffect = CEndpointCharacteristics::GetModeEffect(v4, &v17, 1, eHostProcessConnector, 0LL, 0LL, v9);
          }
          else
          {
            if ( v12 != 7 || v16 != *(_OWORD *)&PKEY_FX_EndpointEffectClsid.fmtid )
            {
LABEL_27:
              v5 = -2147024809;
              break;
            }
            StreamEffect = CEndpointCharacteristics::GetEndpointEffect(v4, 1, eHostProcessConnector, 0LL, 0LL, v9);
          }
          v5 = StreamEffect;
          if ( StreamEffect < 0 )
            break;
        }
        ++v7;
        v9 += 4;
        if ( (unsigned __int64)v7 >= 3 )
        {
          v5 = 0;
          break;
        }
      }
    }
  }
  if ( v4 )
  {
    v14 = *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 16LL);
    if ( v14 == Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)v4);
    else
      v14((volatile signed __int32 *)v4);
  }
  return (unsigned int)v5;
}
