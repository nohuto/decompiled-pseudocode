/*
 * XREFs of AudioServerGetCurrentSharedModeEnginePeriod @ 0x180089190
 * Callers:
 *     <none>
 * Callees:
 *     ?GetEndpointId@CEndpointCharacteristics@@QEAAJPEAPEAG@Z @ 0x180012DC8 (-GetEndpointId@CEndpointCharacteristics@@QEAAJPEAPEAG@Z.c)
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@PEAI333@Z @ 0x180012E10 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?GetMixFormatInternal@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18001A800 (-GetMixFormatInternal@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audi.c)
 *     ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointCharacteristics@@@Z @ 0x18001BA20 (-GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointChara.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001BEC0 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@M@Z @ 0x180020DE0 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@M@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HPEAU_GUID@@444@Z @ 0x1800317E0 (-DeriveAudioProcessingModeConfiguration@@YAJKHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREA.c)
 *     MIDL_user_allocate @ 0x180038320 (MIDL_user_allocate.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     memcpy_0 @ 0x18004799C (memcpy_0.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x180048AAC (WPP_SF_q.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180065958 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x18007F8A0 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x180080A50 (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 *     ?DeriveDevicePipeFormatFromConnectorFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x180081298 (-DeriveDevicePipeFormatFromConnectorFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___.c)
 *     ?DeriveMixFormatFromDevicePipeFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x1800817E0 (-DeriveMixFormatFromDevicePipeFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ?DeriveStreamFormatFromMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x180081D6C (-DeriveStreamFormatFromMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_a.c)
 *     ??$for_each@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@@std@@V_lambda_0360a2297a44f13f87cc95834c07ff14_@@@std@@YA?AV_lambda_0360a2297a44f13f87cc95834c07ff14_@@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@@0@0V1@@Z @ 0x1800870B4 (--$for_each@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@V-$ComPtr@UISaDeviceProxy@@@WRL@.c)
 *     ?ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z @ 0x180088E80 (-ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z.c)
 *     ?_Destroy@?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@IEAAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@0@Z @ 0x18008E940 (-_Destroy@-$vector@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIStream.c)
 */

