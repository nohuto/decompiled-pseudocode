/*
 * XREFs of _CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics_::_1_::dtor$2 @ 0x18004725C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics_::_1_::dtor_2(
        __int64 a1,
        __int64 a2)
{
  return ATL::CComPtrBase<IPart>::Release(a2 + 200);
}
