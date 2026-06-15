/*
 * XREFs of ??1?$ComPtr@UIMMDevice@@@WRL@Microsoft@@QEAA@XZ @ 0x1800659EC
 * Callers:
 *     _CDeviceGraphManager::GetStreamGroup_::_1_::dtor$3 @ 0x180049824 (_CDeviceGraphManager--GetStreamGroup_--_1_--dtor$3.c)
 *     _CAudioResourceManager::DestroyStream_::_1_::dtor$0 @ 0x180049850 (_CAudioResourceManager--DestroyStream_--_1_--dtor$0.c)
 *     _CAudioResourceManager::GetSaDeviceForSharedStream_::_1_::dtor$2 @ 0x1800498A1 (_CAudioResourceManager--GetSaDeviceForSharedStream_--_1_--dtor$2.c)
 *     _CAudioResourceManager::GetSaDeviceForSharedStream_::_1_::dtor$3 @ 0x1800498AD (_CAudioResourceManager--GetSaDeviceForSharedStream_--_1_--dtor$3.c)
 *     _CSaDeviceProxy::_CSaDeviceProxy_::_1_::dtor$3 @ 0x18004991C (_CSaDeviceProxy--_CSaDeviceProxy_--_1_--dtor$3.c)
 *     _CSaDeviceProxy::RuntimeClassInitialize_::_1_::dtor$1 @ 0x18004994C (_CSaDeviceProxy--RuntimeClassInitialize_--_1_--dtor$1.c)
 *     _CBaseStreamGroupProxy::_CBaseStreamGroupProxy_::_1_::dtor$4 @ 0x1800499F0 (_CBaseStreamGroupProxy--_CBaseStreamGroupProxy_--_1_--dtor$4.c)
 *     _CDeviceGraphObjectsStore::FindFirstMatchingSaDevice_::_1_::dtor$3 @ 0x180049AB4 (_CDeviceGraphObjectsStore--FindFirstMatchingSaDevice_--_1_--dtor$3.c)
 *     _CDeviceGraphObjectsStore::FindFirstMatchingSaDevice_::_1_::dtor$4 @ 0x180049AC0 (_CDeviceGraphObjectsStore--FindFirstMatchingSaDevice_--_1_--dtor$4.c)
 *     _DeriveDeviceGraphFormatsForStream_::_1_::dtor$4 @ 0x180049FB0 (_DeriveDeviceGraphFormatsForStream_--_1_--dtor$4.c)
 *     __lambda_80c14477c5528a734bb27b3f731672ff_::operator()_::_1_::dtor$0 @ 0x18008E0C2 (__lambda_80c14477c5528a734bb27b3f731672ff_--operator()_--_1_--dtor$0.c)
 *     __lambda_80c14477c5528a734bb27b3f731672ff_::operator()_::_1_::dtor$1 @ 0x18008E0CE (__lambda_80c14477c5528a734bb27b3f731672ff_--operator()_--_1_--dtor$1.c)
 *     __lambda_80c14477c5528a734bb27b3f731672ff_::operator()_::_1_::dtor$2 @ 0x18008E0DA (__lambda_80c14477c5528a734bb27b3f731672ff_--operator()_--_1_--dtor$2.c)
 *     __lambda_fdf8f02a4d754a1adb6183af8cae6406_::operator()_::_1_::dtor$0 @ 0x18008E494 (__lambda_fdf8f02a4d754a1adb6183af8cae6406_--operator()_--_1_--dtor$0.c)
 *     __lambda_fdf8f02a4d754a1adb6183af8cae6406_::operator()_::_1_::dtor$1 @ 0x18008E4A0 (__lambda_fdf8f02a4d754a1adb6183af8cae6406_--operator()_--_1_--dtor$1.c)
 *     _CDeviceGraphObjectsStore::AnySaDeviceExists_::_1_::dtor$0 @ 0x18008E641 (_CDeviceGraphObjectsStore--AnySaDeviceExists_--_1_--dtor$0.c)
 *     _std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_2bcc51b66ca93e18e4fdf62693613b22____::_1_::dtor$0 @ 0x18008EF89 (_std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft-_ea_18008EF89.c)
 *     _std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_5e8dce2c070e4f08923b16093ddb4e17____::_1_::dtor$0 @ 0x18008F015 (_std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft-_ea_18008F015.c)
 *     _std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_d23c2bba33b47e6fe2bdf8624c4c437d____::_1_::dtor$0 @ 0x18008F129 (_std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft-_ea_18008F129.c)
 *     _CAudioResourceManager::RevertToSaDevicesWithDefaultSettings_::_1_::dtor$5 @ 0x18009059A (_CAudioResourceManager--RevertToSaDevicesWithDefaultSettings_--_1_--dtor$5.c)
 *     _CAudioResourceManager::SwitchStreamGroupsFromNonDefaultToDefaultSaDevice_::_1_::dtor$5 @ 0x180090B77 (_CAudioResourceManager--SwitchStreamGroupsFromNonDefaultToDefaultSaDevice_--_1_--dtor$5.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<IMMDevice>::~ComPtr<IMMDevice>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(a1);
}
