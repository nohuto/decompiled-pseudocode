/*
 * XREFs of _CAudioResourceManager::SwitchStreamGroupsFromNonDefaultToDefaultSaDevice_::_1_::dtor$2 @ 0x1800932DD
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioResourceManager::SwitchStreamGroupsFromNonDefaultToDefaultSaDevice_::_1_::dtor_2(
        __int64 a1,
        __int64 a2)
{
  ATL::CAutoPtr<SaDeviceParams>::~CAutoPtr<SaDeviceParams>((LPVOID **)(a2 + 96));
}
