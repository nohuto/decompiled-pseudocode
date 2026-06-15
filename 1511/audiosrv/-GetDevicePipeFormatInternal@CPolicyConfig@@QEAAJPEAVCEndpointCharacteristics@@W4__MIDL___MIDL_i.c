/*
 * XREFs of ?GetDevicePipeFormatInternal@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180065164
 * Callers:
 *     ?DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180080460 (-DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL.c)
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     __security_check_cookie @ 0x180047490 (__security_check_cookie.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x18007F8A0 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?GetProcessingModeSpecificDevicePipeFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z @ 0x18008368C (-GetProcessingModeSpecificDevicePipeFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z.c)
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x180083EAC (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 *     ?RefreshDeviceFormat@CPolicyConfig@@AEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18008408C (-RefreshDeviceFormat@CPolicyConfig@@AEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audio.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180086890 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CPolicyConfig::GetDevicePipeFormatInternal(
        CPolicyConfig *this,
        struct CEndpointCharacteristics *a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        struct _GUID *a4,
        struct tWAVEFORMATEX **a5)
{
  __int64 v9; // rdi
  int ProcessingModeSpecificDevicePipeFormatKey; // esi
  __int64 v12; // [rsp+20h] [rbp-51h] BYREF
  struct tagPROPVARIANT pvar; // [rsp+28h] [rbp-49h] BYREF
  __int64 v14; // [rsp+40h] [rbp-31h]
  __int64 v15; // [rsp+48h] [rbp-29h]
  struct _GUID v16; // [rsp+50h] [rbp-21h] BYREF
  struct _tagpropertykey v17; // [rsp+60h] [rbp-11h] BYREF

  v15 = -2LL;
  v12 = 0LL;
  memset(&pvar, 0, sizeof(pvar));
  v9 = *((_QWORD *)a2 + 2);
  v14 = v9;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  *a5 = 0LL;
  v16 = *a4;
  ProcessingModeSpecificDevicePipeFormatKey = GetProcessingModeSpecificDevicePipeFormatKey(
                                                &v16,
                                                a3 == eKeywordDetectorConnector,
                                                &v17);
  if ( ProcessingModeSpecificDevicePipeFormatKey >= 0 )
  {
    ProcessingModeSpecificDevicePipeFormatKey = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v9 + 32LL))(
                                                  v9,
                                                  0LL,
                                                  &v12);
    if ( ProcessingModeSpecificDevicePipeFormatKey >= 0 )
    {
      ProcessingModeSpecificDevicePipeFormatKey = (*(__int64 (__fastcall **)(__int64, struct _tagpropertykey *, struct tagPROPVARIANT *))(*(_QWORD *)v12 + 40LL))(
                                                    v12,
                                                    &v17,
                                                    &pvar);
      if ( ProcessingModeSpecificDevicePipeFormatKey >= 0 )
      {
        if ( pvar.vt == 65 && (unsigned int)IsValidWfxBlob(&pvar) )
        {
LABEL_10:
          if ( !(unsigned int)ValidateUncompressedWaveFormatEx((const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData) )
          {
            ProcessingModeSpecificDevicePipeFormatKey = CloneWaveFormat(
                                                          (const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData,
                                                          a5);
            goto LABEL_13;
          }
LABEL_12:
          ProcessingModeSpecificDevicePipeFormatKey = -2004287480;
          goto LABEL_13;
        }
        PropVariantClear((PROPVARIANT *)&pvar);
        ProcessingModeSpecificDevicePipeFormatKey = CPolicyConfig::RefreshDeviceFormat(this, a2, a3);
        if ( ProcessingModeSpecificDevicePipeFormatKey >= 0 )
        {
          if ( (*(int (__fastcall **)(__int64, struct _tagpropertykey *, struct tagPROPVARIANT *))(*(_QWORD *)v12 + 40LL))(
                 v12,
                 &v17,
                 &pvar) < 0
            || pvar.vt != 65
            || !(unsigned int)IsValidWfxBlob(&pvar) )
          {
            goto LABEL_12;
          }
          goto LABEL_10;
        }
      }
    }
  }
LABEL_13:
  PropVariantClear((PROPVARIANT *)&pvar);
  if ( ProcessingModeSpecificDevicePipeFormatKey < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x3Du,
      (__int64)&WPP_fc485e014cea5a4c1924790da308a5ac_Traceguids,
      ProcessingModeSpecificDevicePipeFormatKey);
  }
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  return (unsigned int)ProcessingModeSpecificDevicePipeFormatKey;
}
