/*
 * XREFs of AudioServerGetCurrentSharedModeEnginePeriod @ 0x18008C790
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@M@Z @ 0x18001EA40 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@M@Z.c)
 *     ?GetMixFormatInternal@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18001F934 (-GetMixFormatInternal@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audi.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HPEAU_GUID@@444@Z @ 0x180020690 (-DeriveAudioProcessingModeConfiguration@@YAJKHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREA.c)
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x180021740 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointCharacteristics@@@Z @ 0x180023D70 (-GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointChara.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180024370 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     MIDL_user_allocate @ 0x180030500 (MIDL_user_allocate.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z @ 0x1800327BC (-ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z.c)
 *     ?DeriveMixFormatFromDevicePipeFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x1800330E8 (-DeriveMixFormatFromDevicePipeFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ?DeriveDevicePipeFormatFromConnectorFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x180033FFC (-DeriveDevicePipeFormatFromConnectorFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180034BE8 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     memcpy_0 @ 0x180043A58 (memcpy_0.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 *     ?GetEndpointId@CEndpointCharacteristics@@QEAAJPEAPEAG@Z @ 0x180066380 (-GetEndpointId@CEndpointCharacteristics@@QEAAJPEAPEAG@Z.c)
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@PEAI333@Z @ 0x180066460 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18006714C (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x18008553C (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 *     ?DeriveStreamFormatFromMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x180086008 (-DeriveStreamFormatFromMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_a.c)
 *     ??$for_each@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@@std@@V_lambda_0360a2297a44f13f87cc95834c07ff14_@@@std@@YA?AV_lambda_0360a2297a44f13f87cc95834c07ff14_@@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@@0@0V1@@Z @ 0x180089D34 (--$for_each@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@V-$ComPtr@UISaDeviceProxy@@@WRL@.c)
 *     ?_Destroy@?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@IEAAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@0@Z @ 0x180091030 (-_Destroy@-$vector@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIStream.c)
 */

