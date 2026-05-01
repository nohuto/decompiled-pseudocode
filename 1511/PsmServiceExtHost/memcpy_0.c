/*
 * XREFs of memcpy_0 @ 0x18002BC72
 * Callers:
 *     ?_GrowTo@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAA_N_K@Z @ 0x180002744 (-_GrowTo@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@AEAA_N_K@Z.c)
 *     ?OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEBGPEAT_RM_SID@@KK_K@Z @ 0x18000FDA0 (-OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEBGPEAT_RM_SID@@KK_K@Z.c)
 *     ?AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEBGPEAT_RM_SID@@KK_KKPEA_NPEAUIResourceSet@2@PEAPEAU62@@Z @ 0x180011420 (-AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU.c)
 *     ?AcquireResourceSet@ResourceManager@ExecutionModel@@UEAAJPEAU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEBG2KK_KPEA_NPEAUIResourceSet@2@PEAPEAU52@@Z @ 0x180012380 (-AcquireResourceSet@ResourceManager@ExecutionModel@@UEAAJPEAU_ResourceSetInfo@2@PEAUIResourceSet.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG_K@Z @ 0x1800126D0 (-assign@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG_K@Z.c)
 *     ?CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResourceSet@2@AEBU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEAU_RM_ACTIVITY_HOST@@PEBGPEAT_RM_SID@@KK_KW4_RM_REVOKE_REASON@@W4Enum@PendType@2@PEA_NPEAPEAUIResourceSet@2@@Z @ 0x180015790 (-CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResourceSet@2@AEBU_.c)
 *     ?ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x1800165C0 (-ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PS.c)
 *     PsmHostStateNotification2 @ 0x1800184F0 (PsmHostStateNotification2.c)
 *     PsmRetrieveHostMemoryLimit @ 0x180018AF0 (PsmRetrieveHostMemoryLimit.c)
 *     QueryTransientObjectSecurityDescriptor @ 0x18001E8A0 (QueryTransientObjectSecurityDescriptor.c)
 *     ?GetPackageRelativeApplicationId@SysAppId@ProcessToken@ARI@@YAJPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@IPEAIPEAG@Z @ 0x18001FE50 (-GetPackageRelativeApplicationId@SysAppId@ProcessToken@ARI@@YAJPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@.c)
 *     ?GetPackageFamilyName@SysAppId@ProcessToken@ARI@@YAJPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@IPEAIPEAG@Z @ 0x18001FEA4 (-GetPackageFamilyName@SysAppId@ProcessToken@ARI@@YAJPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@IPEAIPEAG@.c)
 *     RmpRmSidInitialize @ 0x18002015C (RmpRmSidInitialize.c)
 *     ?CopyWString@Internal@ExecutionModel@@YAJPEBGPEAPEAG@Z @ 0x180025A70 (-CopyWString@Internal@ExecutionModel@@YAJPEBGPEAPEAG@Z.c)
 *     _lambda_50a6150c629f36decbcd8feeef80d8a2_::operator() @ 0x180027910 (_lambda_50a6150c629f36decbcd8feeef80d8a2_--operator().c)
 *     ?SetValue@StringBuffer@Common@@QEAAJPEBGK@Z @ 0x180027FDC (-SetValue@StringBuffer@Common@@QEAAJPEBGK@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG_K@Z @ 0x18003EAD0 (-append@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG_K@Z.c)
 *     ?GetGameProperty@GameConfigStoreServer@ExecutionModel@@UEBAJU_GUID@@W4GameProperty_t@2@PEAEPEAI@Z @ 0x180049430 (-GetGameProperty@GameConfigStoreServer@ExecutionModel@@UEBAJU_GUID@@W4GameProperty_t@2@PEAEPEAI@.c)
 *     ?StoreBytes@CGameConfigAccumulator@Internal@ExecutionModel@@QEAAPEAEPEAEI@Z @ 0x18004B21C (-StoreBytes@CGameConfigAccumulator@Internal@ExecutionModel@@QEAAPEAEPEAEI@Z.c)
 *     ?GrowPolicyBuffer@ResourcePolicyStore@ExecutionModel@@IEAAJXZ @ 0x18004C6A0 (-GrowPolicyBuffer@ResourcePolicyStore@ExecutionModel@@IEAAJXZ.c)
 *     ??$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z @ 0x18004F378 (--$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z.c)
 *     ??$WriteResultString@PEBG@details@wil@@YAPEAEPEAE0PEBGPEAPEBG@Z @ 0x18004F408 (--$WriteResultString@PEBG@details@wil@@YAPEAEPEAE0PEBGPEAPEBG@Z.c)
 *     ?GetThreadContext@ThreadFailureCallbackHolder@details@wil@@SA_NPEAUFailureInfo@3@PEAV123@PEAD_K@Z @ 0x180050E94 (-GetThreadContext@ThreadFailureCallbackHolder@details@wil@@SA_NPEAUFailureInfo@3@PEAV123@PEAD_K@.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memcpy_0(void *a1, const void *Src, size_t Size)
{
  return memcpy(a1, Src, Size);
}
