/*
 * XREFs of ?GetDeviceFormatInternal@CPolicyConfig@@SAJPEAUIMMDevice@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18002FCC0
 * Callers:
 *     ?GetDeviceDefaults@CSaProvider@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x180024AB0 (-GetDeviceDefaults@CSaProvider@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengine.c)
 *     ?DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800336B0 (-DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL.c)
 *     ?RefreshDeviceFormat@CPolicyConfig@@AEAAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180033A1C (-RefreshDeviceFormat@CPolicyConfig@@AEAAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_.c)
 *     ?GetDeviceFormat@CPolicyConfig@@UEAAJPEBGHPEAPEAUtWAVEFORMATEX@@@Z @ 0x180037FA0 (-GetDeviceFormat@CPolicyConfig@@UEAAJPEBGHPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     AudioServerGetDevicePeriod @ 0x18008D110 (AudioServerGetDevicePeriod.c)
 * Callees:
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18001ED50 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?UpdateDeviceFormatEPProperty@CPolicyConfig@@CAJHPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18003742C (-UpdateDeviceFormatEPProperty@CPolicyConfig@@CAJHPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioenginee.c)
 *     __security_check_cookie @ 0x180043550 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180043A58 (memcpy_0.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?GetDefaultFormat@CPolicyConfig@@CAJPEAUIMMDevice@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIPropertyStore@@PEAPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800871D4 (-GetDefaultFormat@CPolicyConfig@@CAJPEAUIMMDevice@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPolicyConfig::GetDeviceFormatInternal(
        struct IMMDevice *a1,
        int a2,
        int a3,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a4,
        struct tWAVEFORMATEX **a5)
{
  struct tWAVEFORMATEX *v8; // rdi
  int DefaultFormat; // esi
  const PROPERTYKEY *v10; // rax
  void *v11; // rsi
  size_t v12; // rbx
  struct tWAVEFORMATEX *v13; // rax
  int v15; // ebx
  LPVOID pv; // [rsp+30h] [rbp-41h] BYREF
  struct IPropertyStore *v17; // [rsp+38h] [rbp-39h] BYREF
  int v18; // [rsp+40h] [rbp-31h]
  PROPVARIANT pvar; // [rsp+48h] [rbp-29h] BYREF
  __int64 v20; // [rsp+50h] [rbp-21h]
  void *Src; // [rsp+58h] [rbp-19h]
  __int64 v22; // [rsp+60h] [rbp-11h]
  GUID fmtid; // [rsp+68h] [rbp-9h] BYREF
  DWORD pid; // [rsp+78h] [rbp+7h]

  v22 = -2LL;
  v18 = a3;
  v8 = 0LL;
  v17 = 0LL;
  pv = 0LL;
  pvar = 0LL;
  v20 = 0LL;
  Src = 0LL;
  if ( !a1 || !a5 )
  {
    DefaultFormat = -2147467261;
    goto LABEL_30;
  }
  *a5 = 0LL;
  DefaultFormat = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, struct IPropertyStore **))a1->lpVtbl->OpenPropertyStore)(
                    a1,
                    0LL,
                    &v17);
  if ( DefaultFormat >= 0 )
  {
    if ( a2 )
    {
      DefaultFormat = CPolicyConfig::GetDefaultFormat(a1, v18, a4, v17, (struct WAVEFORMATEXTENSIBLE **)&pv);
      if ( DefaultFormat < 0 )
        goto LABEL_30;
    }
    else
    {
      v10 = &PKEY_AudioEngine_DeviceFormat;
      if ( a4 == eKeywordDetectorConnector )
        v10 = (const PROPERTYKEY *)&PKEY_AudioEngine_KeywordDetector_DeviceFormat;
      fmtid = v10->fmtid;
      pid = v10->pid;
      if ( ((int (__fastcall *)(struct IPropertyStore *, GUID *, PROPVARIANT *))v17->lpVtbl->GetValue)(
             v17,
             &fmtid,
             &pvar) >= 0
        && (_WORD)pvar == 65
        && (unsigned int)v20 >= 0x12 )
      {
        v11 = Src;
        v12 = *((unsigned __int16 *)Src + 8) + 18LL;
        if ( (unsigned int)v20 == v12 )
        {
          v13 = (struct tWAVEFORMATEX *)CoTaskMemAlloc(*((unsigned __int16 *)Src + 8) + 18LL);
          v8 = v13;
          if ( !v13 )
          {
            v8 = 0LL;
            DefaultFormat = -2147024882;
            goto LABEL_30;
          }
          memcpy_0(v13, v11, v12);
          goto LABEL_13;
        }
      }
      v15 = v18;
      DefaultFormat = CPolicyConfig::GetDefaultFormat(a1, v18, a4, v17, (struct WAVEFORMATEXTENSIBLE **)&pv);
      if ( DefaultFormat < 0 )
        goto LABEL_30;
      DefaultFormat = CPolicyConfig::UpdateDeviceFormatEPProperty(v15, a1, a4, (const struct tWAVEFORMATEX *)pv);
      if ( DefaultFormat < 0 )
        goto LABEL_30;
    }
    v8 = (struct tWAVEFORMATEX *)pv;
    pv = 0LL;
LABEL_13:
    DefaultFormat = ValidateWaveFormatEx(v8);
    if ( DefaultFormat >= 0 )
    {
      *a5 = v8;
      v8 = 0LL;
      goto LABEL_15;
    }
  }
LABEL_30:
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 8) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      37LL,
      &WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids,
      (unsigned int)DefaultFormat);
  }
LABEL_15:
  PropVariantClear(&pvar);
  if ( pv )
  {
    CoTaskMemFree(pv);
    pv = 0LL;
  }
  if ( v8 )
    CoTaskMemFree(v8);
  if ( DefaultFormat < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      36LL,
      &WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids,
      (unsigned int)DefaultFormat);
  }
  if ( v17 )
    ((void (__fastcall *)(struct IPropertyStore *))v17->lpVtbl->Release)(v17);
  return (unsigned int)DefaultFormat;
}
