/*
 * XREFs of _CAudioDeviceGraph::CAudioDeviceGraph_::_1_::dtor$1 @ 0x14001B0D6
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioDeviceGraph::CAudioDeviceGraph_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IMMDeviceEnumerator>::~CComPtr<IMMDeviceEnumerator>(*(_QWORD *)(a2 + 80) + 112LL);
}
