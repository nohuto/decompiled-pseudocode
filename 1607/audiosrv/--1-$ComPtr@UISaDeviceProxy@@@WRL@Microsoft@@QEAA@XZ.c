/*
 * XREFs of ??1?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x180050D50
 * Callers:
 *     _CAudioResourceManager::DestroyStream_::_1_::dtor$2 @ 0x18003AF08 (_CAudioResourceManager--DestroyStream_--_1_--dtor$2.c)
 *     _CAudioResourceManager::GetSaDeviceForSharedStream_::_1_::dtor$2 @ 0x18003AF59 (_CAudioResourceManager--GetSaDeviceForSharedStream_--_1_--dtor$2.c)
 *     _CAudioResourceManager::GetSaDeviceForSharedStream_::_1_::dtor$3 @ 0x18003AF65 (_CAudioResourceManager--GetSaDeviceForSharedStream_--_1_--dtor$3.c)
 *     _CDeviceGraphObjectsStore::FindFirstMatchingSaDevice_::_1_::dtor$4 @ 0x18003B180 (_CDeviceGraphObjectsStore--FindFirstMatchingSaDevice_--_1_--dtor$4.c)
 *     _CBaseStreamGroupProxy::_CBaseStreamGroupProxy_::_1_::dtor$4 @ 0x18003B336 (_CBaseStreamGroupProxy--_CBaseStreamGroupProxy_--_1_--dtor$4.c)
 *     __lambda_63adadfa8c2e225bcf88290a3b13fd06_::operator()_::_1_::dtor$1 @ 0x1800766F1 (__lambda_63adadfa8c2e225bcf88290a3b13fd06_--operator()_--_1_--dtor$1.c)
 *     __lambda_c774dc0092cfa85ab52d91ce2e4bcbd2_::operator()_::_1_::dtor$2 @ 0x180076852 (__lambda_c774dc0092cfa85ab52d91ce2e4bcbd2_--operator()_--_1_--dtor$2.c)
 *     _std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_376692326ac56426bc4e7ed2e27e0f46____::_1_::dtor$0 @ 0x180077674 (_std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--WRL--ComPtr_.c)
 *     _std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_940937c22359e6b81aa86f3db89c0704____::_1_::dtor$0 @ 0x1800777FA (_std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft-_ea_1800777FA.c)
 *     _std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_f2963b5c83cb5d3ebda59818f6b56d22____::_1_::dtor$0 @ 0x180077979 (_std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft-_ea_180077979.c)
 *     _CAudioResourceManager::ReevaluateSaDeviceSettings_::_1_::dtor$4 @ 0x1800788D3 (_CAudioResourceManager--ReevaluateSaDeviceSettings_--_1_--dtor$4.c)
 *     _CAudioResourceManager::SwitchStreamGroupsToNewSaDevice_::_1_::dtor$5 @ 0x180079313 (_CAudioResourceManager--SwitchStreamGroupsToNewSaDevice_--_1_--dtor$5.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<ISaDeviceProxy>::~ComPtr<ISaDeviceProxy>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalRelease(a1);
}
