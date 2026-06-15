/*
 * XREFs of AudioServerGetCurrentSharedModeEnginePeriod @ 0x180072670
 * Callers:
 *     <none>
 * Callees:
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HHPEAU_GUID@@444@Z @ 0x180003BB4 (-DeriveAudioProcessingModeConfiguration@@YAJKHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREA.c)
 *     ?ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z @ 0x180004388 (-ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIEndpointCharacteristics@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180008900 (-Release@-$RuntimeClass@U-$InterfaceList@UIEndpointCharacteristics@@VNil@Details@WRL@Microsoft@@.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@M@Z @ 0x18001AF20 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@M@Z.c)
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x18001B5C0 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x18001B720 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ?InternalRelease@?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180025004 (-InternalRelease@-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     MIDL_user_allocate @ 0x1800282C0 (MIDL_user_allocate.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800291CC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     WPP_SF_q @ 0x180038C50 (WPP_SF_q.c)
 *     memcpy_0 @ 0x180038F10 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?GetEndpointId@CEndpointCharacteristics@@QEAAJPEAPEAG@Z @ 0x18004EF24 (-GetEndpointId@CEndpointCharacteristics@@QEAAJPEAPEAG@Z.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x18006772C (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x180069398 (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 *     ?DeriveDevicePipeFormatFromConnectorFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x180069B84 (-DeriveDevicePipeFormatFromConnectorFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___.c)
 *     ?DeriveMixFormatFromDevicePipeFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x18006A020 (-DeriveMixFormatFromDevicePipeFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ?DeriveStreamFormatFromMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x18006A538 (-DeriveStreamFormatFromMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_a.c)
 *     ??$for_each@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@@std@@V_lambda_2c59ef132d6a4717c9cbd171e794a48a_@@@std@@YA?AV_lambda_2c59ef132d6a4717c9cbd171e794a48a_@@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@@0@0V1@@Z @ 0x1800707D0 (--$for_each@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@V-$ComPtr@UISaDeviceProxy@@@WRL@.c)
 *     ?_Destroy@?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@IEAAXPEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@0@Z @ 0x1800723DC (-_Destroy@-$vector@V-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UISaDeviceP.c)
 */

