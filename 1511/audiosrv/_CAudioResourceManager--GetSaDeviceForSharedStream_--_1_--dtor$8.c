/*
 * XREFs of _CAudioResourceManager::GetSaDeviceForSharedStream_::_1_::dtor$8 @ 0x1800498D1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioResourceManager::GetSaDeviceForSharedStream_::_1_::dtor_8(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>((_QWORD *)(a2 + 96));
}
