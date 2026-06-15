/*
 * XREFs of _CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics_::_1_::dtor$0 @ 0x180047220
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  return ATL::CComPtrBase<IPart>::Release(a2 + 48);
}
