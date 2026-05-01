/*
 * XREFs of ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002BB44
 * Callers:
 *     ?GetProcessNameByPID@Internal@ExecutionModel@@YAJKPEAPEAG@Z @ 0x180006AB0 (-GetProcessNameByPID@Internal@ExecutionModel@@YAJKPEAPEAG@Z.c)
 *     ?CalcSHA1@Internal@ExecutionModel@@YAJPEBGPEAG@Z @ 0x180007010 (-CalcSHA1@Internal@ExecutionModel@@YAJPEBGPEAG@Z.c)
 *     ?NotifyPackageStateChange@HostResources@ExecutionModel@@IEAAXKPEAXPEBGW4RPPackageState@@@Z @ 0x18001A2E4 (-NotifyPackageStateChange@HostResources@ExecutionModel@@IEAAXKPEAXPEBGW4RPPackageState@@@Z.c)
 *     ?Initialize@ApplicationPackageInfo@ExecutionModel@@QEAAJPEBGKPEAX@Z @ 0x18001B948 (-Initialize@ApplicationPackageInfo@ExecutionModel@@QEAAJPEBGKPEAX@Z.c)
 *     ?GetParentsChildrenStrings@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@PEBGPEAPEAGPEAK@Z @ 0x18001C854 (-GetParentsChildrenStrings@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@PEBGPEAPEAGPEAK@Z.c)
 *     ?CreatePolicyStore@ExecutionModel@@YAJPEAPEAUIResourcePolicyStore@1@@Z @ 0x180025954 (-CreatePolicyStore@ExecutionModel@@YAJPEAPEAUIResourcePolicyStore@1@@Z.c)
 *     ?Initialize@ResourcePolicyStore@ExecutionModel@@IEAAJPEBG@Z @ 0x180026E30 (-Initialize@ResourcePolicyStore@ExecutionModel@@IEAAJPEBG@Z.c)
 *     ?EncryptString@Internal@ExecutionModel@@YAJPEBGPEAPEAU_CRYPTOAPI_BLOB@@@Z @ 0x180048F00 (-EncryptString@Internal@ExecutionModel@@YAJPEBGPEAPEAU_CRYPTOAPI_BLOB@@@Z.c)
 *     ?GetProcessArgsByPID@Common@@YAJKPEAGPEAK@Z @ 0x1800497D4 (-GetProcessArgsByPID@Common@@YAJKPEAGPEAK@Z.c)
 *     ?GetProcessArgsByPID@Internal@ExecutionModel@@YAJKPEAPEAG@Z @ 0x1800499A0 (-GetProcessArgsByPID@Internal@ExecutionModel@@YAJKPEAPEAG@Z.c)
 *     ?GetProcessParentDirectoryByPID@Internal@ExecutionModel@@YAJKPEAPEAG@Z @ 0x180049A3C (-GetProcessParentDirectoryByPID@Internal@ExecutionModel@@YAJKPEAPEAG@Z.c)
 *     ?GetProcessWorkingDirectoryByPID@Internal@ExecutionModel@@YAJKPEAPEAG@Z @ 0x180049D8C (-GetProcessWorkingDirectoryByPID@Internal@ExecutionModel@@YAJKPEAPEAG@Z.c)
 *     ?SerializeToPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@0PEBGPEBUGameConfig@2@_N@Z @ 0x18004AB30 (-SerializeToPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@0PEBGPEBUGameConf.c)
 *     ?GrowPolicyBuffer@ResourcePolicyStore@ExecutionModel@@IEAAJXZ @ 0x18004C6A0 (-GrowPolicyBuffer@ResourcePolicyStore@ExecutionModel@@IEAAJXZ.c)
 *     ?Init@AppEnergyInformationForUser@@QEAAJKPEAX@Z @ 0x1800519BC (-Init@AppEnergyInformationForUser@@QEAAJKPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__fastcall operator new[](size_t a1, const struct std::nothrow_t *a2)
{
  return operator new(a1, a2);
}
