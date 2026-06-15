/*
 * XREFs of ?SetDevicePipeFormatInternal@CPolicyConfig@@QEAAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAUtWAVEFORMATEX@@@Z @ 0x180088710
 * Callers:
 *     ?DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800336B0 (-DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL.c)
 * Callees:
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180030474 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?SetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z @ 0x1800349D0 (-SetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@AEBUtagPROPVARI.c)
 *     __security_check_cookie @ 0x180043550 (__security_check_cookie.c)
 *     ?GetProcessingModeSpecificDevicePipeFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z @ 0x180087720 (-GetProcessingModeSpecificDevicePipeFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z.c)
 */

__int64 __fastcall CPolicyConfig::SetDevicePipeFormatInternal(
        CPolicyConfig *this,
        struct IMMDevice *a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        struct _GUID *a4,
        BYTE *a5)
{
  int ProcessingModeSpecificDevicePipeFormatKey; // ebx
  struct tagPROPVARIANT v10; // [rsp+20h] [rbp-50h] BYREF
  struct _GUID v11; // [rsp+40h] [rbp-30h] BYREF
  struct _tagpropertykey v12; // [rsp+50h] [rbp-20h] BYREF

  memset(&v10, 0, sizeof(v10));
  if ( !a5 )
  {
    v10.vt = 0;
    goto LABEL_6;
  }
  if ( !(unsigned int)ValidateUncompressedWaveFormatEx((const struct tWAVEFORMATEX *)a5) )
  {
    v10.bstrblobVal.pData = a5;
    v10.vt = 65;
    v10.lVal = *((unsigned __int16 *)a5 + 8) + 18;
LABEL_6:
    v11 = *a4;
    ProcessingModeSpecificDevicePipeFormatKey = GetProcessingModeSpecificDevicePipeFormatKey(
                                                  &v11,
                                                  a3 == eKeywordDetectorConnector,
                                                  &v12);
    if ( ProcessingModeSpecificDevicePipeFormatKey >= 0 )
    {
      ProcessingModeSpecificDevicePipeFormatKey = CPolicyConfig::SetPropertyStoreProperty(a2, 0, &v12, &v10);
      if ( ProcessingModeSpecificDevicePipeFormatKey >= 0 )
        return (unsigned int)ProcessingModeSpecificDevicePipeFormatKey;
    }
    goto LABEL_8;
  }
  ProcessingModeSpecificDevicePipeFormatKey = -2004287480;
LABEL_8:
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x3Du,
      (__int64)&WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids,
      ProcessingModeSpecificDevicePipeFormatKey);
  }
  return (unsigned int)ProcessingModeSpecificDevicePipeFormatKey;
}
