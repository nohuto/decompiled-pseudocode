/*
 * XREFs of _CAudioDeviceGraph::_CAudioDeviceGraph_::_1_::dtor$8 @ 0x14001AC80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioDeviceGraph::_CAudioDeviceGraph_::_1_::dtor_8(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IMMDeviceEnumerator>::~CComPtr<IMMDeviceEnumerator>((__int64 *)(*(_QWORD *)(a2 + 64) + 368LL));
}