__int64 __fastcall AudioServerGetCurrentSharedModeEnginePeriod(
        __int64 a1,
        const unsigned __int16 *a2,
        __int64 a3,
        _QWORD *a4,
        unsigned int *a5)
{
  CEndpointCharacteristics *v5; // r14
  struct _GUID *v8; // rdx
  CEndpointCharacteristicsCache *v9; // rcx
  int EndpointId; // r13d
  int AliasedEndpointCharacteristics; // eax
  int v12; // ebx
  struct _GUID v13; // xmm6
  __int64 v14; // rbx
  int v15; // esi
  const struct tWAVEFORMATEX *v16; // rax
  int v17; // eax
  CAudioMediaType *v18; // rbx
  __int64 (__fastcall *v19)(CAudioMediaType *); // rdi
  struct _GUID v20; // xmm6
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v21; // r8d
  int v22; // eax
  CAudioMediaType *v23; // rdi
  __int64 (__fastcall *v24)(CAudioMediaType *); // rsi
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v25; // r8d
  int v26; // eax
  CAudioMediaType *v27; // rsi
  __int64 (__fastcall *v28)(CAudioMediaType *); // r15
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v29; // r8d
  int v30; // eax
  CAudioMediaType *v31; // r15
  const struct tWAVEFORMATEX *v32; // rax
  __int64 v33; // r13
  double v34; // xmm6_8
  __int64 (__fastcall *v35)(CAudioMediaType *); // r13
  __int64 (__fastcall *v36)(CAudioMediaType *); // r15
  __int64 (__fastcall *v37)(CAudioMediaType *); // rsi
  __int64 (__fastcall *v38)(CAudioMediaType *); // rdi
  struct _GUID v39; // xmm7
  struct tWAVEFORMATEX *v40; // rcx
  struct tWAVEFORMATEX *v41; // rsi
  int v42; // eax
  CAudioMediaType *v43; // rbx
  __int64 (__fastcall *v44)(CAudioMediaType *); // rdi
  struct IAudioMediaType *v45; // rcx
  struct _GUID v46; // xmm8
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v47; // r8d
  int v48; // eax
  CAudioMediaType *v49; // rdi
  __int64 (__fastcall *v50)(CAudioMediaType *); // r15
  const struct tWAVEFORMATEX *v51; // rax
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v52; // edx
  __int64 (__fastcall *v53)(CAudioMediaType *); // r15
  __int64 (__fastcall *v54)(CAudioMediaType *); // rdi
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v55; // edx
  struct IAudioMediaType *v56; // r15
  __int64 (__fastcall *v57)(CAudioMediaType *); // rax
  __int64 (__fastcall *v58)(CAudioMediaType *); // rdi
  __int64 (__fastcall *v59)(CAudioMediaType *); // rdi
  unsigned __int16 *v60; // rbx
  void *v61; // rax
  unsigned int (__fastcall *v62)(__int64, volatile int *); // rbx
  __int64 v63; // rcx
  int v65; // [rsp+38h] [rbp-D0h]
  struct IAudioMediaType *v66; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD pv[5]; // [rsp+70h] [rbp-98h] BYREF
  struct IAudioMediaType *v68; // [rsp+98h] [rbp-70h] BYREF
  struct IAudioMediaType *v69; // [rsp+A0h] [rbp-68h] BYREF
  void *Src[2]; // [rsp+A8h] [rbp-60h] BYREF
  struct _GUID v71; // [rsp+B8h] [rbp-50h] BYREF
  unsigned __int16 *v72; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v73; // [rsp+D0h] [rbp-38h] BYREF
  struct _GUID v74; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v75; // [rsp+E8h] [rbp-20h] BYREF
  void *v76[2]; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v77; // [rsp+100h] [rbp-8h]
  _BYTE v78[16]; // [rsp+108h] [rbp+0h] BYREF
  __int64 *v79; // [rsp+118h] [rbp+10h]

  Src[0] = 0LL;
  v73 = 0LL;
  v5 = 0LL;
  v75 = 0LL;
  v77 = 0LL;
  v72 = 0LL;
  *(_OWORD *)v76 = 0LL;
  pv[1] = 0LL;
  EndpointId = ValidateVadServerSettings((struct VadServerSettings *)a3);
  if ( EndpointId < 0 )
    goto LABEL_101;
  AliasedEndpointCharacteristics = CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics(
                                     v9,
                                     a2,
                                     (struct CEndpointCharacteristics **)&pv[1]);
  v5 = (CEndpointCharacteristics *)pv[1];
  EndpointId = AliasedEndpointCharacteristics;
  if ( AliasedEndpointCharacteristics < 0 )
    goto LABEL_101;
  EndpointId = CEndpointCharacteristics::GetEndpointId((CEndpointCharacteristics *)pv[1], &v72);
  if ( EndpointId < 0 )
    goto LABEL_101;
  EndpointId = DeriveAudioProcessingModeConfiguration(
                 *(_DWORD *)a3,
                 *(_DWORD *)(a3 + 8),
                 v5,
                 *((_DWORD *)v5 + 93) == 1,
                 0,
                 (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*(_DWORD *)(a3 + 4),
                 0,
                 (GUID *)&pv[1],
                 &v74,
                 &v71,
                 0LL);
  if ( EndpointId < 0 )
    goto LABEL_101;
  EndpointId = (*(__int64 (__fastcall **)(CDeviceGraphStore *, unsigned __int16 *, __int64 *))(*(_QWORD *)g_DeviceGraphStore
                                                                                             + 24LL))(
                 g_DeviceGraphStore,
                 v72,
                 &v75);
  if ( EndpointId < 0 )
    goto LABEL_101;
  v12 = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v75 + 72LL))(v75, v76);
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x69u,
      (__int64)&WPP_1ce008ef94d310117402048c610b448c_Traceguids,
      ((char *)v76[1] - (char *)v76[0]) >> 3);
  }
  v13 = *(struct _GUID *)&pv[1];
  if ( v12 >= 0 )
  {
    v79 = &v73;
    pv[3] = &v73;
    std::for_each<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Microsoft::WRL::ComPtr<ISaDeviceProxy>>>>,_lambda_0360a2297a44f13f87cc95834c07ff14_>(
      (__int64)v78,
      (__int64)v76[0],
      (__int64)v76[1],
      (__int64)&pv[1]);
  }
  v14 = v73;
  v66 = 0LL;
  v69 = 0LL;
  v68 = 0LL;
  pv[1] = 0LL;
  if ( v73 )
  {
    v15 = *(unsigned __int16 *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v73 + 48LL))(v73) + 16);
    v16 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 48LL))(v14);
    v17 = CAudioMediaType::Create(v16, v15 + 18, &v66, 0.0);
    v18 = (CAudioMediaType *)v66;
    EndpointId = v17;
    if ( v17 < 0 )
    {
      if ( !v66 )
        goto LABEL_100;
      goto LABEL_15;
    }
    v20 = v74;
    v21 = *(_DWORD *)(a3 + 4);
    v71 = v74;
    v22 = DeriveDevicePipeFormatFromConnectorFormat(v5, v8, v21, v66, &v69);
    v23 = (CAudioMediaType *)v69;
    EndpointId = v22;
    if ( v22 < 0 )
    {
LABEL_19:
      if ( v23 )
      {
        v24 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v23 + 16LL);
        if ( v24 == CAudioMediaType::Release )
          CAudioMediaType::Release(v23);
        else
          v24(v23);
      }
      if ( !v18 )
      {
LABEL_100:
        if ( EndpointId >= 0 )
          goto LABEL_105;
        goto LABEL_101;
      }
