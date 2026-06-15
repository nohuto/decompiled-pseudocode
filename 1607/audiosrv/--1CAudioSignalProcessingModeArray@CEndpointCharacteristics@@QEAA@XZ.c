/*
 * XREFs of ??1CAudioSignalProcessingModeArray@CEndpointCharacteristics@@QEAA@XZ @ 0x180087110
 * Callers:
 *     _CEndpointCharacteristics::CEndpointCharacteristics_::_1_::dtor$5 @ 0x18003B666 (_CEndpointCharacteristics--CEndpointCharacteristics_--_1_--dtor$5.c)
 *     _CEndpointCharacteristics::_CEndpointCharacteristics_::_1_::dtor$5 @ 0x18008743A (_CEndpointCharacteristics--_CEndpointCharacteristics_--_1_--dtor$5.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CEndpointCharacteristics::CAudioSignalProcessingModeArray::~CAudioSignalProcessingModeArray(
        CEndpointCharacteristics::CAudioSignalProcessingModeArray *this)
{
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(this);
}
