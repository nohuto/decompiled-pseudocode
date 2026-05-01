/*
 * XREFs of ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180024DA4
 * Callers:
 *     ?GetParentsChildrenStrings@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@PEBGPEAPEAGPEAK@Z @ 0x180007ADC (-GetParentsChildrenStrings@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@PEBGPEAPEAGPEAK@Z.c)
 *     ?Initialize@HostResourceInfo@ExecutionModel@@QEAAJKPEAXAEBU_AppModelActivationId@@PEAVResourcePolicyEngine@2@@Z @ 0x1800140B4 (-Initialize@HostResourceInfo@ExecutionModel@@QEAAJKPEAXAEBU_AppModelActivationId@@PEAVResourcePo.c)
 *     ?CalcSHA1@Internal@ExecutionModel@@YAJPEBGPEAG@Z @ 0x180017C50 (-CalcSHA1@Internal@ExecutionModel@@YAJPEBGPEAG@Z.c)
 *     ?NotifyPackageStateChange@HostResources@ExecutionModel@@IEAAXKPEAXPEBGW4RPPackageState@@@Z @ 0x1800183B4 (-NotifyPackageStateChange@HostResources@ExecutionModel@@IEAAXKPEAXPEBGW4RPPackageState@@@Z.c)
 *     ?GetProcessNameByPID@Internal@ExecutionModel@@YAJKPEAPEAG@Z @ 0x180019120 (-GetProcessNameByPID@Internal@ExecutionModel@@YAJKPEAPEAG@Z.c)
 *     ?Initialize@GameConfigStoreServer@ExecutionModel@@QEAAJPEBG@Z @ 0x18001BB0C (-Initialize@GameConfigStoreServer@ExecutionModel@@QEAAJPEBG@Z.c)
 *     ?EncryptString@Internal@ExecutionModel@@YAJPEBGPEAPEAU_CRYPTOAPI_BLOB@@@Z @ 0x180043DD0 (-EncryptString@Internal@ExecutionModel@@YAJPEBGPEAPEAU_CRYPTOAPI_BLOB@@@Z.c)
 *     ?GetProcessArgsByPID@Common@@YAJKPEAGPEAK@Z @ 0x1800445FC (-GetProcessArgsByPID@Common@@YAJKPEAGPEAK@Z.c)
 *     ?GetProcessArgsByPID@Internal@ExecutionModel@@YAJKPEAPEAG@Z @ 0x1800447AC (-GetProcessArgsByPID@Internal@ExecutionModel@@YAJKPEAPEAG@Z.c)
 *     ?GetProcessParentDirectoryByPID@Internal@ExecutionModel@@YAJKPEAPEAG@Z @ 0x180044848 (-GetProcessParentDirectoryByPID@Internal@ExecutionModel@@YAJKPEAPEAG@Z.c)
 *     ?GetProcessWorkingDirectoryByPID@Internal@ExecutionModel@@YAJKPEAPEAG@Z @ 0x180044B98 (-GetProcessWorkingDirectoryByPID@Internal@ExecutionModel@@YAJKPEAPEAG@Z.c)
 *     ?SerializeToPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@0PEBGPEBUGameConfig@2@_N@Z @ 0x1800455E4 (-SerializeToPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@0PEBGPEBUGameConf.c)
 *     ?Init@AppEnergyInformationForUser@@QEAAJKPEAX@Z @ 0x18004AB24 (-Init@AppEnergyInformationForUser@@QEAAJKPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__fastcall operator new[](size_t a1, const struct std::nothrow_t *a2)
{
  return operator new(a1, a2);
}
