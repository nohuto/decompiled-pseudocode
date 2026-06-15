/*
 * XREFs of _CDeviceGraphManager::GetStreamGroup_::_1_::dtor$2 @ 0x180047888
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDeviceGraphManager::GetStreamGroup_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return ATL::CComHeapPtr<STREAM_GROUP_DESCRIPTOR>::~CComHeapPtr<STREAM_GROUP_DESCRIPTOR>(a2 + 40);
}
