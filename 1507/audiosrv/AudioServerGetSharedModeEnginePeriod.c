/*
 * XREFs of AudioServerGetSharedModeEnginePeriod @ 0x18008D670
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HPEAU_GUID@@444@Z @ 0x180020690 (-DeriveAudioProcessingModeConfiguration@@YAJKHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREA.c)
 *     AudioServerIsFormatSupported @ 0x180022F00 (AudioServerIsFormatSupported.c)
 *     ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointCharacteristics@@@Z @ 0x180023D70 (-GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointChara.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180024370 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z @ 0x1800327BC (-ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@PEAI333@Z @ 0x180066460 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x18008553C (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
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
  struct IMMDevice **v9; // rbx
  void *v10; // rdi
  int IsFormatSupported; // esi
  CEndpointCharacteristicsCache *v15; // rcx
  int AliasedEndpointCharacteristics; // eax
  struct _GUID v17; // xmm6
  int v18; // eax
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v19; // edx
  volatile int *v20; // rdx
  unsigned int (__fastcall *lpVtbl)(__int64, volatile int *); // rdi
  LPVOID pv; // [rsp+68h] [rbp-49h] BYREF
  struct _GUID v24; // [rsp+78h] [rbp-39h] BYREF
  void *v25; // [rsp+88h] [rbp-29h] BYREF
  struct _GUID v26; // [rsp+98h] [rbp-19h] BYREF
  struct _GUID v27; // [rsp+A8h] [rbp-9h] BYREF

  v9 = 0LL;
  v10 = 0LL;
  v25 = 0LL;
  *(_QWORD *)&v24.Data1 = 0LL;
  pv = 0LL;
  IsFormatSupported = ValidateVadServerSettings((struct VadServerSettings *)a3);
  if ( IsFormatSupported < 0 )
    goto LABEL_9;
  IsFormatSupported = AudioServerIsFormatSupported(a1, a2, 0, (_DWORD *)a3, a4, (struct tWAVEFORMATEX **)&v25);
  if ( IsFormatSupported < 0 )
    goto LABEL_9;
  AliasedEndpointCharacteristics = CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics(
                                     v15,
                                     a2,
                                     (struct CEndpointCharacteristics **)&v24);
  v9 = *(struct IMMDevice ***)&v24.Data1;
  IsFormatSupported = AliasedEndpointCharacteristics;
  if ( AliasedEndpointCharacteristics < 0 )
    goto LABEL_9;
  IsFormatSupported = DeriveAudioProcessingModeConfiguration(
                        *(_DWORD *)a3,
                        *(_DWORD *)(a3 + 8),
                        *(CEndpointCharacteristics **)&v24.Data1,
                        *(_DWORD *)(*(_QWORD *)&v24.Data1 + 372LL) == 1,
                        0,
                        (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*(_DWORD *)(a3 + 4),
                        0,
                        &v24,
                        &v26,
                        &v27,
                        0LL);
  if ( IsFormatSupported < 0
    || (v17 = v24,
        v18 = DeriveConnectorFormatFromStreamFormat(
                v9,
                (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*(_DWORD *)(a3 + 4),
                a4,
                &v27,
                &v26,
                &v24,
                *(_DWORD *)(a3 + 16),
                (struct tWAVEFORMATEX **)&pv),
        v10 = pv,
        IsFormatSupported = v18,
        v18 < 0)
    || (v19 = *(_DWORD *)(a3 + 4),
        v27 = v17,
        IsFormatSupported = CEndpointCharacteristics::GetSharedModeEnginePeriodicity(
                              (CEndpointCharacteristics *)v9,
                              v19,
                              (const struct tWAVEFORMATEX *)pv,
                              &v27,
                              a5,
                              a6,
                              a7,
                              a8),
        IsFormatSupported < 0) )
  {
LABEL_9:
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x68u,
        (__int64)&WPP_1ce008ef94d310117402048c610b448c_Traceguids,
        IsFormatSupported);
    }
  }
  CoTaskMemFree(v10);
  operator delete(v25);
  if ( v9 )
  {
    lpVtbl = (unsigned int (__fastcall *)(__int64, volatile int *))(*v9)[2].lpVtbl;
    if ( lpVtbl == Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(
        (__int64)v9,
        v20);
    else
      ((void (__fastcall *)(struct IMMDevice **))lpVtbl)(v9);
  }
  return (unsigned int)IsFormatSupported;
}
