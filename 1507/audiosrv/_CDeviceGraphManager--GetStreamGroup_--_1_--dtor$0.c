/*
 * XREFs of _CDeviceGraphManager::GetStreamGroup_::_1_::dtor$0 @ 0x180047870
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDeviceGraphManager::GetStreamGroup_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>::~ComPtr<IDeviceGraphObjectsStore>(a2 + 128);
}
