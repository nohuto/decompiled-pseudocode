/*
 * XREFs of ?GetEndpointEffect@CEndpointCharacteristics@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18001B27C
 * Callers:
 *     ?GetSystemEffect@CEndpointCharacteristics@@QEAAJU_tagpropertykey@@U_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU3@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180003A7C (-GetSystemEffect@CEndpointCharacteristics@@QEAAJU_tagpropertykey@@U_GUID@@HW4__MIDL___MIDL_itf_a.c)
 *     ?CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53_NPEAPEAUIAudioDeviceGraph@@@Z @ 0x18002AAA0 (-CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_aud.c)
 *     ?DeriveDevicePipeFormatFromConnectorFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x180069B84 (-DeriveDevicePipeFormatFromConnectorFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___.c)
 * Callees:
 *     ?GetSupportedConnectorModes@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@1@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18001C9C4 (-GetSupportedConnectorModes@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@1@.c)
 *     ?GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJU_tagpropertykey@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU3@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18001CA10 (-GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJU_tagpropertykey@@U_GUID@@HH.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x18002761C (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 */

__int64 __fastcall CEndpointCharacteristics::GetEndpointEffect(
        CEndpointCharacteristics *this,
        int a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        struct _GUID *a4,
        struct IAudioProcessingObject **a5,
        struct IAudioSystemEffects2 **a6)
{
  int InitializedSystemEffectInterface; // ebx
  GUID fmtid; // xmm1
  DWORD pid; // eax
  struct _tagpropertykey v14; // [rsp+50h] [rbp-49h] BYREF
  struct _GUID v15; // [rsp+70h] [rbp-29h] BYREF
  struct _GUID v16; // [rsp+80h] [rbp-19h] BYREF

  InitializedSystemEffectInterface = 0;
  v16 = GUID_00000000_0000_0000_0000_000000000000;
  if ( a4 )
    *a4 = GUID_00000000_0000_0000_0000_000000000000;
  if ( a5 )
    *a5 = 0LL;
  if ( a6 )
    *a6 = 0LL;
  if ( a2
    || (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                       (char *)this + 16 * a3 + 272,
                       &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3) != -1
    && *((_DWORD *)CEndpointCharacteristics::GetSupportedConnectorModes(this, a3) + 2) <= 1u )
  {
    if ( a3 )
    {
      if ( a3 == eKeywordDetectorConnector )
      {
        fmtid = PKEY_FX_KeywordDetector_EndpointEffectClsid.fmtid;
        pid = PKEY_FX_KeywordDetector_EndpointEffectClsid.pid;
LABEL_15:
        v14.pid = pid;
        v15 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
        v14.fmtid = fmtid;
        InitializedSystemEffectInterface = CEndpointCharacteristics::GetInitializedSystemEffectInterface(
                                             this,
                                             &v14,
                                             &v15,
                                             a2,
                                             0,
                                             a3,
                                             &v16,
                                             a5,
                                             a6);
        goto LABEL_9;
      }
      pid = v14.pid;
      InitializedSystemEffectInterface = -2147023728;
      fmtid = v14.fmtid;
    }
    else
    {
      fmtid = PKEY_FX_EndpointEffectClsid.fmtid;
      pid = PKEY_FX_EndpointEffectClsid.pid;
    }
    if ( InitializedSystemEffectInterface < 0 )
      goto LABEL_9;
    goto LABEL_15;
  }
LABEL_9:
  if ( a4 )
    *a4 = v16;
  return (unsigned int)InitializedSystemEffectInterface;
}
