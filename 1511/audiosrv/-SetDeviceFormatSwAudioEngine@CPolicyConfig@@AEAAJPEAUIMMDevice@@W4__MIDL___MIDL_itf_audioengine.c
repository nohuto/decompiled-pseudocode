/*
 * XREFs of ?SetDeviceFormatSwAudioEngine@CPolicyConfig@@AEAAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180084E18
 * Callers:
 *     ?SetDeviceFormatInternal@CPolicyConfig@@QEAAJPEAUIMMDevice@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180084D60 (-SetDeviceFormatInternal@CPolicyConfig@@QEAAJPEAUIMMDevice@@HW4__MIDL___MIDL_itf_audioengineendp.c)
 * Callees:
 *     ?GetProcessingPeriodInternal@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@HPEA_J1@Z @ 0x18000E7F0 (-GetProcessingPeriodInternal@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@HPEA_J1@Z.c)
 *     ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointCharacteristics@@@Z @ 0x18001BA20 (-GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointChara.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001BEC0 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x180064528 (-GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_i.c)
 *     ?ClearMixFormats@CPolicyConfig@@SAJPEAUIMMDevice@@@Z @ 0x18007F618 (-ClearMixFormats@CPolicyConfig@@SAJPEAUIMMDevice@@@Z.c)
 *     ?ConfirmDeviceFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x18007FA60 (-ConfirmDeviceFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@U_GUID@@.c)
 *     ?DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180080460 (-DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL.c)
 *     ?DisconnectHelper@CPolicyConfig@@AEAAXPEAUIMMDevice@@@Z @ 0x180082048 (-DisconnectHelper@CPolicyConfig@@AEAAXPEAUIMMDevice@@@Z.c)
 *     ?SetProcessingPeriodInternal@CPolicyConfig@@CAJPEAUIMMDevice@@PEA_J@Z @ 0x180085C40 (-SetProcessingPeriodInternal@CPolicyConfig@@CAJPEAUIMMDevice@@PEA_J@Z.c)
 *     ?UpdateDeviceFormatEPProperty@CPolicyConfig@@CAJHPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x1800863B8 (-UpdateDeviceFormatEPProperty@CPolicyConfig@@CAJHPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioenginee.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180086890 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?TryAddFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@@Z @ 0x1800A7350 (-TryAddFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPolicyConfig::SetDeviceFormatSwAudioEngine(
        CPolicyConfig *this,
        struct IMMDevice *a2,
        unsigned __int32 a3,
        const struct tWAVEFORMATEX *a4)
{
  int v8; // r13d
  CEndpointCharacteristics *v9; // rbx
  int AliasedEndpointCharacteristics; // edi
  CPolicyConfig *v11; // rcx
  struct _GUID v12; // xmm6
  int v13; // eax
  CPolicyConfig *v14; // rcx
  int updated; // eax
  TraceLoggingHProvider v16; // rcx
  __int64 (__fastcall *v17)(volatile signed __int32 *); // rsi
  unsigned __int16 *v19; // [rsp+30h] [rbp-50h] BYREF
  LPVOID pv; // [rsp+38h] [rbp-48h] BYREF
  CEndpointCharacteristics *v21; // [rsp+40h] [rbp-40h] BYREF
  __int64 v22; // [rsp+48h] [rbp-38h] BYREF
  __int64 v23[2]; // [rsp+50h] [rbp-30h] BYREF
  struct _GUID v24; // [rsp+60h] [rbp-20h] BYREF
  char v25; // [rsp+B8h] [rbp+38h]

  v23[1] = -2LL;
  pv = 0LL;
  v8 = 0;
  v9 = 0LL;
  v21 = 0LL;
  v19 = 0LL;
  v22 = 0LL;
  v23[0] = 0LL;
  v25 = 0;
  AliasedEndpointCharacteristics = ((__int64 (__fastcall *)(struct IMMDevice *, unsigned __int16 **))a2->lpVtbl->GetId)(
                                     a2,
                                     &v19);
  if ( AliasedEndpointCharacteristics < 0 )
    goto LABEL_28;
  AliasedEndpointCharacteristics = (*(__int64 (__fastcall **)(CPolicyConfig *, unsigned __int16 *, _QWORD, LPVOID *))(*(_QWORD *)this + 32LL))(
                                     this,
                                     v19,
                                     0LL,
                                     &pv);
  if ( AliasedEndpointCharacteristics < 0 )
    goto LABEL_28;
  if ( a4 )
  {
    AliasedEndpointCharacteristics = CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics(
                                       (RTL_SRWLOCK *)g_pEndpointCharacteristicsCache,
                                       v19,
                                       &v21);
    v9 = v21;
    if ( AliasedEndpointCharacteristics < 0 )
      goto LABEL_28;
    AliasedEndpointCharacteristics = CPolicyConfig::GetProcessingPeriodInternal(v21, eHostProcessConnector, &v22, 0LL);
    if ( AliasedEndpointCharacteristics < 0 )
      goto LABEL_28;
    AliasedEndpointCharacteristics = ValidateUncompressedWaveFormatEx(a4);
    if ( AliasedEndpointCharacteristics < 0 )
      goto LABEL_28;
    CEndpointCharacteristics::GetDefaultConnectorProcessingModeConfiguration(
      v9,
      (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a3,
      &v24,
      0LL,
      0LL);
    v12 = v24;
    v13 = CPolicyConfig::ConfirmDeviceFormat(v9, a4, &v24, a3, 0);
    AliasedEndpointCharacteristics = v13;
    if ( v13 == -2004287480 )
    {
      CPolicyConfig::DisconnectHelper(v14, a2);
      v25 = 1;
      v24 = v12;
      v13 = CEndpointCharacteristics::TryAddFormat(
              v9,
              (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a3,
              &v24,
              a4);
      AliasedEndpointCharacteristics = v13;
    }
    if ( v13 < 0 )
      goto LABEL_28;
    AliasedEndpointCharacteristics = CPolicyConfig::UpdateDeviceFormatEPProperty(
                                       0,
                                       a2,
                                       (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a3,
                                       a4);
    if ( AliasedEndpointCharacteristics < 0 )
      goto LABEL_28;
    v8 = 1;
    CPolicyConfig::DeriveAndCacheMixFormatsForConnector(this, (struct IMMDevice **)v9, eHostProcessConnector);
    AliasedEndpointCharacteristics = CPolicyConfig::DeriveAndCacheMixFormatsForConnector(
                                       this,
                                       (struct IMMDevice **)v9,
                                       eKeywordDetectorConnector);
    if ( AliasedEndpointCharacteristics < 0 )
      goto LABEL_23;
    if ( v25 )
      goto LABEL_16;
    AliasedEndpointCharacteristics = CPolicyConfig::SetProcessingPeriodInternal(a2, v23);
    if ( AliasedEndpointCharacteristics < 0 )
    {
LABEL_23:
      updated = CPolicyConfig::UpdateDeviceFormatEPProperty(
                  0,
                  a2,
                  (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a3,
                  (const struct tWAVEFORMATEX *)pv);
      if ( updated < 0
        && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x29u,
          (__int64)&WPP_fc485e014cea5a4c1924790da308a5ac_Traceguids,
          updated);
      }
      goto LABEL_28;
    }
  }
  else
  {
    AliasedEndpointCharacteristics = CPolicyConfig::UpdateDeviceFormatEPProperty(
                                       0,
                                       a2,
                                       (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a3,
                                       0LL);
  }
  CPolicyConfig::DisconnectHelper(v11, a2);
LABEL_16:
  if ( a4 )
  {
    CEndpointCharacteristics::GetDefaultConnectorProcessingModeConfiguration(
      v9,
      (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a3,
      &v24,
      0LL,
      0LL);
    AliasedEndpointCharacteristics = CPolicyConfig::ConfirmDeviceFormat(v9, a4, &v24, a3, 1);
    if ( AliasedEndpointCharacteristics >= 0 )
      goto LABEL_32;
    CPolicyConfig::SetProcessingPeriodInternal(a2, &v22);
  }
  if ( AliasedEndpointCharacteristics >= 0 )
    goto LABEL_32;
  if ( v8 )
    goto LABEL_23;
LABEL_28:
  CPolicyConfig::ClearMixFormats(a2);
  v16 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x2Au,
      (__int64)&WPP_fc485e014cea5a4c1924790da308a5ac_Traceguids,
      AliasedEndpointCharacteristics);
LABEL_32:
    v16 = WPP_GLOBAL_Control;
  }
  if ( pv )
  {
    CoTaskMemFree(pv);
    pv = 0LL;
    v16 = WPP_GLOBAL_Control;
  }
  if ( v19 )
  {
    CoTaskMemFree(v19);
    v19 = 0LL;
    v16 = WPP_GLOBAL_Control;
  }
  if ( v16 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)v16 + 28) & 8) != 0
    && *((_BYTE *)v16 + 25) >= 4u )
  {
    WPP_SF_D(
      *((_QWORD *)v16 + 2),
      0x2Bu,
      (__int64)&WPP_fc485e014cea5a4c1924790da308a5ac_Traceguids,
      AliasedEndpointCharacteristics);
  }
  if ( v9 )
  {
    v17 = *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 16LL);
    if ( v17 == Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)v9);
    else
      v17((volatile signed __int32 *)v9);
  }
  return (unsigned int)AliasedEndpointCharacteristics;
}
