/*
 * XREFs of _CConnectionInstance::AddCaptureConnection_::_1_::dtor$1 @ 0x140033364
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CConnectionInstance::AddCaptureConnection_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>((_QWORD *)(a2 + 112));
}
