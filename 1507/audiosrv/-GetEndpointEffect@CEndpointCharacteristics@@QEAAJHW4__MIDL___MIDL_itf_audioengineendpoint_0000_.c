/*
 * XREFs of ?GetEndpointEffect@CEndpointCharacteristics@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180034734
 * Callers:
 *     ?DeriveDevicePipeFormatFromConnectorFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x180033FFC (-DeriveDevicePipeFormatFromConnectorFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___.c)
 *     ?GetSystemEffect@CEndpointCharacteristics@@QEAAJU_tagpropertykey@@U_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU3@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1800A9364 (-GetSystemEffect@CEndpointCharacteristics@@QEAAJU_tagpropertykey@@U_GUID@@HW4__MIDL___MIDL_itf_a.c)
 * Callees:
 *     ?GetInitializedSystemEffectInterface@@YAJPEAUIMMDevice@@U_tagpropertykey@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU3@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180030BDC (-GetInitializedSystemEffectInterface@@YAJPEAUIMMDevice@@U_tagpropertykey@@U_GUID@@HHW4__MIDL___M.c)
 *     ?GetSupportedConnectorModes@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@1@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180038138 (-GetSupportedConnectorModes@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@1@.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x1800381C8 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 */

__int64 __fastcall CEndpointCharacteristics::GetEndpointEffect(
        CEndpointCharacteristics *this,
        int a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        struct _GUID *a4,
        struct IAudioProcessingObject **a5,
        struct IAudioSystemEffects2 **a6)
{
  GUID v6; // xmm6
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v8; // ebx
  unsigned int v11; // esi
  GUID fmtid; // xmm1
  DWORD pid; // eax
  struct IMMDevice *v15; // rcx
  unsigned int InitializedSystemEffectInterface; // eax
  struct _GUID v17; // [rsp+58h] [rbp-29h] BYREF
  struct _GUID v18; // [rsp+68h] [rbp-19h] BYREF
  struct _tagpropertykey v19; // [rsp+78h] [rbp-9h] BYREF

  v6 = GUID_00000000_0000_0000_0000_000000000000;
  v8 = a3;
  v11 = 0;
  v17 = GUID_00000000_0000_0000_0000_000000000000;
  if ( a4 )
    *a4 = GUID_00000000_0000_0000_0000_000000000000;
  if ( a5 )
    *a5 = 0LL;
  if ( a6 )
    *a6 = 0LL;
  if ( a3 == eOffloadConnector )
    v8 = eHostProcessConnector;
  if ( a2
    || (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                       (char *)this + 16 * v8 + 272,
                       &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3) != -1
    && *((_DWORD *)CEndpointCharacteristics::GetSupportedConnectorModes(this, v8) + 2) <= 1u )
  {
    if ( v8 >= eHostProcessConnector )
    {
      if ( v8 <= eOffloadConnector )
      {
        fmtid = PKEY_FX_EndpointEffectClsid.fmtid;
        pid = PKEY_FX_EndpointEffectClsid.pid;
        goto LABEL_20;
      }
      if ( v8 == eKeywordDetectorConnector )
      {
        fmtid = PKEY_FX_KeywordDetector_EndpointEffectClsid.fmtid;
        pid = PKEY_FX_KeywordDetector_EndpointEffectClsid.pid;
LABEL_20:
        v15 = (struct IMMDevice *)*((_QWORD *)this + 2);
        v19.pid = pid;
        v18 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
        v19.fmtid = fmtid;
        InitializedSystemEffectInterface = GetInitializedSystemEffectInterface(v15, &v19, &v18, a2, 0, v8, &v17, a5, a6);
        v6 = v17;
        v11 = InitializedSystemEffectInterface;
        goto LABEL_11;
      }
    }
    v11 = -2147023728;
  }
LABEL_11:
  if ( a4 )
    *a4 = v6;
  return v11;
}