LABEL_15:
      v19 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v18 + 16LL);
      if ( v19 == CAudioMediaType::Release )
        CAudioMediaType::Release(v18);
      else
        v19(v18);
      goto LABEL_100;
    }
    v25 = *(_DWORD *)(a3 + 4);
    v74 = v20;
    v26 = DeriveMixFormatFromDevicePipeFormat(v5, &v74, v25, (struct IUnknown *)v69, &v68);
    v27 = (CAudioMediaType *)v68;
    EndpointId = v26;
    if ( v26 < 0 )
    {
LABEL_26:
      if ( v27 )
      {
        v28 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v27 + 16LL);
        if ( v28 == CAudioMediaType::Release )
          CAudioMediaType::Release(v27);
        else
          v28(v27);
      }
      goto LABEL_19;
    }
    v29 = *(_DWORD *)(a3 + 4);
    v74 = v20;
    v30 = DeriveStreamFormatFromMixFormat(v5, &v74, v29, (struct IUnknown *)v68, (struct IAudioMediaType **)&pv[1]);
    v31 = (CAudioMediaType *)pv[1];
    EndpointId = v30;
    if ( v30 < 0 )
    {
      if ( !pv[1] )
        goto LABEL_26;
      pv[1] = *(_QWORD *)(*(_QWORD *)pv[1] + 16LL);
      if ( (__int64 (__fastcall *)(CAudioMediaType *))pv[1] == CAudioMediaType::Release )
        goto LABEL_33;
      goto LABEL_37;
    }
    v32 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)pv[1] + 40LL))(pv[1]);
    LODWORD(v66) = CloneWaveFormat(v32, (struct tWAVEFORMATEX **)Src);
    EndpointId = (int)v66;
    if ( (int)v66 < 0 )
    {
      pv[1] = *(_QWORD *)(*(_QWORD *)v31 + 16LL);
      if ( (__int64 (__fastcall *)(CAudioMediaType *))pv[1] == CAudioMediaType::Release )
      {
LABEL_33:
        CAudioMediaType::Release(v31);
        goto LABEL_26;
      }
LABEL_37:
      ((void (__fastcall *)(CAudioMediaType *))pv[1])(v31);
      goto LABEL_26;
    }
    v33 = v73;
    v34 = (double)*(int *)((*(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v18 + 40LL))(v18) + 4);
    *a5 = (int)((double)(*(int (__fastcall **)(__int64))(*(_QWORD *)v33 + 32LL))(v33) * v34 / 10000000.0 + 0.5);
    v35 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v31 + 16LL);
    if ( v35 == CAudioMediaType::Release )
      CAudioMediaType::Release(v31);
    else
      v35(v31);
    if ( v27 )
    {
      v36 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v27 + 16LL);
      if ( v36 == CAudioMediaType::Release )
        CAudioMediaType::Release(v27);
      else
        v36(v27);
    }
    if ( v23 )
    {
      v37 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v23 + 16LL);
      if ( v37 == CAudioMediaType::Release )
        CAudioMediaType::Release(v23);
      else
        v37(v23);
    }
    v38 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v18 + 16LL);
    if ( v38 == CAudioMediaType::Release )
      CAudioMediaType::Release(v18);
    else
      v38(v18);
    EndpointId = (int)v66;
    goto LABEL_97;
  }
  v39 = v71;
  EndpointId = CPolicyConfig::GetMixFormatInternal(
                 g_PolicyConfig,
                 v5,
                 (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*(_DWORD *)(a3 + 4),
                 &v71,
                 (struct tWAVEFORMATEX **)&pv[1]);
  if ( EndpointId < 0 )
  {
    CoTaskMemFree(0LL);
    v40 = (struct tWAVEFORMATEX *)pv[1];
LABEL_55:
    CoTaskMemFree(v40);
    goto LABEL_100;
  }
  v41 = (struct tWAVEFORMATEX *)pv[1];
  v42 = CAudioMediaType::Create(
          (const struct tWAVEFORMATEX *)pv[1],
          (unsigned int)*(unsigned __int16 *)(pv[1] + 16LL) + 18,
          &v68,
          0.0);
  v43 = (CAudioMediaType *)v68;
  EndpointId = v42;
  if ( v42 < 0 )
  {
    if ( v68 )
      goto LABEL_58;
    goto LABEL_61;
  }
  v46 = v74;
  v47 = *(_DWORD *)(a3 + 4);
  v71 = v74;
  v48 = DeriveStreamFormatFromMixFormat(v5, &v71, v47, (struct IUnknown *)v68, &v69);
  v49 = (CAudioMediaType *)v69;
  EndpointId = v48;
  if ( v48 < 0 )
  {
    if ( !v69 )
      goto LABEL_68;
    goto LABEL_65;
  }
  v51 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v69->lpVtbl->GetAudioFormat)(v69);
  EndpointId = CloneWaveFormat(v51, (struct tWAVEFORMATEX **)Src);
  if ( EndpointId < 0 )
  {
LABEL_65:
    v50 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v49 + 16LL);
    if ( v50 == CAudioMediaType::Release )
      CAudioMediaType::Release(v49);
    else
      v50(v49);
