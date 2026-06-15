/*
 * XREFs of ?GetEndpointEffect@CEndpointCharacteristics@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180012A90
 * Callers:
 *     ?ReloadApos@AudioEffectsWatcher@@AEAAJXZ @ 0x180030D60 (-ReloadApos@AudioEffectsWatcher@@AEAAJXZ.c)
 *     ?DeriveDevicePipeFormatFromConnectorFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x180081298 (-DeriveDevicePipeFormatFromConnectorFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___.c)
 *     ?CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53_NPEAPEAUIAudioDeviceGraph@@@Z @ 0x18008BBE8 (-CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_aud.c)
 * Callees:
 *     ?GetInitializedSystemEffectInterface@@YAJPEAUIMMDevice@@U_tagpropertykey@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU3@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1800115C0 (-GetInitializedSystemEffectInterface@@YAJPEAUIMMDevice@@U_tagpropertykey@@U_GUID@@HHW4__MIDL___M.c)
 *     ?GetSupportedConnectorModes@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@1@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18003FE88 (-GetSupportedConnectorModes@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@1@.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180040F4C (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 */

__int64 __fastcall CEndpointCharacteristics::GetEndpointEffect(
        CEndpointCharacteristics *this,
        int a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        struct _GUID *a4,
        struct IAudioProcessingObject **a5,
        struct IAudioSystemEffects2 **a6)
{
  int v6; // ebx
  GUID v10; // xmm6
  GUID fmtid; // xmm1
  DWORD pid; // eax
  struct IMMDevice *v15; // rcx
  int InitializedSystemEffectInterface; // eax
  struct _GUID v17; // [rsp+58h] [rbp-29h] BYREF
  struct _GUID v18; // [rsp+68h] [rbp-19h] BYREF
  struct _tagpropertykey v19; // [rsp+78h] [rbp-9h] BYREF

  v6 = 0;
  v10 = GUID_00000000_0000_0000_0000_000000000000;
  v17 = GUID_00000000_0000_0000_0000_000000000000;
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
        v15 = (struct IMMDevice *)*((_QWORD *)this + 2);
        v19.pid = pid;
        v18 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
        v19.fmtid = fmtid;
        InitializedSystemEffectInterface = GetInitializedSystemEffectInterface(v15, &v19, &v18, a2, 0, a3, &v17, a5, a6);
        v10 = v17;
        v6 = InitializedSystemEffectInterface;
        goto LABEL_9;
      }
      pid = v19.pid;
      v6 = -2147023728;
      fmtid = v19.fmtid;
    }
    else
    {
      fmtid = PKEY_FX_EndpointEffectClsid.fmtid;
      pid = PKEY_FX_EndpointEffectClsid.pid;
    }
    if ( v6 < 0 )
      goto LABEL_9;
    goto LABEL_15;
  }
LABEL_9:
  if ( a4 )
    *a4 = v10;
  return (unsigned int)v6;
}
