/*
 * XREFs of _CDeviceGraphManager::GetStreamGroup_::_1_::dtor$3 @ 0x18003B4E4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDeviceGraphManager::GetStreamGroup_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return ATL::CComPtrBase<IPart>::Release(a2 + 128);
}
