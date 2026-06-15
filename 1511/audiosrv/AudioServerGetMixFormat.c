/*
 * XREFs of AudioServerGetMixFormat @ 0x180031580
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMixFormatInternal@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18001A800 (-GetMixFormatInternal@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audi.c)
 *     ?IsValidAudioServerStreamCategory@CWindowsPolicyManager@@UEAAHK@Z @ 0x18001B940 (-IsValidAudioServerStreamCategory@CWindowsPolicyManager@@UEAAHK@Z.c)
 *     ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointCharacteristics@@@Z @ 0x18001BA20 (-GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointChara.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001BEC0 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HPEAU_GUID@@444@Z @ 0x1800317E0 (-DeriveAudioProcessingModeConfiguration@@YAJKHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREA.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     memcpy_0 @ 0x18004799C (memcpy_0.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     TemplateEventDescriptor @ 0x18008A638 (TemplateEventDescriptor.c)
 *     Template_zqttq @ 0x18008A654 (Template_zqttq.c)
 */

__int64 __fastcall AudioServerGetMixFormat(__int64 a1, const unsigned __int16 *a2, unsigned int *a3, _QWORD *a4)
{
  struct CEndpointCharacteristics *v4; // rbx
  unsigned __int16 *v5; // rbp
  __int64 v6; // rdi
  CWindowsPolicyManager *v9; // r14
  int v10; // esi
  _BOOL8 (__fastcall *v11)(CWindowsPolicyManager *, unsigned int); // r13
  BOOL IsValidAudioServerStreamCategory; // eax
  int AliasedEndpointCharacteristics; // eax
  int MixFormatInternal; // eax
  SIZE_T v15; // r14
  HANDLE ProcessHeap; // rax
  void *v17; // rax
  __int64 (__fastcall *v18)(volatile signed __int32 *); // rdi
  void *Src; // [rsp+60h] [rbp-58h] BYREF
  struct _GUID v21; // [rsp+70h] [rbp-48h] BYREF

  v4 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  Src = 0LL;
  *(_QWORD *)&v21.Data1 = 0LL;
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    Template_zqttq(a1, (unsigned int)&AudioSrv_GetMixFormat_Task_Start, (_DWORD)a2, *a3, a3[2], a3[4], a3[1]);
  v9 = g_PolicyManager;
  v10 = 0;
  *a4 = 0LL;
  if ( v9 )
  {
    v11 = *(_BOOL8 (__fastcall **)(CWindowsPolicyManager *, unsigned int))(*(_QWORD *)v9 + 64LL);
    if ( v11 == CWindowsPolicyManager::IsValidAudioServerStreamCategory )
      IsValidAudioServerStreamCategory = CWindowsPolicyManager::IsValidAudioServerStreamCategory(v9, *a3);
    else
      IsValidAudioServerStreamCategory = v11(v9, *a3);
    if ( !IsValidAudioServerStreamCategory )
      v10 = -2147024809;
    if ( v10 >= 0 )
    {
      AliasedEndpointCharacteristics = CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics(
                                         (RTL_SRWLOCK *)g_pEndpointCharacteristicsCache,
                                         a2,
                                         (struct CEndpointCharacteristics **)&v21);
      v4 = *(struct CEndpointCharacteristics **)&v21.Data1;
      v10 = AliasedEndpointCharacteristics;
      if ( AliasedEndpointCharacteristics >= 0 )
      {
        v6 = *(_QWORD *)(*(_QWORD *)&v21.Data1 + 16LL);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
        v10 = DeriveAudioProcessingModeConfiguration(*a3, a3[2], v4, *((_DWORD *)v4 + 93) == 1);
        if ( v10 >= 0 )
        {
          MixFormatInternal = CPolicyConfig::GetMixFormatInternal(
                                g_PolicyConfig,
                                v4,
                                (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a3[1],
                                &v21,
                                (struct tWAVEFORMATEX **)&Src);
          v5 = (unsigned __int16 *)Src;
          v10 = MixFormatInternal;
          if ( MixFormatInternal >= 0 )
          {
            v15 = *((unsigned __int16 *)Src + 8) + 18LL;
            if ( v15 > 0x40000 )
            {
              *a4 = 0LL;
            }
            else
            {
              ProcessHeap = GetProcessHeap();
              v17 = HeapAlloc(ProcessHeap, 0, v15);
              *a4 = v17;
              if ( v17 )
              {
                memcpy_0(v17, v5, v5[8] + 18LL);
                goto LABEL_15;
              }
            }
            v10 = -2147024882;
          }
        }
      }
    }
  }
  else
  {
    v10 = -2147418113;
  }
LABEL_15:
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    TemplateEventDescriptor(a1, &AudioSrv_GetMixFormat_Task_Stop, a3);
  if ( v5 )
    CoTaskMemFree(v5);
  if ( v10 < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      98LL,
      &WPP_8fcf0ce21d4e3a3e0240111d41fb5ad7_Traceguids,
      (unsigned int)v10);
  }
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v4 )
  {
    v18 = *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 16LL);
    if ( v18 == Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)v4);
    else
      v18((volatile signed __int32 *)v4);
  }
  return (unsigned int)v10;
}
