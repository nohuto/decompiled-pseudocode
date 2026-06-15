/*
 * XREFs of _CAudioResourceManager::DestroyStream_::_1_::dtor$0 @ 0x1800473E4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioResourceManager::DestroyStream_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IMMDevice>::~ComPtr<IMMDevice>(a2 + 152);
}
