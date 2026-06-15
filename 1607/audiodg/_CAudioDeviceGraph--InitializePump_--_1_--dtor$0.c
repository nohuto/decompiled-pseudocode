/*
 * XREFs of _CAudioDeviceGraph::InitializePump_::_1_::dtor$0 @ 0x14001AB60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioDeviceGraph::InitializePump_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IMMDeviceEnumerator>::~CComPtr<IMMDeviceEnumerator>((__int64 *)(a2 + 64));
}
