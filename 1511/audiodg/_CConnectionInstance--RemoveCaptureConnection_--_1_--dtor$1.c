/*
 * XREFs of _CConnectionInstance::RemoveCaptureConnection_::_1_::dtor$1 @ 0x1400337EC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CConnectionInstance::RemoveCaptureConnection_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>((volatile signed __int32 **)(a2 + 96));
}
