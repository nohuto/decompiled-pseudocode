/*
 * XREFs of ?ReloadApos@AudioEffectsWatcher@@AEAAJXZ @ 0x1800768F8
 * Callers:
 *     ?RebuildAndPublishFullEffectsListFromApos@AudioEffectsWatcher@@AEAAXXZ @ 0x1800765D4 (-RebuildAndPublishFullEffectsListFromApos@AudioEffectsWatcher@@AEAAXXZ.c)
 * Callees:
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HPEAU_GUID@@444@Z @ 0x180020690 (-DeriveAudioProcessingModeConfiguration@@YAJKHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREA.c)
 *     ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointCharacteristics@@@Z @ 0x180023D70 (-GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointChara.c)
 *     __security_check_cookie @ 0x180043550 (__security_check_cookie.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?GetSystemEffect@CEndpointCharacteristics@@QEAAJU_tagpropertykey@@U_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU3@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1800A9364 (-GetSystemEffect@CEndpointCharacteristics@@QEAAJU_tagpropertykey@@U_GUID@@HW4__MIDL___MIDL_itf_a.c)
 */

__int64 __fastcall AudioEffectsWatcher::ReloadApos(AudioEffectsWatcher *this)
{
  const unsigned __int16 *v1; // rdx
  int AliasedEndpointCharacteristics; // eax
  CEndpointCharacteristics *v4; // r14
  int SystemEffect; // esi
  int v6; // r9d
  __int64 v7; // rax
  bool v8; // r12
  int v9; // r15d
  struct IAudioSystemEffects2 **v10; // rdi
  struct IAudioSystemEffects2 *v11; // rsi
  GUID *v12; // rax
  struct _GUID v13; // xmm0
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v15; // [rsp+20h] [rbp-59h]
  struct _GUID *v16; // [rsp+28h] [rbp-51h]
  struct IAudioProcessingObject **v17; // [rsp+30h] [rbp-49h]
  struct _tagpropertykey v18; // [rsp+60h] [rbp-19h] BYREF
  struct _GUID v19; // [rsp+80h] [rbp+7h] BYREF
  GUID v20; // [rsp+90h] [rbp+17h] BYREF

  v1 = (const unsigned __int16 *)*((_QWORD *)this + 1);
  *(_QWORD *)&v20.Data1 = 0LL;
  AliasedEndpointCharacteristics = CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics(
                                     this,
                                     v1,
                                     (struct CEndpointCharacteristics **)&v20);
  v4 = *(CEndpointCharacteristics **)&v20.Data1;
  SystemEffect = AliasedEndpointCharacteristics;
  if ( AliasedEndpointCharacteristics >= 0 )
  {
    SystemEffect = DeriveAudioProcessingModeConfiguration(
                     *((_DWORD *)this + 4),
                     *((_DWORD *)this + 5),
                     *(CEndpointCharacteristics **)&v20.Data1,
                     *(_DWORD *)(*(_QWORD *)&v20.Data1 + 372LL) != 0,
                     0,
                     eHostProcessConnector,
                     1,
                     0LL,
                     &v20,
                     0LL,
                     0LL);
    if ( SystemEffect >= 0 )
    {
      v7 = *(_QWORD *)&v20.Data1 - *((_QWORD *)this + 3);
      if ( *(_QWORD *)&v20.Data1 == *((_QWORD *)this + 3) )
        v7 = *(_QWORD *)v20.Data4 - *((_QWORD *)this + 4);
      v8 = v7 != 0;
      v9 = 0;
      v10 = (struct IAudioSystemEffects2 **)((char *)this + 112);
      while ( 1 )
      {
        if ( v8 )
        {
          v11 = *v10;
          if ( *v10 )
          {
            *v10 = 0LL;
            ((void (__fastcall *)(struct IAudioSystemEffects2 *))v11->lpVtbl->Release)(v11);
          }
        }
        if ( !*v10 )
        {
          v12 = &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
          if ( !*((_BYTE *)v10 - 4) )
            v12 = &v20;
          v13 = *v12;
          v18.pid = *((_DWORD *)v10 - 2);
          v19 = v13;
          v18.fmtid = *(GUID *)(v10 - 3);
          SystemEffect = CEndpointCharacteristics::GetSystemEffect(v4, &v18, &v19, v6, v15, v16, v17, v10);
          if ( SystemEffect < 0 )
            break;
        }
        ++v9;
        v10 += 4;
        if ( (unsigned __int64)v9 >= 3 )
        {
          SystemEffect = 0;
          break;
        }
      }
    }
  }
  if ( v4 )
    (*(void (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v4 + 16LL))(v4);
  return (unsigned int)SystemEffect;
}
