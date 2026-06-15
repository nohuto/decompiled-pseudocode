/*
 * XREFs of _CAudioResourceManager::SwitchStreamGroupsFromNonDefaultToDefaultSaDevice_::_1_::dtor$1 @ 0x1800932D1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioResourceManager::SwitchStreamGroupsFromNonDefaultToDefaultSaDevice_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  ATL::CAutoPtr<SaDeviceParams>::~CAutoPtr<SaDeviceParams>((LPVOID **)(a2 + 240));
}
