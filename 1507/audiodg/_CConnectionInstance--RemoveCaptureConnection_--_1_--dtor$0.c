/*
 * XREFs of _CConnectionInstance::RemoveCaptureConnection_::_1_::dtor$0 @ 0x140033564
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CConnectionInstance::RemoveCaptureConnection_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>((_QWORD *)(a2 + 120));
}
