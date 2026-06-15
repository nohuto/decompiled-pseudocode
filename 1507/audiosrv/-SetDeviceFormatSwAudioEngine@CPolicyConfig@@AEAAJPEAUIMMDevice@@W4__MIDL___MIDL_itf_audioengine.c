/*
 * XREFs of ?SetDeviceFormatSwAudioEngine@CPolicyConfig@@AEAAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180033B28
 * Callers:
 *     ?SetDeviceFormatInternal@CPolicyConfig@@QEAAJPEAUIMMDevice@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180033F74 (-SetDeviceFormatInternal@CPolicyConfig@@QEAAJPEAUIMMDevice@@HW4__MIDL___MIDL_itf_audioengineendp.c)
 * Callees:
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x18001A5D4 (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointCharacteristics@@@Z @ 0x180023D70 (-GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointChara.c)
 *     ?GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z @ 0x18002CA54 (-GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z.c)
 *     ?GetProcessingPeriodInternal@CPolicyConfig@@CAJPEAUIMMDevice@@HPEA_J1@Z @ 0x18002D4B8 (-GetProcessingPeriodInternal@CPolicyConfig@@CAJPEAUIMMDevice@@HPEA_J1@Z.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180030474 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?ConfirmDeviceFormat@CPolicyConfig@@CAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x180032F04 (-ConfirmDeviceFormat@CPolicyConfig@@CAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL.c)
 *     ?DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800336B0 (-DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL.c)
 *     ?GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x18003445C (-GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_i.c)
 *     ?SetProcessingPeriodInternal@CPolicyConfig@@CAJPEAUIMMDevice@@PEA_J@Z @ 0x180034C5C (-SetProcessingPeriodInternal@CPolicyConfig@@CAJPEAUIMMDevice@@PEA_J@Z.c)
 *     ?UpdateDeviceFormatEPProperty@CPolicyConfig@@CAJHPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18003742C (-UpdateDeviceFormatEPProperty@CPolicyConfig@@CAJHPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioenginee.c)
 *     __security_check_cookie @ 0x180043550 (__security_check_cookie.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_S @ 0x18006B12C (WPP_SF_S.c)
 *     ?ClearMixFormats@CPolicyConfig@@SAJPEAUIMMDevice@@@Z @ 0x180084BB8 (-ClearMixFormats@CPolicyConfig@@SAJPEAUIMMDevice@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CPolicyConfig::SetDeviceFormatSwAudioEngine(
        CPolicyConfig *this,
        struct IMMDevice *a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        const struct tWAVEFORMATEX *a4)
{
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v5; // r14d
  struct CEndpointCharacteristics *v8; // rbx
  int AliasedEndpointCharacteristics; // r15d
  CEndpointCharacteristicsCache *v10; // rcx
  int AudioSessionManagerProvider; // eax
  __int64 v12; // rdi
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v13; // eax
  GUID *v14; // rax
  int updated; // eax
  __int64 v16; // rcx
  LPVOID pv; // [rsp+30h] [rbp-59h] BYREF
  unsigned __int16 *v19; // [rsp+38h] [rbp-51h] BYREF
  int v20; // [rsp+40h] [rbp-49h]
  struct tWAVEFORMATEX *v21; // [rsp+48h] [rbp-41h] BYREF
  __int64 v22; // [rsp+50h] [rbp-39h] BYREF
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v23; // [rsp+58h] [rbp-31h]
  struct CEndpointCharacteristics *v24; // [rsp+60h] [rbp-29h] BYREF
  __int64 v25; // [rsp+68h] [rbp-21h] BYREF
  __int64 v26[2]; // [rsp+70h] [rbp-19h] BYREF
  struct _GUID v27; // [rsp+80h] [rbp-9h] BYREF

  v26[1] = -2LL;
  v5 = a3;
  v23 = a3;
  v21 = 0LL;
  v20 = 0;
  v8 = 0LL;
  v24 = 0LL;
  v19 = 0LL;
  AliasedEndpointCharacteristics = ((__int64 (__fastcall *)(struct IMMDevice *, unsigned __int16 **))a2->lpVtbl->GetId)(
                                     a2,
                                     &v19);
  if ( AliasedEndpointCharacteristics < 0 )
    goto LABEL_44;
  AliasedEndpointCharacteristics = (*(__int64 (__fastcall **)(CPolicyConfig *, unsigned __int16 *, _QWORD, struct tWAVEFORMATEX **))(*(_QWORD *)this + 32LL))(
                                     this,
                                     v19,
                                     0LL,
                                     &v21);
  if ( AliasedEndpointCharacteristics < 0 )
    goto LABEL_44;
  if ( a4 )
  {
    AliasedEndpointCharacteristics = ValidateUncompressedWaveFormatEx(a4);
    if ( AliasedEndpointCharacteristics < 0 )
      goto LABEL_44;
    AliasedEndpointCharacteristics = CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics(v10, v19, &v24);
    if ( AliasedEndpointCharacteristics < 0
      || (AliasedEndpointCharacteristics = CPolicyConfig::UpdateDeviceFormatEPProperty(0, a2, v5, a4),
          AliasedEndpointCharacteristics < 0) )
    {
      v8 = v24;
      goto LABEL_44;
    }
    v20 = 1;
    v8 = v24;
    CPolicyConfig::DeriveAndCacheMixFormatsForConnector(this, (struct IMMDevice **)v24, eHostProcessConnector);
    AliasedEndpointCharacteristics = CPolicyConfig::DeriveAndCacheMixFormatsForConnector(
                                       this,
                                       (struct IMMDevice **)v8,
                                       eKeywordDetectorConnector);
    if ( AliasedEndpointCharacteristics < 0 )
      goto LABEL_38;
  }
  else
  {
    AliasedEndpointCharacteristics = CPolicyConfig::UpdateDeviceFormatEPProperty(0, a2, v5, 0LL);
  }
  v26[0] = 0LL;
  v25 = 0LL;
  if ( !a4
    || (AliasedEndpointCharacteristics = CPolicyConfig::GetProcessingPeriodInternal(a2, 0, &v25, 0LL),
        AliasedEndpointCharacteristics >= 0)
    && (AliasedEndpointCharacteristics = CPolicyConfig::SetProcessingPeriodInternal(a2, v26),
        AliasedEndpointCharacteristics >= 0) )
  {
    *(_QWORD *)&v27.Data1 = 0LL;
    AudioSessionManagerProvider = GetAudioSessionManagerProvider((struct CAudioSessionManagerProvider **)&v27);
    v12 = *(_QWORD *)&v27.Data1;
    if ( AudioSessionManagerProvider >= 0 )
    {
      v22 = 0LL;
      pv = 0LL;
      AliasedEndpointCharacteristics = ((__int64 (__fastcall *)(struct IMMDevice *, LPVOID *))a2->lpVtbl->GetId)(
                                         a2,
                                         &pv);
      if ( AliasedEndpointCharacteristics >= 0 )
      {
        if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
          && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
          && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
        {
          WPP_SF_S(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
            41LL,
            &WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids,
            pv);
        }
        AliasedEndpointCharacteristics = (*(__int64 (__fastcall **)(__int64, LPVOID, __int64 *))(*(_QWORD *)v12 + 40LL))(
                                           v12,
                                           pv,
                                           &v22);
        if ( !AliasedEndpointCharacteristics )
          CAudioSessionManager::Disconnect(v22, 2u, 1);
        if ( pv )
        {
          CoTaskMemFree(pv);
          pv = 0LL;
        }
      }
      if ( v22 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
        v5 = v23;
      }
    }
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    if ( a4 )
    {
      CEndpointCharacteristics::GetDefaultConnectorProcessingModeConfiguration(v8, v5, &v27, 0LL, 0LL);
      v13 = v5;
      if ( v5 == eOffloadConnector )
        v13 = eHostProcessConnector;
      if ( !*((_DWORD *)v8 + v13 + 10) || (v14 = &v27, *((_DWORD *)v8 + 100)) )
        v14 = &GUID_00000000_0000_0000_0000_000000000000;
      v27 = *v14;
      AliasedEndpointCharacteristics = CPolicyConfig::ConfirmDeviceFormat((struct IUnknown *)a2, a4, &v27, v5, 1);
      if ( AliasedEndpointCharacteristics >= 0 )
        goto LABEL_48;
      CPolicyConfig::SetProcessingPeriodInternal(a2, &v25);
    }
    if ( AliasedEndpointCharacteristics >= 0 )
    {
LABEL_48:
      v16 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
      goto LABEL_49;
    }
  }
  if ( v20 )
  {
LABEL_38:
    updated = CPolicyConfig::UpdateDeviceFormatEPProperty(0, a2, v5, v21);
    if ( updated < 0
      && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x2Au,
        (__int64)&WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids,
        updated);
    }
  }
LABEL_44:
  CPolicyConfig::ClearMixFormats(a2);
  v16 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x2Bu,
      (__int64)&WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids,
      AliasedEndpointCharacteristics);
    goto LABEL_48;
  }
LABEL_49:
  if ( v21 )
  {
    CoTaskMemFree(v21);
    v21 = 0LL;
    v16 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  }
  if ( v19 )
  {
    CoTaskMemFree(v19);
    v19 = 0LL;
    v16 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  }
  if ( (struct _GUID *)v16 != &WPP_GLOBAL_Control && (*(_BYTE *)(v16 + 28) & 8) != 0 && *(_BYTE *)(v16 + 25) >= 4u )
    WPP_SF_D(
      *(_QWORD *)(v16 + 16),
      0x2Cu,
      (__int64)&WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids,
      AliasedEndpointCharacteristics);
  if ( v8 )
    (*(void (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v8 + 16LL))(v8);
  return (unsigned int)AliasedEndpointCharacteristics;
}
