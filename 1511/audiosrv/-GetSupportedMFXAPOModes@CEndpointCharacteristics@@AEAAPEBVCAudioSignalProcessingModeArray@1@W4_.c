/*
 * XREFs of ?GetSupportedMFXAPOModes@CEndpointCharacteristics@@AEAAPEBVCAudioSignalProcessingModeArray@1@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180012A54
 * Callers:
 *     ?GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU2@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180012BC0 (-GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     ?CanBuildProcessingModesOnRawConnector@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180013690 (-CanBuildProcessingModesOnRawConnector@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioe.c)
 *     ?IsAPOModeSupported@CEndpointCharacteristics@@QEAAHU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800643BC (-IsAPOModeSupported@CEndpointCharacteristics@@QEAAHU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180080460 (-DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL.c)
 *     ?GetAPOProcessingMode@CEndpointCharacteristics@@QEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@I@Z @ 0x1800A5DA4 (-GetAPOProcessingMode@CEndpointCharacteristics@@QEAA-AU_GUID@@W4__MIDL___MIDL_itf_audioengineend.c)
 * Callees:
 *     ?AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x1800129D0 (-AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ.c)
 */

const struct CEndpointCharacteristics::CAudioSignalProcessingModeArray *__fastcall CEndpointCharacteristics::GetSupportedMFXAPOModes(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2)
{
  __int64 v2; // rdi

  v2 = a2;
  if ( CEndpointCharacteristics::AreEnhancementsEnabled(this) || (_DWORD)v2 == 3 )
    return (CEndpointCharacteristics *)((char *)this + 16 * v2 + 208);
  else
    return (CEndpointCharacteristics *)((char *)this + 336);
}
