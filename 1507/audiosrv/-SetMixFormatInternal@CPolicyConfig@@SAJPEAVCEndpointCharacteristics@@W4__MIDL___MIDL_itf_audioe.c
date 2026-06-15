/*
 * XREFs of ?SetMixFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@@Z @ 0x180034840
 * Callers:
 *     ?DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800336B0 (-DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL.c)
 * Callees:
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180030474 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x18003445C (-GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_i.c)
 *     ?SetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z @ 0x1800349D0 (-SetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@AEBUtagPROPVARI.c)
 *     ?GetProcessingModeSpecificMixFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z @ 0x180034A84 (-GetProcessingModeSpecificMixFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z.c)
 *     __security_check_cookie @ 0x180043550 (__security_check_cookie.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPolicyConfig::SetMixFormatInternal(
        struct CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _GUID *a3,
        BYTE *a4)
{
  struct IMMDevice *v8; // rbx
  int ProcessingModeSpecificMixFormatKey; // esi
  __int64 v10; // rax
  struct tagPROPVARIANT v12; // [rsp+30h] [rbp-49h] BYREF
  struct IMMDevice *v13; // [rsp+48h] [rbp-31h]
  __int64 v14; // [rsp+50h] [rbp-29h]
  struct _GUID v15; // [rsp+60h] [rbp-19h] BYREF
  struct _tagpropertykey v16; // [rsp+70h] [rbp-9h] BYREF

  v14 = -2LL;
  v8 = 0LL;
  v13 = 0LL;
  if ( !this )
  {
    ProcessingModeSpecificMixFormatKey = -2147467261;
    goto LABEL_20;
  }
  memset(&v12, 0, sizeof(v12));
  if ( a2 == eOffloadConnector )
  {
    ProcessingModeSpecificMixFormatKey = 0;
    goto LABEL_13;
  }
  if ( a4 )
  {
    if ( !(unsigned int)ValidateUncompressedWaveFormatEx((const struct tWAVEFORMATEX *)a4) )
    {
      v12.vt = 65;
      v12.lVal = *((unsigned __int16 *)a4 + 8) + 18;
      v12.bstrblobVal.pData = a4;
      goto LABEL_6;
    }
    ProcessingModeSpecificMixFormatKey = -2004287480;
LABEL_20:
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x3Cu,
        (__int64)&WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids,
        ProcessingModeSpecificMixFormatKey);
    }
    goto LABEL_13;
  }
  v12.vt = 0;
LABEL_6:
  v15 = *a3;
  ProcessingModeSpecificMixFormatKey = GetProcessingModeSpecificMixFormatKey(
                                         &v15,
                                         a2 == eKeywordDetectorConnector,
                                         &v16);
  if ( ProcessingModeSpecificMixFormatKey < 0 )
    goto LABEL_20;
  v8 = (struct IMMDevice *)*((_QWORD *)this + 2);
  v13 = v8;
  ((void (__fastcall *)(struct IMMDevice *))v8->lpVtbl->AddRef)(v8);
  ProcessingModeSpecificMixFormatKey = CPolicyConfig::SetPropertyStoreProperty(v8, 0, &v16, &v12);
  if ( ProcessingModeSpecificMixFormatKey < 0 )
    goto LABEL_20;
  CEndpointCharacteristics::GetDefaultConnectorProcessingModeConfiguration(this, a2, 0LL, 0LL, &v15);
  v10 = *(_QWORD *)&a3->Data1 - *(_QWORD *)&v15.Data1;
  if ( *(_QWORD *)&a3->Data1 == *(_QWORD *)&v15.Data1 )
    v10 = *(_QWORD *)a3->Data4 - *(_QWORD *)v15.Data4;
  if ( !v10 )
    ProcessingModeSpecificMixFormatKey = CPolicyConfig::SetPropertyStoreProperty(
                                           v8,
                                           0,
                                           &PKEY_AudioEngine_MixFormat,
                                           &v12);
  if ( ProcessingModeSpecificMixFormatKey < 0 )
    goto LABEL_20;
LABEL_13:
  if ( v8 )
    ((void (__fastcall *)(struct IMMDevice *))v8->lpVtbl->Release)(v8);
  return (unsigned int)ProcessingModeSpecificMixFormatKey;
}
