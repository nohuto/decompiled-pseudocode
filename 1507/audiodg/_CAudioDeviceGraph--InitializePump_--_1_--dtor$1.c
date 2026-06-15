/*
 * XREFs of _CAudioDeviceGraph::InitializePump_::_1_::dtor$1 @ 0x14001B6BC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioDeviceGraph::InitializePump_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>(a2 + 184);
}