// Hidden C++ exception states: #wind=54
__int64 __fastcall AudioServerGetCurrentSharedModeEnginePeriod(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        _DWORD *a5)
{
  int EndpointId; // r12d
  int v9; // ebx
  int (*v10)(struct CEndpointCharacteristics *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001); // r9
  struct _GUID v11; // xmm6
  __int64 v12; // rbx
  int v13; // edi
  const struct tWAVEFORMATEX *v14; // rax
  struct _GUID *v15; // rdx
  struct IAudioMediaTypeVtbl *lpVtbl; // rax
  struct _GUID v17; // xmm6
  struct IAudioMediaType *v18; // rbx
  struct IAudioMediaTypeVtbl *v19; // rax
  struct IAudioMediaType *v20; // rdi
  struct IAudioMediaTypeVtbl *v21; // rax
  struct IAudioMediaType *v22; // rsi
  LPVOID v23; // r14
  const struct tWAVEFORMATEX *v24; // rax
  __int64 v25; // r15
  double v26; // xmm6_8
  struct _GUID v27; // xmm7
  struct tWAVEFORMATEX *v28; // rcx
  struct tWAVEFORMATEX *v29; // rsi
  struct IAudioMediaTypeVtbl *v30; // rax
  struct IAudioMediaType *v31; // rcx
  struct _GUID v32; // xmm8
  struct IAudioMediaType *v33; // rbx
  struct IAudioMediaTypeVtbl *v34; // rax
  struct IAudioMediaType *v35; // rdi
  const struct tWAVEFORMATEX *v36; // rax
  struct IAudioMediaType *v37; // r14
  ULONG (__stdcall *Release)(IAudioMediaType *); // rax
  unsigned __int16 *v39; // rbx
  void *v40; // rax
  void (*v41)(void); // rax
  __int64 v42; // rcx
  CEndpointCharacteristics *v44; // [rsp+60h] [rbp-A0h] BYREF
  struct IAudioMediaType *v45; // [rsp+68h] [rbp-98h] BYREF
  struct IAudioMediaType *v46; // [rsp+70h] [rbp-90h] BYREF
  struct IAudioMediaType *v47; // [rsp+78h] [rbp-88h] BYREF
  void *Src[2]; // [rsp+80h] [rbp-80h] BYREF
  struct _GUID v49; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int16 *v50; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v51; // [rsp+A8h] [rbp-58h] BYREF
  LPVOID pv[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 *v53; // [rsp+C0h] [rbp-40h]
  void *v54[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v55; // [rsp+E0h] [rbp-20h]
  struct _GUID v56; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v57[2]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v58[16]; // [rsp+110h] [rbp+10h] BYREF
  __int64 *v59; // [rsp+120h] [rbp+20h]

  v57[1] = -2LL;
  Src[0] = 0LL;
  v51 = 0LL;
  *(_OWORD *)v54 = 0LL;
  v55 = 0LL;
  v50 = 0LL;
  v44 = 0LL;
  v57[0] = 0LL;
  EndpointId = ValidateVadServerSettings((struct VadServerSettings *)a3);
  if ( EndpointId < 0 )
    goto LABEL_73;
  EndpointId = (*(__int64 (__fastcall **)(CEndpointCharacteristicsCache *, __int64, CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
                 g_pEndpointCharacteristicsCache,
                 a2,
                 &v44);
  if ( EndpointId < 0 )
    goto LABEL_73;
  EndpointId = CEndpointCharacteristics::GetEndpointId(v44, &v50);
  if ( EndpointId < 0 )
    goto LABEL_73;
  EndpointId = DeriveAudioProcessingModeConfiguration(
                 *(_DWORD *)a3,
                 *(_DWORD *)(a3 + 8),
                 v44,
                 *((_DWORD *)v44 + 93) == 1,
                 0,
                 (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*(_DWORD *)(a3 + 4),
                 0,
                 *(_DWORD *)(a3 + 24),
                 (GUID *)pv,
                 &v56,
                 &v49,
                 0LL);
  if ( EndpointId < 0 )
    goto LABEL_73;
  EndpointId = (*(__int64 (__fastcall **)(CDeviceGraphStore *, unsigned __int16 *, _QWORD *))(*(_QWORD *)g_DeviceGraphStore
                                                                                            + 24LL))(
                 g_DeviceGraphStore,
                 v50,
                 v57);
  if ( EndpointId < 0 )
    goto LABEL_73;
  v9 = (*(__int64 (__fastcall **)(_QWORD, void **))(*(_QWORD *)v57[0] + 72LL))(v57[0], v54);
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x38u,
      (__int64)&WPP_1922e64f6368316c9ff2859d8f49dc96_Traceguids,
      ((char *)v54[1] - (char *)v54[0]) >> 3);
  }
  v11 = *(struct _GUID *)pv;
  if ( v9 >= 0 )
  {
    v59 = &v51;
    v53 = &v51;
    std::for_each<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Microsoft::WRL::ComPtr<ISaDeviceProxy>>>>,_lambda_2c59ef132d6a4717c9cbd171e794a48a_>(
      (__int64)v58,
      (__int64)v54[0],
      (__int64)v54[1],
      (__int64)pv);
  }
  v12 = v51;
  v45 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  pv[0] = 0LL;
  if ( v51 )
  {
    v13 = *(unsigned __int16 *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v51 + 48LL))(v51) + 16);
    v14 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 48LL))(v12);
    EndpointId = CAudioMediaType::Create(v14, v13 + 18, &v45, 0.0);
    if ( EndpointId < 0 )
    {
      if ( !v45 )
        goto LABEL_72;
      lpVtbl = v45->lpVtbl;
      goto LABEL_16;
    }
    v17 = v56;
    v49 = v56;
    v18 = v45;
    EndpointId = DeriveDevicePipeFormatFromConnectorFormat(
                   v44,
                   v15,
                   (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*(_DWORD *)(a3 + 4),
                   (struct IUnknown *)v45,
                   &v46);
    if ( EndpointId < 0 )
    {
      if ( !v46 )
        goto LABEL_21;
      v19 = v46->lpVtbl;
      goto LABEL_20;
    }
    v56 = v17;
    v20 = v46;
    EndpointId = DeriveMixFormatFromDevicePipeFormat(
                   v44,
                   &v56,
                   (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*(_DWORD *)(a3 + 4),
                   (struct IUnknown *)v46,
                   &v47);
    if ( EndpointId < 0 )
    {
      if ( !v47 )
      {
LABEL_27:
        if ( !v20 )
        {
LABEL_21:
          if ( v18 )
          {
            lpVtbl = v18->lpVtbl;
LABEL_16:
            ((void (*)(void))lpVtbl->Release)();
          }
LABEL_72:
          if ( EndpointId >= 0 )
            goto LABEL_74;
          goto LABEL_73;
        }
        v19 = v20->lpVtbl;
LABEL_20:
        ((void (*)(void))v19->Release)();
        goto LABEL_21;
      }
      v21 = v47->lpVtbl;
LABEL_26:
      ((void (*)(void))v21->Release)();
      goto LABEL_27;
    }
    v56 = v17;
    v22 = v47;
    EndpointId = DeriveStreamFormatFromMixFormat(
                   v44,
                   &v56,
                   (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*(_DWORD *)(a3 + 4),
                   (struct IUnknown *)v47,
                   (struct IAudioMediaType **)pv);
    if ( EndpointId < 0 )
    {
      if ( pv[0] )
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)pv[0] + 16LL))(pv[0]);
      goto LABEL_32;
    }
    v23 = pv[0];
    v24 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(LPVOID))(*(_QWORD *)pv[0] + 40LL))(pv[0]);
    EndpointId = CloneWaveFormat(v24, (struct tWAVEFORMATEX **)Src);
    if ( EndpointId < 0 )
    {
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v23 + 16LL))(v23);
LABEL_32:
      if ( !v22 )
        goto LABEL_27;
      v21 = v22->lpVtbl;
      goto LABEL_26;
    }
    v25 = v51;
    v26 = (double)*(int *)(((__int64 (__fastcall *)(struct IAudioMediaType *))v18->lpVtbl->GetAudioFormat)(v18) + 4);
    *a5 = (int)((double)(*(int (__fastcall **)(__int64))(*(_QWORD *)v25 + 32LL))(v25) * v26 / 10000000.0 + 0.5);
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v23 + 16LL))(v23);
    if ( v22 )
      ((void (__fastcall *)(struct IAudioMediaType *))v22->lpVtbl->Release)(v22);
    if ( v20 )
      ((void (__fastcall *)(struct IAudioMediaType *))v20->lpVtbl->Release)(v20);
    ((void (__fastcall *)(struct IAudioMediaType *))v18->lpVtbl->Release)(v18);
    goto LABEL_69;
  }
  v27 = v49;
  EndpointId = CEndpointCharacteristics::GetMixFormat(
                 v44,
                 (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*(_DWORD *)(a3 + 4),
                 &v49,
                 v10,
                 (struct tWAVEFORMATEX **)pv);
  if ( EndpointId < 0 )
  {
    CoTaskMemFree(0LL);
    v28 = (struct tWAVEFORMATEX *)pv[0];
LABEL_43:
    CoTaskMemFree(v28);
    goto LABEL_72;
  }
  v29 = (struct tWAVEFORMATEX *)pv[0];
  EndpointId = CAudioMediaType::Create(
                 (const struct tWAVEFORMATEX *)pv[0],
                 (unsigned int)*((unsigned __int16 *)pv[0] + 8) + 18,
                 &v47,
                 0.0);
  if ( EndpointId < 0 )
  {
    if ( !v47 )
    {
LABEL_48:
      v31 = 0LL;
LABEL_49:
      CoTaskMemFree(v31);
      v28 = v29;
      goto LABEL_43;
    }
    v30 = v47->lpVtbl;
LABEL_47:
    ((void (*)(void))v30->Release)();
    goto LABEL_48;
  }
  v32 = v56;
  v49 = v56;
  v33 = v47;
  EndpointId = DeriveStreamFormatFromMixFormat(
                 v44,
                 &v49,
                 (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*(_DWORD *)(a3 + 4),
                 (struct IUnknown *)v47,
                 &v46);
  if ( EndpointId < 0 )
  {
    if ( !v46 )
    {
LABEL_54:
      if ( !v33 )
        goto LABEL_48;
      v30 = v33->lpVtbl;
      goto LABEL_47;
    }
    v34 = v46->lpVtbl;
LABEL_53:
    ((void (*)(void))v34->Release)();
    goto LABEL_54;
  }
  v35 = v46;
  v36 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v46->lpVtbl->GetAudioFormat)(v46);
  EndpointId = CloneWaveFormat(v36, (struct tWAVEFORMATEX **)Src);
  if ( EndpointId < 0 )
  {
    v34 = v35->lpVtbl;
    goto LABEL_53;
  }
  v49 = v11;
  v56 = v32;
  *(struct _GUID *)pv = v27;
  EndpointId = DeriveConnectorFormatFromStreamFormat(
                 v44,
                 (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*(_DWORD *)(a3 + 4),
                 v29,
                 (struct _GUID *)pv,
                 &v56,
                 &v49,
                 *(_DWORD *)(a3 + 20),
                 (struct tWAVEFORMATEX **)&v45);
  if ( EndpointId < 0 )
  {
    ((void (__fastcall *)(struct IAudioMediaType *))v35->lpVtbl->Release)(v35);
    if ( v33 )
      ((void (__fastcall *)(struct IAudioMediaType *))v33->lpVtbl->Release)(v33);
    v31 = v45;
    goto LABEL_49;
  }
  v49 = v11;
  v37 = v45;
  EndpointId = CEndpointCharacteristics::GetSharedModeEnginePeriodicity(
                 (__int64)v44,
                 *(_DWORD *)(a3 + 4),
                 (const struct tWAVEFORMATEX *)v45,
                 &v49,
                 0,
                 a5,
                 0LL,
                 0LL,
                 0LL);
  Release = v35->lpVtbl->Release;
  if ( EndpointId < 0 )
  {
    ((void (__fastcall *)(struct IAudioMediaType *))Release)(v35);
    if ( v33 )
      ((void (__fastcall *)(struct IAudioMediaType *))v33->lpVtbl->Release)(v33);
    CoTaskMemFree(v37);
    CoTaskMemFree(v29);
    goto LABEL_72;
  }
  ((void (__fastcall *)(struct IAudioMediaType *))Release)(v35);
  if ( v33 )
    ((void (__fastcall *)(struct IAudioMediaType *))v33->lpVtbl->Release)(v33);
  CoTaskMemFree(v37);
  CoTaskMemFree(v29);
LABEL_69:
  v39 = (unsigned __int16 *)Src[0];
  v40 = MIDL_user_allocate(*((unsigned __int16 *)Src[0] + 8) + 18LL);
  *a4 = v40;
  if ( v40 )
  {
    memcpy_0(v40, Src[0], v39[8] + 18LL);
    goto LABEL_72;
  }
  EndpointId = -2147024882;
LABEL_73:
  AudSrvTraceLoggingErrorHelper("AudioServerGetCurrentSharedModeEnginePeriod", 4256, EndpointId);
LABEL_74:
  if ( v57[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v57[0] + 16LL))(v57[0]);
  if ( v44 )
  {
    v41 = *(void (**)(void))(*(_QWORD *)v44 + 16LL);
    if ( (char *)v41 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IEndpointCharacteristics,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IEndpointCharacteristics,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((__int64)v44);
    else
      v41();
  }
  CoTaskMemFree(v50);
  v50 = 0LL;
  if ( v54[0] )
  {
    std::vector<Microsoft::WRL::ComPtr<ISaDeviceProxy>>::_Destroy(v42, (__int64 *)v54[0], (__int64 *)v54[1]);
    std::_Deallocate((_QWORD *)v54[0], (signed __int64)(v55 - (unsigned __int64)v54[0]) >> 3, 8uLL);
    v54[0] = 0LL;
    v54[1] = 0LL;
    v55 = 0LL;
  }
  Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalRelease(&v51);
  CoTaskMemFree(Src[0]);
  return (unsigned int)EndpointId;
}
