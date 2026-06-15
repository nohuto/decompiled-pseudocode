/*
 * XREFs of _CAudioResourceManager::SwitchStreamGroupsFromNonDefaultToDefaultSaDevice_::_1_::dtor$5 @ 0x180090B77
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioResourceManager::SwitchStreamGroupsFromNonDefaultToDefaultSaDevice_::_1_::dtor_5(
        __int64 a1,
        __int64 a2)
{
  return Microsoft::WRL::ComPtr<IMMDevice>::~ComPtr<IMMDevice>((__int64 *)(a2 + 264));
}
