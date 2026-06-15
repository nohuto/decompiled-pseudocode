/*
 * XREFs of ?SetMixFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@@Z @ 0x180085888
 * Callers:
 *     ?DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180080460 (-DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL.c)
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     __security_check_cookie @ 0x180047490 (__security_check_cookie.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x180064528 (-GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_i.c)
 *     ?GetProcessingModeSpecificMixFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z @ 0x180083744 (-GetProcessingModeSpecificMixFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z.c)
 *     ?SetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z @ 0x180085CF8 (-SetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@AEBUtagPROPVARI.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180086890 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPolicyConfig::SetMixFormatInternal(
        struct CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _GUID *a3,
        struct tWAVEFORMATEX *a4)
{
  struct IMMDevice *v8; // rbx
  int ProcessingModeSpecificMixFormatKey; // esi
  struct tagPROPVARIANT v11; // [rsp+30h] [rbp-49h] BYREF
  struct IMMDevice *v12; // [rsp+48h] [rbp-31h]
  __int64 v13; // [rsp+50h] [rbp-29h]
  struct _GUID v14; // [rsp+60h] [rbp-19h] BYREF
  struct _tagpropertykey v15; // [rsp+70h] [rbp-9h] BYREF

  v13 = -2LL;
  v8 = 0LL;
  v12 = 0LL;
  if ( !this )
  {
    ProcessingModeSpecificMixFormatKey = -2147467261;
LABEL_16:
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x3Bu,
        (__int64)&WPP_fc485e014cea5a4c1924790da308a5ac_Traceguids,
        ProcessingModeSpecificMixFormatKey);
    }
    goto LABEL_20;
  }
  memset(&v11, 0, sizeof(v11));
  if ( a2 == eOffloadConnector )
  {
    ProcessingModeSpecificMixFormatKey = 0;
    goto LABEL_20;
  }
  if ( a4 )
  {
    if ( (unsigned int)ValidateUncompressedWaveFormatEx(a4) )
    {
      ProcessingModeSpecificMixFormatKey = -2004287480;
      goto LABEL_16;
    }
    v11.vt = 65;
    v11.lVal = a4->cbSize + 18;
    v11.bstrblobVal.pData = (BYTE *)a4;
  }
  else
  {
    v11.vt = 0;
  }
  v14 = *a3;
  ProcessingModeSpecificMixFormatKey = GetProcessingModeSpecificMixFormatKey(
                                         &v14,
                                         a2 == eKeywordDetectorConnector,
                                         &v15);
  if ( ProcessingModeSpecificMixFormatKey < 0 )
    goto LABEL_16;
  v8 = (struct IMMDevice *)*((_QWORD *)this + 2);
  v12 = v8;
  ((void (__fastcall *)(struct IMMDevice *))v8->lpVtbl->AddRef)(v8);
  ProcessingModeSpecificMixFormatKey = CPolicyConfig::SetPropertyStoreProperty(v8, 0, &v15, &v11);
  if ( ProcessingModeSpecificMixFormatKey < 0 )
    goto LABEL_16;
  CEndpointCharacteristics::GetDefaultConnectorProcessingModeConfiguration(this, a2, 0LL, 0LL, &v14);
  if ( *(_QWORD *)&a3->Data1 == *(_QWORD *)&v14.Data1 && *(_QWORD *)a3->Data4 == *(_QWORD *)v14.Data4 )
    ProcessingModeSpecificMixFormatKey = CPolicyConfig::SetPropertyStoreProperty(
                                           v8,
                                           0,
                                           &PKEY_AudioEngine_MixFormat,
                                           &v11);
  if ( ProcessingModeSpecificMixFormatKey < 0 )
    goto LABEL_16;
LABEL_20:
  if ( v8 )
    ((void (__fastcall *)(struct IMMDevice *))v8->lpVtbl->Release)(v8);
  return (unsigned int)ProcessingModeSpecificMixFormatKey;
}
