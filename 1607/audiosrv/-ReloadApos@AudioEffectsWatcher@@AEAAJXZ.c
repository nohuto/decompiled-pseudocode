/*
 * XREFs of ?ReloadApos@AudioEffectsWatcher@@AEAAJXZ @ 0x180003304
 * Callers:
 *     ?RebuildAndPublishFullEffectsListFromApos@AudioEffectsWatcher@@AEAAXXZ @ 0x1800031B4 (-RebuildAndPublishFullEffectsListFromApos@AudioEffectsWatcher@@AEAAXXZ.c)
 * Callees:
 *     ?GetSystemEffect@CEndpointCharacteristics@@QEAAJU_tagpropertykey@@U_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU3@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180003A7C (-GetSystemEffect@CEndpointCharacteristics@@QEAAJU_tagpropertykey@@U_GUID@@HW4__MIDL___MIDL_itf_a.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HHPEAU_GUID@@444@Z @ 0x180003BB4 (-DeriveAudioProcessingModeConfiguration@@YAJKHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREA.c)
 *     ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGPEAPEAVCEndpointCharacteristics@@@Z @ 0x180008370 (-GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGPEAPEAVCEndpointChara.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIEndpointCharacteristics@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180008900 (-Release@-$RuntimeClass@U-$InterfaceList@UIEndpointCharacteristics@@VNil@Details@WRL@Microsoft@@.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioEffectsWatcher::ReloadApos(AudioEffectsWatcher *this)
{
  const unsigned __int16 *v1; // rdx
  __int64 (__fastcall *v3)(CEndpointCharacteristicsCache *__hidden, const unsigned __int16 *, struct CEndpointCharacteristics **); // rax
  int AliasedEndpointCharacteristics; // eax
  int SystemEffect; // edi
  int v6; // r9d
  __int64 v7; // rax
  bool v8; // r14
  int v9; // esi
  struct IAudioSystemEffects2 **v10; // rbx
  struct IAudioSystemEffects2 *v11; // rcx
  GUID *v12; // rax
  struct _GUID v13; // xmm0
  void (*v14)(void); // rax
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v16; // [rsp+20h] [rbp-59h]
  struct _GUID *v17; // [rsp+28h] [rbp-51h]
  struct IAudioProcessingObject **v18; // [rsp+30h] [rbp-49h]
  struct CEndpointCharacteristics *v19[2]; // [rsp+60h] [rbp-19h] BYREF
  struct _tagpropertykey v20; // [rsp+70h] [rbp-9h] BYREF
  struct _GUID v21; // [rsp+90h] [rbp+17h] BYREF
  _QWORD v22[2]; // [rsp+A0h] [rbp+27h] BYREF

  v19[0] = 0LL;
  v1 = (const unsigned __int16 *)*((_QWORD *)this + 1);
  v3 = *(__int64 (__fastcall **)(CEndpointCharacteristicsCache *__hidden, const unsigned __int16 *, struct CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL);
  if ( v3 == CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics )
    AliasedEndpointCharacteristics = CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics(
                                       g_pEndpointCharacteristicsCache,
                                       v1,
                                       v19);
  else
    AliasedEndpointCharacteristics = v3(g_pEndpointCharacteristicsCache, v1, v19);
  SystemEffect = AliasedEndpointCharacteristics;
  if ( AliasedEndpointCharacteristics >= 0 )
  {
    LODWORD(v18) = 1;
    LODWORD(v17) = 0;
    v16 = eHostProcessConnector;
    SystemEffect = DeriveAudioProcessingModeConfiguration(
                     *((unsigned int *)this + 4),
                     *((unsigned int *)this + 5),
                     v19[0],
                     *((_DWORD *)v19[0] + 93) != 0);
    if ( SystemEffect >= 0 )
    {
      v7 = v22[0] - *((_QWORD *)this + 3);
      if ( v22[0] == *((_QWORD *)this + 3) )
        v7 = v22[1] - *((_QWORD *)this + 4);
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
            v12 = (GUID *)v22;
          v13 = *v12;
          v20.pid = *((_DWORD *)v10 - 2);
          v21 = v13;
          v20.fmtid = *(GUID *)(v10 - 3);
          SystemEffect = CEndpointCharacteristics::GetSystemEffect(v19[0], &v20, &v21, v6, v16, v17, v18, v10);
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
  if ( v19[0] )
  {
    v14 = *(void (**)(void))(*(_QWORD *)v19[0] + 16LL);
    if ( (char *)v14 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IEndpointCharacteristics,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IEndpointCharacteristics,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release();
    else
      v14();
  }
  return (unsigned int)SystemEffect;
}
