/*
 * XREFs of _CConnectionInstance::AddCaptureConnection_::_1_::dtor$1 @ 0x1400335CC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CConnectionInstance::AddCaptureConnection_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>((volatile signed __int32 **)(a2 + 112));
}
