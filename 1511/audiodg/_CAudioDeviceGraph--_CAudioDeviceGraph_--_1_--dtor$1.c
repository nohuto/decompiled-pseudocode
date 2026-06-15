/*
 * XREFs of _CAudioDeviceGraph::_CAudioDeviceGraph_::_1_::dtor$1 @ 0x14001B02E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioDeviceGraph::_CAudioDeviceGraph_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IMMDeviceEnumerator>::~CComPtr<IMMDeviceEnumerator>(*(_QWORD *)(a2 + 64) + 112LL);
}
