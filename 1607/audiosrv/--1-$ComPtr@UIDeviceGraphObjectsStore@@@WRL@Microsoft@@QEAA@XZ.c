/*
 * XREFs of ??1?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@QEAA@XZ @ 0x1800510BC
 * Callers:
 *     _CAudioResourceManager::GetSaDeviceForSharedStream_::_1_::dtor$0 @ 0x18003AF41 (_CAudioResourceManager--GetSaDeviceForSharedStream_--_1_--dtor$0.c)
 *     _CDeviceGraphManager::GetStreamGroup_::_1_::dtor$0 @ 0x18003B4C0 (_CDeviceGraphManager--GetStreamGroup_--_1_--dtor$0.c)
 *     _CAudioResourceManager::ReevaluateSaDeviceSettings_::_1_::dtor$1 @ 0x1800788AF (_CAudioResourceManager--ReevaluateSaDeviceSettings_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>::~ComPtr<IDeviceGraphObjectsStore>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>::InternalRelease(a1);
}
