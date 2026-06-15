/*
 * XREFs of _CConnectionInstance::RemoveCaptureConnection_::_1_::dtor$1 @ 0x1400306E7
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CConnectionInstance::RemoveCaptureConnection_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>((int **)(a2 + 96));
}
