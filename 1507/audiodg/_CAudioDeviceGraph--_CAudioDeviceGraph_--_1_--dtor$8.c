/*
 * XREFs of _CAudioDeviceGraph::_CAudioDeviceGraph_::_1_::dtor$8 @ 0x14001B7BF
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioDeviceGraph::_CAudioDeviceGraph_::_1_::dtor_8(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>(*(_QWORD *)(a2 + 64) + 360LL);
}
