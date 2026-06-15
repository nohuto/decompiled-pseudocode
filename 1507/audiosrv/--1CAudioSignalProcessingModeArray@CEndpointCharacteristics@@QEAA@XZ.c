/*
 * XREFs of ??1CAudioSignalProcessingModeArray@CEndpointCharacteristics@@QEAA@XZ @ 0x1800A7460
 * Callers:
 *     _CEndpointCharacteristics::CEndpointCharacteristics_::_1_::dtor$5 @ 0x180047AC4 (_CEndpointCharacteristics--CEndpointCharacteristics_--_1_--dtor$5.c)
 *     _CEndpointCharacteristics::_CEndpointCharacteristics_::_1_::dtor$5 @ 0x1800A76CD (_CEndpointCharacteristics--_CEndpointCharacteristics_--_1_--dtor$5.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CEndpointCharacteristics::CAudioSignalProcessingModeArray::~CAudioSignalProcessingModeArray(
        CEndpointCharacteristics::CAudioSignalProcessingModeArray *this)
{
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(this);
}