__int64 __fastcall AudioServerGetCurrentSharedModeEnginePeriod(
        __int64 a1,
        const unsigned __int16 *a2,
        __int64 a3,
        _QWORD *a4,
        unsigned int *a5)
{
  CEndpointCharacteristics *v5; // rsi
  int EndpointId; // r13d
  int AliasedEndpointCharacteristics; // eax
  int v10; // ebx
  struct _GUID v11; // xmm6
  __int64 v12; // rbx
  int v13; // r14d
  const struct tWAVEFORMATEX *v14; // rax
  int v15; // eax
  struct _GUID *v16; // rdx
  struct tWAVEFORMATEX *v17; // rbx
  struct _GUID v18; // xmm6
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v19; // r8d
  int v20; // eax
  struct IAudioMediaType *v21; // rdi
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v22; // r8d
  int v23; // eax
  struct IAudioMediaType *v24; // r14
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v25; // r8d
  int v26; // eax
  LPVOID v27; // r15
  const struct tWAVEFORMATEX *v28; // rax
  __int64 v29; // r13
  double v30; // xmm6_8
  struct _GUID v31; // xmm7
  struct tWAVEFORMATEX *v32; // rcx
  struct tWAVEFORMATEX *v33; // r14
  int v34; // eax
  struct IAudioMediaType *v35; // rbx
  struct tWAVEFORMATEX *v36; // rcx
  struct _GUID v37; // xmm8
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v38; // r8d
  int v39; // eax
  struct IAudioMediaType *v40; // rdi
  const struct tWAVEFORMATEX *v41; // rax
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v42; // edx
  unsigned int v43; // edx
  struct tWAVEFORMATEX *v44; // r15
  ULONG (__stdcall *Release)(IAudioMediaType *); // r12
  unsigned __int16 *v46; // rbx
  void *v47; // rax
  __int64 (__fastcall *v48)(volatile signed __int32 *); // rbx
  __int64 v49; // rcx
  int v51; // [rsp+38h] [rbp-D0h]
  struct tWAVEFORMATEX *v52; // [rsp+68h] [rbp-A0h] BYREF
  struct IAudioMediaType *v53; // [rsp+70h] [rbp-98h] BYREF
  struct IAudioMediaType *v54[2]; // [rsp+78h] [rbp-90h] BYREF
  LPVOID pv[2]; // [rsp+88h] [rbp-80h] BYREF
  __int64 *v56; // [rsp+98h] [rbp-70h]
  void *Src[2]; // [rsp+A8h] [rbp-60h] BYREF
  struct _GUID v58; // [rsp+B8h] [rbp-50h] BYREF
  unsigned __int16 *v59; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v60; // [rsp+D0h] [rbp-38h] BYREF
  struct _GUID v61; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v62; // [rsp+E8h] [rbp-20h] BYREF
  void *v63[2]; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v64; // [rsp+100h] [rbp-8h]
  _BYTE v65[16]; // [rsp+108h] [rbp+0h] BYREF
  __int64 *v66; // [rsp+118h] [rbp+10h]

  Src[0] = 0LL;
  v60 = 0LL;
  v5 = 0LL;
  v62 = 0LL;
  v64 = 0LL;
  v59 = 0LL;
  *(_OWORD *)v63 = 0LL;
  pv[0] = 0LL;
  EndpointId = ValidateVadServerSettings((struct VadServerSettings *)a3);
  if ( EndpointId < 0 )
    goto LABEL_58;
  AliasedEndpointCharacteristics = CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics(
                                     (RTL_SRWLOCK *)g_pEndpointCharacteristicsCache,
                                     a2,
                                     (struct CEndpointCharacteristics **)pv);
  v5 = (CEndpointCharacteristics *)pv[0];
  EndpointId = AliasedEndpointCharacteristics;
  if ( AliasedEndpointCharacteristics < 0 )
    goto LABEL_58;
  EndpointId = CEndpointCharacteristics::GetEndpointId((CEndpointCharacteristics *)pv[0], &v59);
  if ( EndpointId < 0 )
    goto LABEL_58;
  EndpointId = DeriveAudioProcessingModeConfiguration(
                 *(_DWORD *)a3,
                 *(_DWORD *)(a3 + 8),
                 v5,
                 *((_DWORD *)v5 + 93) == 1,
                 0,
                 (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*(_DWORD *)(a3 + 4),
                 0,
                 (GUID *)pv,
                 &v61,
                 &v58,
                 0LL);
  if ( EndpointId < 0 )
    goto LABEL_58;
  EndpointId = (*(__int64 (__fastcall **)(CDeviceGraphStore *, unsigned __int16 *, __int64 *))(*(_QWORD *)g_DeviceGraphStore
                                                                                             + 24LL))(
                 g_DeviceGraphStore,
                 v59,
                 &v62);
  if ( EndpointId < 0 )
    goto LABEL_58;
  v10 = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v62 + 72LL))(v62, v63);
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x67u,
      (__int64)&WPP_8fcf0ce21d4e3a3e0240111d41fb5ad7_Traceguids,
      ((char *)v63[1] - (char *)v63[0]) >> 3);
  }
  v11 = *(struct _GUID *)pv;
  if ( v10 >= 0 )
  {
    v66 = &v60;
    v56 = &v60;
    std::for_each<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Microsoft::WRL::ComPtr<ISaDeviceProxy>>>>,_lambda_0360a2297a44f13f87cc95834c07ff14_>(
      (__int64)v65,
      (__int64)v63[0],
      (__int64)v63[1],
      (__int64)pv);
  }
  v12 = v60;
  v52 = 0LL;
  v54[0] = 0LL;
  v53 = 0LL;
  pv[0] = 0LL;
  if ( v60 )
  {
    v13 = *(unsigned __int16 *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v60 + 48LL))(v60) + 16);
    v14 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 48LL))(v12);
    v15 = CAudioMediaType::Create(v14, v13 + 18, (struct IAudioMediaType **)&v52, 0.0);
    v17 = v52;
    EndpointId = v15;
    if ( v15 < 0 )
    {
LABEL_14:
      if ( v17 )
        (*(void (__fastcall **)(struct tWAVEFORMATEX *))(*(_QWORD *)&v17->wFormatTag + 16LL))(v17);
LABEL_57:
      if ( EndpointId >= 0 )
        goto LABEL_62;
      goto LABEL_58;
    }
    v18 = v61;
    v19 = *(_DWORD *)(a3 + 4);
    v58 = v61;
    v20 = DeriveDevicePipeFormatFromConnectorFormat(v5, v16, v19, (struct IUnknown *)v52, v54);
    v21 = v54[0];
    EndpointId = v20;
    if ( v20 < 0 )
    {
LABEL_17:
      if ( v21 )
        ((void (__fastcall *)(struct IAudioMediaType *))v21->lpVtbl->Release)(v21);
      goto LABEL_14;
    }
    v22 = *(_DWORD *)(a3 + 4);
    v61 = v18;
    v23 = DeriveMixFormatFromDevicePipeFormat(v5, &v61, v22, (struct IUnknown *)v54[0], &v53);
    v24 = v53;
    EndpointId = v23;
    if ( v23 < 0 )
    {
LABEL_20:
      if ( v24 )
        ((void (__fastcall *)(struct IAudioMediaType *))v24->lpVtbl->Release)(v24);
      goto LABEL_17;
    }
    v25 = *(_DWORD *)(a3 + 4);
    v61 = v18;
    v26 = DeriveStreamFormatFromMixFormat(v5, &v61, v25, (struct IUnknown *)v53, (struct IAudioMediaType **)pv);
    v27 = pv[0];
    EndpointId = v26;
    if ( v26 < 0 )
    {
      if ( !pv[0] )
        goto LABEL_20;
      goto LABEL_24;
    }
    v28 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(LPVOID))(*(_QWORD *)pv[0] + 40LL))(pv[0]);
    LODWORD(v52) = CloneWaveFormat(v28, (struct tWAVEFORMATEX **)Src);
    EndpointId = (int)v52;
    if ( (int)v52 < 0 )
    {
LABEL_24:
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v27 + 16LL))(v27);
      goto LABEL_20;
    }
    v29 = v60;
    v30 = (double)*(int *)((*(__int64 (__fastcall **)(struct tWAVEFORMATEX *))(*(_QWORD *)&v17->wFormatTag + 40LL))(v17)
                         + 4);
    *a5 = (int)((double)(*(int (__fastcall **)(__int64))(*(_QWORD *)v29 + 32LL))(v29) * v30 / 10000000.0 + 0.5);
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v27 + 16LL))(v27);
    if ( v24 )
      ((void (__fastcall *)(struct IAudioMediaType *))v24->lpVtbl->Release)(v24);
    if ( v21 )
      ((void (__fastcall *)(struct IAudioMediaType *))v21->lpVtbl->Release)(v21);
    (*(void (__fastcall **)(struct tWAVEFORMATEX *))(*(_QWORD *)&v17->wFormatTag + 16LL))(v17);
    EndpointId = (int)v52;
    goto LABEL_54;
  }
  v31 = v58;
  EndpointId = CPolicyConfig::GetMixFormatInternal(
                 g_PolicyConfig,
                 v5,
                 (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*(_DWORD *)(a3 + 4),
                 &v58,
                 (struct tWAVEFORMATEX **)pv);
  if ( EndpointId < 0 )
  {
    CoTaskMemFree(0LL);
    v32 = (struct tWAVEFORMATEX *)pv[0];
LABEL_33:
    CoTaskMemFree(v32);
    goto LABEL_57;
  }
  v33 = (struct tWAVEFORMATEX *)pv[0];
  v34 = CAudioMediaType::Create(
          (const struct tWAVEFORMATEX *)pv[0],
          (unsigned int)*((unsigned __int16 *)pv[0] + 8) + 18,
          &v53,
          0.0);
  v35 = v53;
  EndpointId = v34;
  if ( v34 < 0 )
    goto LABEL_35;
  v37 = v61;
  v38 = *(_DWORD *)(a3 + 4);
  v58 = v61;
  v39 = DeriveStreamFormatFromMixFormat(v5, &v58, v38, (struct IUnknown *)v53, v54);
  v40 = v54[0];
  EndpointId = v39;
  if ( v39 < 0 )
  {
    if ( !v54[0] )
    {
LABEL_35:
      if ( v35 )
        ((void (__fastcall *)(struct IAudioMediaType *))v35->lpVtbl->Release)(v35);
      v36 = 0LL;
LABEL_38:
      CoTaskMemFree(v36);
      v32 = v33;
      goto LABEL_33;
    }
LABEL_41:
    ((void (__fastcall *)(struct IAudioMediaType *))v40->lpVtbl->Release)(v40);
    goto LABEL_35;
  }
  v41 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v54[0]->lpVtbl->GetAudioFormat)(v54[0]);
  EndpointId = CloneWaveFormat(v41, (struct tWAVEFORMATEX **)Src);
  if ( EndpointId < 0 )
    goto LABEL_41;
  v42 = *(_DWORD *)(a3 + 4);
  v51 = *(_DWORD *)(a3 + 16);
  v58 = v11;
  v61 = v37;
  *(struct _GUID *)pv = v31;
  EndpointId = DeriveConnectorFormatFromStreamFormat(v5, v42, v33, (struct _GUID *)pv, &v61, &v58, v51, &v52);
  if ( EndpointId < 0 )
  {
    ((void (__fastcall *)(struct IAudioMediaType *))v40->lpVtbl->Release)(v40);
    if ( v35 )
      ((void (__fastcall *)(struct IAudioMediaType *))v35->lpVtbl->Release)(v35);
    v36 = v52;
    goto LABEL_38;
  }
  v43 = *(_DWORD *)(a3 + 4);
  v44 = v52;
  v58 = v11;
  EndpointId = CEndpointCharacteristics::GetSharedModeEnginePeriodicity(v5, v43, v52, &v58, a5, 0LL, 0LL, 0LL);
  Release = v40->lpVtbl->Release;
  if ( EndpointId < 0 )
  {
    ((void (__fastcall *)(struct IAudioMediaType *))Release)(v40);
    if ( v35 )
      ((void (__fastcall *)(struct IAudioMediaType *))v35->lpVtbl->Release)(v35);
    v36 = v44;
    goto LABEL_38;
  }
  ((void (__fastcall *)(struct IAudioMediaType *))Release)(v40);
  if ( v35 )
    ((void (__fastcall *)(struct IAudioMediaType *))v35->lpVtbl->Release)(v35);
  CoTaskMemFree(v44);
  CoTaskMemFree(v33);
LABEL_54:
  v46 = (unsigned __int16 *)Src[0];
  v47 = MIDL_user_allocate(*((unsigned __int16 *)Src[0] + 8) + 18LL);
  *a4 = v47;
  if ( v47 )
  {
    memcpy_0(v47, Src[0], v46[8] + 18LL);
    goto LABEL_57;
  }
  EndpointId = -2147024882;
LABEL_58:
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x68u,
      (__int64)&WPP_8fcf0ce21d4e3a3e0240111d41fb5ad7_Traceguids,
      EndpointId);
  }
LABEL_62:
  if ( v62 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v62 + 16LL))(v62);
  if ( v5 )
  {
    v48 = *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 16LL);
    if ( v48 == Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)v5);
    else
      v48((volatile signed __int32 *)v5);
  }
  CoTaskMemFree(v59);
  v59 = 0LL;
  if ( v63[0] )
  {
    std::vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>::_Destroy(v49, v63[0], v63[1]);
    operator delete(v63[0]);
    v64 = 0LL;
    *(_OWORD *)v63 = 0LL;
  }
  Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v60);
  CoTaskMemFree(Src[0]);
  return (unsigned int)EndpointId;
}
