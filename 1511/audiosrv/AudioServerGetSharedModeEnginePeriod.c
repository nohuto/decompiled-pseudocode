/*
 * XREFs of AudioServerGetSharedModeEnginePeriod @ 0x180089FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@PEAI333@Z @ 0x180012E10 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     AudioServerIsFormatSupported @ 0x180019680 (AudioServerIsFormatSupported.c)
 *     ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointCharacteristics@@@Z @ 0x18001BA20 (-GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointChara.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001BEC0 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HPEAU_GUID@@444@Z @ 0x1800317E0 (-DeriveAudioProcessingModeConfiguration@@YAJKHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREA.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x180080A50 (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 *     ?ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z @ 0x180088E80 (-ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z.c)
 */

__int64 __fastcall AudioServerGetSharedModeEnginePeriod(
        void *a1,
        const unsigned __int16 *a2,
        __int64 a3,
        struct tWAVEFORMATEX *a4,
        unsigned int *a5,
        unsigned int *a6,
        unsigned int *a7,
        unsigned int *a8)
{
  struct CEndpointCharacteristics *v9; // rbx
  void *v10; // rdi
  int IsFormatSupported; // esi
  int AliasedEndpointCharacteristics; // eax
  struct _GUID v16; // xmm6
  int v17; // eax
  unsigned int v18; // edx
  __int64 (__fastcall *v19)(volatile signed __int32 *); // rdi
  LPVOID pv; // [rsp+68h] [rbp-49h] BYREF
  struct _GUID v22; // [rsp+78h] [rbp-39h] BYREF
  void *v23; // [rsp+88h] [rbp-29h] BYREF
  struct _GUID v24; // [rsp+98h] [rbp-19h] BYREF
  struct _GUID v25; // [rsp+A8h] [rbp-9h] BYREF

  v9 = 0LL;
  v10 = 0LL;
  v23 = 0LL;
  *(_QWORD *)&v22.Data1 = 0LL;
  pv = 0LL;
  IsFormatSupported = ValidateVadServerSettings((struct VadServerSettings *)a3);
  if ( IsFormatSupported < 0 )
    goto LABEL_9;
  IsFormatSupported = AudioServerIsFormatSupported(
                        a1,
                        (__int64)a2,
                        0LL,
                        (_DWORD *)a3,
                        &a4->wFormatTag,
                        (struct tWAVEFORMATEX **)&v23);
  if ( IsFormatSupported < 0 )
    goto LABEL_9;
  AliasedEndpointCharacteristics = CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics(
                                     (RTL_SRWLOCK *)g_pEndpointCharacteristicsCache,
                                     a2,
                                     (struct CEndpointCharacteristics **)&v22);
  v9 = *(struct CEndpointCharacteristics **)&v22.Data1;
  IsFormatSupported = AliasedEndpointCharacteristics;
  if ( AliasedEndpointCharacteristics < 0 )
    goto LABEL_9;
  IsFormatSupported = DeriveAudioProcessingModeConfiguration(
                        *(_DWORD *)a3,
                        *(_DWORD *)(a3 + 8),
                        *(CEndpointCharacteristics **)&v22.Data1,
                        *(_DWORD *)(*(_QWORD *)&v22.Data1 + 372LL) == 1,
                        0,
                        (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*(_DWORD *)(a3 + 4),
                        0,
                        &v22,
                        &v24,
                        &v25,
                        0LL);
  if ( IsFormatSupported < 0
    || (v16 = v22,
        v17 = DeriveConnectorFormatFromStreamFormat(
                v9,
                (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*(_DWORD *)(a3 + 4),
                a4,
                &v25,
                &v24,
                &v22,
                *(_DWORD *)(a3 + 16),
                (struct tWAVEFORMATEX **)&pv),
        v10 = pv,
        IsFormatSupported = v17,
        v17 < 0)
    || (v18 = *(_DWORD *)(a3 + 4),
        v25 = v16,
        IsFormatSupported = CEndpointCharacteristics::GetSharedModeEnginePeriodicity(
                              v9,
                              v18,
                              (const struct tWAVEFORMATEX *)pv,
                              &v25,
                              a5,
                              a6,
                              a7,
                              a8),
        IsFormatSupported < 0) )
  {
LABEL_9:
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x66u,
        (__int64)&WPP_8fcf0ce21d4e3a3e0240111d41fb5ad7_Traceguids,
        IsFormatSupported);
    }
  }
  CoTaskMemFree(v10);
  operator delete(v23);
  if ( v9 )
  {
    v19 = *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 16LL);
    if ( v19 == Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)v9);
    else
      v19((volatile signed __int32 *)v9);
  }
  return (unsigned int)IsFormatSupported;
}
