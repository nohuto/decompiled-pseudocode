/*
 * XREFs of _CPipeInstance::Cleanup_::_1_::dtor$1 @ 0x14001AD80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPipeInstance::Cleanup_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>(*(_QWORD *)(a2 + 120) + 24LL);
}
