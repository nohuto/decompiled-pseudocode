/*
 * XREFs of memcmp_0 @ 0x18002BC66
 * Callers:
 *     ?RmpPsmAppFamilyCompareForHashTable@@YAKPEAU_RTL_HASH_ENTRY@@PEAX@Z @ 0x180008A8C (-RmpPsmAppFamilyCompareForHashTable@@YAKPEAU_RTL_HASH_ENTRY@@PEAX@Z.c)
 *     ?AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEBGPEAT_RM_SID@@KK_KKPEA_NPEAUIResourceSet@2@PEAPEAU62@@Z @ 0x180011420 (-AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU.c)
 *     ?HandleAcquireReleaseGroupSchedulingOwnership@ModernResourceEnforcer@@IEAAXPEBGPEAT_RM_SID@@KK_KPEAX_N@Z @ 0x180016B70 (-HandleAcquireReleaseGroupSchedulingOwnership@ModernResourceEnforcer@@IEAAXPEBGPEAT_RM_SID@@KK_K.c)
 *     ?SetApplicationProperties@ModernResourceEnforcer@@UEAAJPEAU_RM_ACTIVITY_HOST@@PEAKPEA_K22PEAW4_PSM_APPLICATION_PRIORITY@@2@Z @ 0x180017AD0 (-SetApplicationProperties@ModernResourceEnforcer@@UEAAJPEAU_RM_ACTIVITY_HOST@@PEAKPEA_K22PEAW4_P.c)
 *     PsmRetrieveHostMemoryLimit @ 0x180018AF0 (PsmRetrieveHostMemoryLimit.c)
 *     ??$_EqualRangeImpl@U_RM_PSM_APP_INSTANCE_ID@@@?$_HashTable@U_RM_PSM_APP_INSTANCE_ID@@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@U?$hash@U_RM_PSM_APP_INSTANCE_ID@@@3@U?$equal_to@U_RM_PSM_APP_INSTANCE_ID@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@@3@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEBU_RM_PSM_APP_INSTANCE_ID@@AEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@@utl@@@1@2AEA_K@Z @ 0x18001ACD0 (--$_EqualRangeImpl@U_RM_PSM_APP_INSTANCE_ID@@@-$_HashTable@U_RM_PSM_APP_INSTANCE_ID@@U-$pair@$$C.c)
 *     ??R?$equal_to@U_RM_PSM_APP_INSTANCE_ID@@@utl@@QEBA_NAEBU_RM_PSM_APP_INSTANCE_ID@@0@Z @ 0x18001EDB4 (--R-$equal_to@U_RM_PSM_APP_INSTANCE_ID@@@utl@@QEBA_NAEBU_RM_PSM_APP_INSTANCE_ID@@0@Z.c)
 *     ?RmpActivityHostFindByTypeAndIdentifier@@YAJW4_RM_ACTIVITY_HOST_TYPE@@PEAT_RM_ACTIVITY_HOST_IDENTIFIER@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001F5B0 (-RmpActivityHostFindByTypeAndIdentifier@@YAJW4_RM_ACTIVITY_HOST_TYPE@@PEAT_RM_ACTIVITY_HOST_IDEN.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl memcmp_0(const void *Buf1, const void *Buf2, size_t Size)
{
  return memcmp(Buf1, Buf2, Size);
}
