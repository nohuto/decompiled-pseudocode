/*
 * XREFs of _CAudioResourceManager::RevertToSaDevicesWithDefaultSettings_::_1_::dtor$0 @ 0x180092C9A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CAudioResourceManager::RevertToSaDevicesWithDefaultSettings_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  return ATL::CComPtr<CEndpointCharacteristics>::~CComPtr<CEndpointCharacteristics>(
           (__int64 *)(a2 + 168),
           (volatile int *)a2);
}
