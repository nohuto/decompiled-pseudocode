/*
 * XREFs of ?GetSystemEffect@CEndpointCharacteristics@@QEAAJU_tagpropertykey@@U_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU3@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180003A7C
 * Callers:
 *     ?ReloadApos@AudioEffectsWatcher@@AEAAJXZ @ 0x180003304 (-ReloadApos@AudioEffectsWatcher@@AEAAJXZ.c)
 * Callees:
 *     ??8@YAHAEBU_tagpropertykey@@0@Z @ 0x1800043E4 (--8@YAHAEBU_tagpropertykey@@0@Z.c)
 *     ?GetEndpointEffect@CEndpointCharacteristics@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18001B27C (-GetEndpointEffect@CEndpointCharacteristics@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_.c)
 *     ?GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU2@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18001B39C (-GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU2@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18001B49C (-GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 */

int __fastcall CEndpointCharacteristics::GetSystemEffect(
        CEndpointCharacteristics *this,
        struct _tagpropertykey *a2,
        struct _GUID *a3,
        __int64 a4,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a5,
        struct _GUID *a6,
        struct IAudioProcessingObject **a7,
        struct IAudioSystemEffects2 **a8)
{
  CEndpointCharacteristics *v8; // r10
  struct IAudioSystemEffects2 **v9; // r11
  __int64 v11; // rax
  __int64 v12; // rax
  struct _GUID v13; // [rsp+40h] [rbp-18h] BYREF

  if ( a2->pid != 5 )
    goto LABEL_11;
  v11 = *(_QWORD *)&a2->fmtid.Data1 - *(_QWORD *)&PKEY_FX_StreamEffectClsid.fmtid.Data1;
  if ( *(_QWORD *)&a2->fmtid.Data1 == *(_QWORD *)&PKEY_FX_StreamEffectClsid.fmtid.Data1 )
    v11 = *(_QWORD *)a2->fmtid.Data4 - *(_QWORD *)PKEY_FX_StreamEffectClsid.fmtid.Data4;
  if ( v11 )
  {
LABEL_11:
    if ( a2->pid != 6 )
      goto LABEL_16;
    v12 = *(_QWORD *)&a2->fmtid.Data1 - *(_QWORD *)&PKEY_FX_ModeEffectClsid.fmtid.Data1;
    if ( *(_QWORD *)&a2->fmtid.Data1 == *(_QWORD *)&PKEY_FX_ModeEffectClsid.fmtid.Data1 )
      v12 = *(_QWORD *)a2->fmtid.Data4 - *(_QWORD *)PKEY_FX_ModeEffectClsid.fmtid.Data4;
    if ( v12 )
    {
LABEL_16:
      if ( (unsigned int)operator==(a2, &PKEY_FX_EndpointEffectClsid, a3) )
        return CEndpointCharacteristics::GetEndpointEffect(v8, 1, eHostProcessConnector, 0LL, 0LL, v9);
      else
        return -2147024809;
    }
    else
    {
      v13 = *a3;
      return CEndpointCharacteristics::GetModeEffect(this, &v13, 1, eHostProcessConnector, 0LL, 0LL, a8);
    }
  }
  else
  {
    v13 = *a3;
    return CEndpointCharacteristics::GetStreamEffect(this, &v13, 1, eHostProcessConnector, 0LL, 0LL, a8);
  }
}
