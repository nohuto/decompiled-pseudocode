/*
 * XREFs of _CEndpointCharacteristics::DiscoverConnectorProcessingModeCharacteristics_::_1_::dtor$3 @ 0x1800A7EEC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall CEndpointCharacteristics::DiscoverConnectorProcessingModeCharacteristics_::_1_::dtor_3(
        __int64 a1,
        __int64 a2)
{
  return ATL::CAutoPtr<CConnectorProcessingModeCharacteristics>::~CAutoPtr<CConnectorProcessingModeCharacteristics>(
           (CConnectorProcessingModeCharacteristics **)(a2 + 328),
           a2);
}
