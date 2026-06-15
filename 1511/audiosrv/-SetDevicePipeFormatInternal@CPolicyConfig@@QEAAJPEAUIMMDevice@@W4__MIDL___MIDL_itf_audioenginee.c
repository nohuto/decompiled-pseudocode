/*
 * XREFs of ?SetDevicePipeFormatInternal@CPolicyConfig@@QEAAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAUtWAVEFORMATEX@@@Z @ 0x1800851CC
 * Callers:
 *     ?DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180080460 (-DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL.c)
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     __security_check_cookie @ 0x180047490 (__security_check_cookie.c)
 *     ?GetProcessingModeSpecificDevicePipeFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z @ 0x18008368C (-GetProcessingModeSpecificDevicePipeFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z.c)
 *     ?SetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z @ 0x180085CF8 (-SetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@AEBUtagPROPVARI.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180086890 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
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
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x3Cu,
      (__int64)&WPP_fc485e014cea5a4c1924790da308a5ac_Traceguids,
      ProcessingModeSpecificDevicePipeFormatKey);
  }
  return (unsigned int)ProcessingModeSpecificDevicePipeFormatKey;
}
