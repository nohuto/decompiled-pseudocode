/*
 * XREFs of _CDeviceGraphManager::GetStreamGroup_::_1_::dtor$3 @ 0x180049824
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDeviceGraphManager::GetStreamGroup_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IMMDevice>::~ComPtr<IMMDevice>(a2 + 32);
}