LABEL_68:
    if ( v43 )
    {
LABEL_58:
      v44 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v43 + 16LL);
      if ( v44 == CAudioMediaType::Release )
        CAudioMediaType::Release(v43);
      else
        v44(v43);
    }
LABEL_61:
    v45 = 0LL;
LABEL_62:
    CoTaskMemFree(v45);
    v40 = v41;
    goto LABEL_55;
  }
  v52 = *(_DWORD *)(a3 + 4);
  v65 = *(_DWORD *)(a3 + 16);
  v71 = v13;
  v74 = v46;
  *(struct _GUID *)&pv[1] = v39;
  EndpointId = DeriveConnectorFormatFromStreamFormat(
                 (struct IMMDevice **)v5,
                 v52,
                 v41,
                 (struct _GUID *)&pv[1],
                 &v74,
                 &v71,
                 v65,
                 (struct tWAVEFORMATEX **)&v66);
  if ( EndpointId < 0 )
  {
    v53 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v49 + 16LL);
    if ( v53 == CAudioMediaType::Release )
      CAudioMediaType::Release(v49);
    else
      v53(v49);
    if ( v43 )
    {
      v54 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v43 + 16LL);
      if ( v54 == CAudioMediaType::Release )
        CAudioMediaType::Release(v43);
      else
        v54(v43);
    }
    v45 = v66;
    goto LABEL_62;
  }
  v55 = *(_DWORD *)(a3 + 4);
  v56 = v66;
  v71 = v13;
  EndpointId = CEndpointCharacteristics::GetSharedModeEnginePeriodicity(
                 v5,
                 v55,
                 (const struct tWAVEFORMATEX *)v66,
                 &v71,
                 a5,
                 0LL,
                 0LL,
                 0LL);
  v57 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v49 + 16LL);
  if ( EndpointId < 0 )
  {
    pv[1] = *(_QWORD *)(*(_QWORD *)v49 + 16LL);
    if ( v57 == CAudioMediaType::Release )
      CAudioMediaType::Release(v49);
    else
      ((void (__fastcall *)(CAudioMediaType *))pv[1])(v49);
    if ( v43 )
    {
      v58 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v43 + 16LL);
      if ( v58 == CAudioMediaType::Release )
        CAudioMediaType::Release(v43);
      else
        v58(v43);
    }
    v45 = v56;
    goto LABEL_62;
  }
  pv[1] = *(_QWORD *)(*(_QWORD *)v49 + 16LL);
  if ( v57 == CAudioMediaType::Release )
    CAudioMediaType::Release(v49);
  else
    ((void (__fastcall *)(CAudioMediaType *))pv[1])(v49);
  if ( v43 )
  {
    v59 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v43 + 16LL);
    if ( v59 == CAudioMediaType::Release )
      CAudioMediaType::Release(v43);
    else
      v59(v43);
  }
  CoTaskMemFree(v56);
  CoTaskMemFree(v41);
LABEL_97:
  v60 = (unsigned __int16 *)Src[0];
  v61 = MIDL_user_allocate(*((unsigned __int16 *)Src[0] + 8) + 18LL);
  *a4 = v61;
  if ( v61 )
  {
    memcpy_0(v61, Src[0], v60[8] + 18LL);
    goto LABEL_100;
  }
  EndpointId = -2147024882;
LABEL_101:
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x6Au,
      (__int64)&WPP_1ce008ef94d310117402048c610b448c_Traceguids,
      EndpointId);
  }
LABEL_105:
  if ( v75 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v75 + 16LL))(v75);
  if ( v5 )
  {
    v62 = *(unsigned int (__fastcall **)(__int64, volatile int *))(*(_QWORD *)v5 + 16LL);
    if ( v62 == Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(
        (__int64)v5,
        (volatile int *)v8);
    else
      ((void (__fastcall *)(CEndpointCharacteristics *))v62)(v5);
  }
  CoTaskMemFree(v72);
  v72 = 0LL;
  if ( v76[0] )
  {
    std::vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>::_Destroy(v63, v76[0], v76[1]);
    operator delete(v76[0]);
    v77 = 0LL;
    *(_OWORD *)v76 = 0LL;
  }
  Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v73);
  CoTaskMemFree(Src[0]);
  return (unsigned int)EndpointId;
}
