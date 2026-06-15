/*
 * XREFs of _CConnectionInstance::AddRenderConnection_::_1_::dtor$1 @ 0x14001B12C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CConnectionInstance::AddRenderConnection_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>(a2 + 128);
}
