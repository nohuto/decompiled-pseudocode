/*
 * XREFs of _CAudioResourceManager::GetSaDeviceForSharedStream_::_1_::dtor$1 @ 0x18003AF4D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioResourceManager::GetSaDeviceForSharedStream_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return std::vector<Microsoft::WRL::ComPtr<ISaDeviceProxy>>::~vector<Microsoft::WRL::ComPtr<ISaDeviceProxy>>(a2 + 152);
}
