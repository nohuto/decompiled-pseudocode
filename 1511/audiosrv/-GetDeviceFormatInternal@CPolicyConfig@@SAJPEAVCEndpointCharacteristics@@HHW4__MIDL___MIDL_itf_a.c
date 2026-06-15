/*
 * XREFs of ?GetDeviceFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180010EC0
 * Callers:
 *     ?GetMinProcessingPeriodForExclusiveMode@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA_J@Z @ 0x18000EBE0 (-GetMinProcessingPeriodForExclusiveMode@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL.c)
 *     ?GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x180010630 (-GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     ?GetDeviceFormat@CPolicyConfig@@UEAAJPEBGHPEAPEAUtWAVEFORMATEX@@@Z @ 0x18001A5C0 (-GetDeviceFormat@CPolicyConfig@@UEAAJPEBGHPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180080460 (-DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL.c)
 *     ?RefreshDeviceFormat@CPolicyConfig@@AEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18008408C (-RefreshDeviceFormat@CPolicyConfig@@AEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audio.c)
 *     AudioServerGetDevicePeriod @ 0x180089970 (AudioServerGetDevicePeriod.c)
 * Callees:
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x1800110D0 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     __security_check_cookie @ 0x180047490 (__security_check_cookie.c)
 *     memcpy_0 @ 0x18004799C (memcpy_0.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?GetDefaultFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIPropertyStore@@PEAPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x180083034 (-GetDefaultFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@HW4__MIDL___MIDL_itf_audioengi.c)
 *     ?UpdateDeviceFormatEPProperty@CPolicyConfig@@CAJHPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x1800863B8 (-UpdateDeviceFormatEPProperty@CPolicyConfig@@CAJHPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioenginee.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CPolicyConfig::GetDeviceFormatInternal(
        struct IMMDevice **a1,
        int a2,
        int a3,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a4,
        struct tWAVEFORMATEX **a5)
{
  struct tWAVEFORMATEX *v7; // rsi
  struct IMMDevice *v8; // rdi
  int DefaultFormat; // r14d
  const PROPERTYKEY *v10; // rax
  void *v11; // r14
  size_t v12; // rbx
  struct tWAVEFORMATEX *v13; // rax
  int v15; // ebx
  LPVOID pv; // [rsp+30h] [rbp-51h] BYREF
  int v17; // [rsp+38h] [rbp-49h]
  struct IPropertyStore *v18; // [rsp+40h] [rbp-41h] BYREF
  struct CEndpointCharacteristics *v19; // [rsp+48h] [rbp-39h]
  PROPVARIANT pvar; // [rsp+50h] [rbp-31h] BYREF
  __int64 v21; // [rsp+58h] [rbp-29h]
  void *Src; // [rsp+60h] [rbp-21h]
  struct IMMDevice *v23; // [rsp+68h] [rbp-19h]
  __int64 v24; // [rsp+70h] [rbp-11h]
  GUID fmtid; // [rsp+78h] [rbp-9h] BYREF
  DWORD pid; // [rsp+88h] [rbp+7h]

  v24 = -2LL;
  v17 = a3;
  v19 = (struct CEndpointCharacteristics *)a1;
  v7 = 0LL;
  v18 = 0LL;
  pv = 0LL;
  v8 = a1[2];
  v23 = v8;
  ((void (__fastcall *)(struct IMMDevice *))v8->lpVtbl->AddRef)(v8);
  pvar = 0LL;
  v21 = 0LL;
  Src = 0LL;
  if ( !a5 )
  {
    DefaultFormat = -2147467261;
    goto LABEL_31;
  }
  *a5 = 0LL;
  DefaultFormat = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, struct IPropertyStore **))v8->lpVtbl->OpenPropertyStore)(
                    v8,
                    0LL,
                    &v18);
  if ( DefaultFormat >= 0 )
  {
    if ( a2 )
    {
      DefaultFormat = CPolicyConfig::GetDefaultFormat(v19, v17, a4, v18, (struct WAVEFORMATEXTENSIBLE **)&pv);
      if ( DefaultFormat < 0 )
        goto LABEL_31;
    }
    else
    {
      v10 = &PKEY_AudioEngine_DeviceFormat;
      if ( a4 == eKeywordDetectorConnector )
        v10 = (const PROPERTYKEY *)&PKEY_AudioEngine_KeywordDetector_DeviceFormat;
      fmtid = v10->fmtid;
      pid = v10->pid;
      if ( ((int (__fastcall *)(struct IPropertyStore *, GUID *, PROPVARIANT *))v18->lpVtbl->GetValue)(
             v18,
             &fmtid,
             &pvar) >= 0
        && (_WORD)pvar == 65
        && (unsigned int)v21 >= 0x12 )
      {
        v11 = Src;
        v12 = *((unsigned __int16 *)Src + 8) + 18LL;
        if ( (unsigned int)v21 == v12 )
        {
          v13 = (struct tWAVEFORMATEX *)CoTaskMemAlloc(*((unsigned __int16 *)Src + 8) + 18LL);
          v7 = v13;
          if ( !v13 )
          {
            v7 = 0LL;
            DefaultFormat = -2147024882;
            goto LABEL_31;
          }
          memcpy_0(v13, v11, v12);
          goto LABEL_12;
        }
      }
      v15 = v17;
      DefaultFormat = CPolicyConfig::GetDefaultFormat(v19, v17, a4, v18, (struct WAVEFORMATEXTENSIBLE **)&pv);
      if ( DefaultFormat < 0 )
        goto LABEL_31;
      DefaultFormat = CPolicyConfig::UpdateDeviceFormatEPProperty(v15, v8, a4, (const struct tWAVEFORMATEX *)pv);
      if ( DefaultFormat < 0 )
        goto LABEL_31;
    }
    v7 = (struct tWAVEFORMATEX *)pv;
    pv = 0LL;
LABEL_12:
    DefaultFormat = ValidateWaveFormatEx(v7);
    if ( DefaultFormat >= 0 )
    {
      *a5 = v7;
      v7 = 0LL;
      goto LABEL_14;
    }
  }
LABEL_31:
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      36LL,
      &WPP_fc485e014cea5a4c1924790da308a5ac_Traceguids,
      (unsigned int)DefaultFormat);
  }
LABEL_14:
  PropVariantClear(&pvar);
  if ( pv )
  {
    CoTaskMemFree(pv);
    pv = 0LL;
  }
  if ( v7 )
    CoTaskMemFree(v7);
  if ( DefaultFormat < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      35LL,
      &WPP_fc485e014cea5a4c1924790da308a5ac_Traceguids,
      (unsigned int)DefaultFormat);
  }
  if ( v8 )
    ((void (__fastcall *)(struct IMMDevice *))v8->lpVtbl->Release)(v8);
  if ( v18 )
    ((void (__fastcall *)(struct IPropertyStore *))v18->lpVtbl->Release)(v18);
  return (unsigned int)DefaultFormat;
}
