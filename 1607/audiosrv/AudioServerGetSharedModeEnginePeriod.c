/*
 * XREFs of AudioServerGetSharedModeEnginePeriod @ 0x1800731C0
 * Callers:
 *     <none>
 * Callees:
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HHPEAU_GUID@@444@Z @ 0x180003BB4 (-DeriveAudioProcessingModeConfiguration@@YAJKHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREA.c)
 *     ?ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z @ 0x180004388 (-ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z.c)
 *     AudioServerIsFormatSupported @ 0x180006E00 (AudioServerIsFormatSupported.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIEndpointCharacteristics@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180008900 (-Release@-$RuntimeClass@U-$InterfaceList@UIEndpointCharacteristics@@VNil@Details@WRL@Microsoft@@.c)
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x18001B5C0 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180036490 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x180069398 (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 */

__int64 __fastcall AudioServerGetSharedModeEnginePeriod(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct tWAVEFORMATEX *a4,
        int a5,
        _DWORD *a6,
        _DWORD *a7,
        _DWORD *a8,
        _DWORD *a9)
{
  void *v10; // rbx
  int IsFormatSupported; // edi
  struct _GUID v15; // xmm6
  int v16; // eax
  int v17; // edx
  void (*v18)(void); // rax
  struct CEndpointCharacteristics *v20; // [rsp+68h] [rbp-41h] BYREF
  LPVOID pv; // [rsp+70h] [rbp-39h] BYREF
  void *v22; // [rsp+78h] [rbp-31h] BYREF
  struct _GUID v23; // [rsp+88h] [rbp-21h] BYREF
  struct _GUID v24; // [rsp+98h] [rbp-11h] BYREF
  struct _GUID v25; // [rsp+A8h] [rbp-1h] BYREF

  v20 = 0LL;
  v22 = 0LL;
  v10 = 0LL;
  pv = 0LL;
  IsFormatSupported = ValidateVadServerSettings((struct VadServerSettings *)a3);
  if ( IsFormatSupported < 0 )
    goto LABEL_7;
  IsFormatSupported = AudioServerIsFormatSupported(
                        a1,
                        a2,
                        0,
                        (unsigned int *)a3,
                        &a4->wFormatTag,
                        (struct tWAVEFORMATEX **)&v22);
  if ( IsFormatSupported < 0 )
    goto LABEL_7;
  IsFormatSupported = (*(__int64 (__fastcall **)(CEndpointCharacteristicsCache *, __int64, struct CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
                        g_pEndpointCharacteristicsCache,
                        a2,
                        &v20);
  if ( IsFormatSupported < 0 )
    goto LABEL_7;
  IsFormatSupported = DeriveAudioProcessingModeConfiguration(
                        *(_DWORD *)a3,
                        *(_DWORD *)(a3 + 8),
                        v20,
                        *((_DWORD *)v20 + 93) == 1,
                        0,
                        (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*(_DWORD *)(a3 + 4),
                        0,
                        *(_DWORD *)(a3 + 24),
                        &v23,
                        &v24,
                        &v25,
                        0LL);
  if ( IsFormatSupported < 0
    || (v15 = v23,
        v16 = DeriveConnectorFormatFromStreamFormat(
                v20,
                (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*(_DWORD *)(a3 + 4),
                a4,
                &v25,
                &v24,
                &v23,
                *(_DWORD *)(a3 + 20),
                (struct tWAVEFORMATEX **)&pv),
        v10 = pv,
        IsFormatSupported = v16,
        v16 < 0)
    || (v17 = *(_DWORD *)(a3 + 4),
        v25 = v15,
        IsFormatSupported = CEndpointCharacteristics::GetSharedModeEnginePeriodicity(
                              (__int64)v20,
                              v17,
                              (const struct tWAVEFORMATEX *)pv,
                              &v25,
                              a5 != 0,
                              a6,
                              a7,
                              a8,
                              a9),
        IsFormatSupported < 0) )
  {
LABEL_7:
    AudSrvTraceLoggingErrorHelper("AudioServerGetSharedModeEnginePeriod", 4103, IsFormatSupported);
  }
  CoTaskMemFree(v10);
  operator delete(v22, (const struct std::nothrow_t *)0x12);
  if ( v20 )
  {
    v18 = *(void (**)(void))(*(_QWORD *)v20 + 16LL);
    if ( (char *)v18 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IEndpointCharacteristics,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IEndpointCharacteristics,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((__int64)v20);
    else
      v18();
  }
  return (unsigned int)IsFormatSupported;
}
