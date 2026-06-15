/*
 * XREFs of ?GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU2@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180066248
 * Callers:
 *     ?DeriveStreamFormatFromMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x180086008 (-DeriveStreamFormatFromMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_a.c)
 *     ?GetSystemEffect@CEndpointCharacteristics@@QEAAJU_tagpropertykey@@U_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU3@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1800A9364 (-GetSystemEffect@CEndpointCharacteristics@@QEAAJU_tagpropertykey@@U_GUID@@HW4__MIDL___MIDL_itf_a.c)
 * Callees:
 *     ?GetInitializedSystemEffectInterface@@YAJPEAUIMMDevice@@U_tagpropertykey@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU3@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180030BDC (-GetInitializedSystemEffectInterface@@YAJPEAUIMMDevice@@U_tagpropertykey@@U_GUID@@HHW4__MIDL___M.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x1800381C8 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?GetSupportedSFXAPOModes@CEndpointCharacteristics@@AEAAPEBVCAudioSignalProcessingModeArray@1@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800661F0 (-GetSupportedSFXAPOModes@CEndpointCharacteristics@@AEAAPEBVCAudioSignalProcessingModeArray@1@W4_.c)
 */

__int64 __fastcall CEndpointCharacteristics::GetStreamEffect(
        CEndpointCharacteristics *this,
        struct _GUID *a2,
        int a3,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a4,
        struct _GUID *a5,
        struct IAudioProcessingObject **a6,
        struct IAudioSystemEffects2 **a7)
{
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v8; // ebx
  GUID v10; // xmm6
  unsigned int v11; // esi
  __int64 *SupportedSFXAPOModes; // rax
  GUID fmtid; // xmm1
  DWORD pid; // eax
  struct _GUID v15; // xmm0
  struct IMMDevice *v16; // rcx
  unsigned int InitializedSystemEffectInterface; // eax
  struct _GUID v19; // [rsp+58h] [rbp-41h] BYREF
  struct _GUID v20; // [rsp+68h] [rbp-31h] BYREF
  struct _tagpropertykey v21; // [rsp+78h] [rbp-21h] BYREF

  v8 = a4;
  v10 = GUID_00000000_0000_0000_0000_000000000000;
  v11 = 0;
  *(_QWORD *)&v19.Data1 = a2;
  v20 = GUID_00000000_0000_0000_0000_000000000000;
  if ( a5 )
    *a5 = GUID_00000000_0000_0000_0000_000000000000;
  if ( a6 )
    *a6 = 0LL;
  if ( a7 )
    *a7 = 0LL;
  if ( a4 == eOffloadConnector )
    v8 = eHostProcessConnector;
  if ( a3
    || (SupportedSFXAPOModes = (__int64 *)CEndpointCharacteristics::GetSupportedSFXAPOModes(this, v8),
        (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                        SupportedSFXAPOModes,
                        *(_QWORD **)&v19.Data1) != -1) )
  {
    if ( v8 >= eHostProcessConnector )
    {
      if ( v8 <= eOffloadConnector )
      {
        fmtid = PKEY_FX_StreamEffectClsid.fmtid;
        pid = PKEY_FX_StreamEffectClsid.pid;
        goto LABEL_16;
      }
      if ( v8 == eKeywordDetectorConnector )
      {
        fmtid = PKEY_FX_KeywordDetector_StreamEffectClsid.fmtid;
        pid = PKEY_FX_KeywordDetector_StreamEffectClsid.pid;
LABEL_16:
        v15 = *a2;
        v16 = (struct IMMDevice *)*((_QWORD *)this + 2);
        v21.pid = pid;
        v19 = v15;
        v21.fmtid = fmtid;
        InitializedSystemEffectInterface = GetInitializedSystemEffectInterface(v16, &v21, &v19, a3, 0, v8, &v20, a6, a7);
        v10 = v20;
        v11 = InitializedSystemEffectInterface;
        goto LABEL_18;
      }
    }
    v11 = -2147023728;
  }
LABEL_18:
  if ( a5 )
    *a5 = v10;
  return v11;
}
