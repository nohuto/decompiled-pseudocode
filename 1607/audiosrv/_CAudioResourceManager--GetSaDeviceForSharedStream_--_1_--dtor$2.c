/*
 * XREFs of _CAudioResourceManager::GetSaDeviceForSharedStream_::_1_::dtor$2 @ 0x18003AF59
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioResourceManager::GetSaDeviceForSharedStream_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<ISaDeviceProxy>::~ComPtr<ISaDeviceProxy>(a2 + 88);
}
