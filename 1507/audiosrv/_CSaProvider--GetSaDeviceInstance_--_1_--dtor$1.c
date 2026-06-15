/*
 * XREFs of _CSaProvider::GetSaDeviceInstance_::_1_::dtor$1 @ 0x180074D14
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSaProvider::GetSaDeviceInstance_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>((_QWORD *)(a2 + 112));
}
