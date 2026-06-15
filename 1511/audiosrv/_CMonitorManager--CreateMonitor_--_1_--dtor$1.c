/*
 * XREFs of _CMonitorManager::CreateMonitor_::_1_::dtor$1 @ 0x1800925DD
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CMonitorManager::CreateMonitor_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  ATL::CComHeapPtr<STREAM_GROUP_DESCRIPTOR>::~CComHeapPtr<STREAM_GROUP_DESCRIPTOR>((LPVOID *)(a2 + 48));
}
