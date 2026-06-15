/*
 * XREFs of ?GetSupportedSFXAPOModes@CEndpointCharacteristics@@AEAAPEBVCAudioSignalProcessingModeArray@1@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800661F0
 * Callers:
 *     ?GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU2@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180066248 (-GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint.c)
 * Callees:
 *     ?AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x180022A10 (-AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ.c)
 */

const struct CEndpointCharacteristics::CAudioSignalProcessingModeArray *__fastcall CEndpointCharacteristics::GetSupportedSFXAPOModes(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2)
{
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v2; // ebx

  v2 = a2;
  if ( a2 == eOffloadConnector )
    v2 = eHostProcessConnector;
  if ( CEndpointCharacteristics::AreEnhancementsEnabled(this) || v2 == eKeywordDetectorConnector )
    return (CEndpointCharacteristics *)((char *)this + 16 * v2 + 144);
  else
    return (CEndpointCharacteristics *)((char *)this + 352);
}
