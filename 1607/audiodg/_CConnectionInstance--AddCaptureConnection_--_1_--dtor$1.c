/*
 * XREFs of _CConnectionInstance::AddCaptureConnection_::_1_::dtor$1 @ 0x140030503
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CConnectionInstance::AddCaptureConnection_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>((int **)(a2 + 136));
}
