/*
 * XREFs of _CSaProvider::GetDeviceDefaults_::_1_::dtor$2 @ 0x180047378
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSaProvider::GetDeviceDefaults_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>(a2 + 64);
}
