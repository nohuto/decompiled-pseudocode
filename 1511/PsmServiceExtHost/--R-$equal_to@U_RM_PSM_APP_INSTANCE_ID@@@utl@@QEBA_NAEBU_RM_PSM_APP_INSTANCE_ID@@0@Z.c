/*
 * XREFs of ??R?$equal_to@U_RM_PSM_APP_INSTANCE_ID@@@utl@@QEBA_NAEBU_RM_PSM_APP_INSTANCE_ID@@0@Z @ 0x18001EDB4
 * Callers:
 *     ?_FindKey@?$_HashTable@U_RM_PSM_APP_INSTANCE_ID@@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@U?$hash@U_RM_PSM_APP_INSTANCE_ID@@@3@U?$equal_to@U_RM_PSM_APP_INSTANCE_ID@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@@3@$0A@@utl@@AEAA_NV?$_DlistConstIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@@utl@@@2@AEBU_RM_PSM_APP_INSTANCE_ID@@_KPEAPEAU?$_HashNode@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@@2@@Z @ 0x18001AEA0 (-_FindKey@-$_HashTable@U_RM_PSM_APP_INSTANCE_ID@@U-$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcer.c)
 *     ??$_EqualRangeImpl@U_RM_PSM_APP_INSTANCE_ID@@@?$_HashTable@U_RM_PSM_APP_INSTANCE_ID@@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@U?$hash@U_RM_PSM_APP_INSTANCE_ID@@@3@U?$equal_to@U_RM_PSM_APP_INSTANCE_ID@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@3@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEBU_RM_PSM_APP_INSTANCE_ID@@AEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@utl@@@1@2AEA_K@Z @ 0x18001DED0 (--$_EqualRangeImpl@U_RM_PSM_APP_INSTANCE_ID@@@-$_HashTable@U_RM_PSM_APP_INSTANCE_ID_ea_18001DED0.c)
 *     ?_FindKey@?$_HashTable@U_RM_PSM_APP_INSTANCE_ID@@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@U?$hash@U_RM_PSM_APP_INSTANCE_ID@@@3@U?$equal_to@U_RM_PSM_APP_INSTANCE_ID@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@3@$0A@@utl@@AEAA_NV?$_DlistConstIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@utl@@@2@AEBU_RM_PSM_APP_INSTANCE_ID@@_KPEAPEAU?$_HashNode@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@2@@Z @ 0x18001E080 (-_FindKey@-$_HashTable@U_RM_PSM_APP_INSTANCE_ID@@U-$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@UCommitMe.c)
 * Callees:
 *     memcmp_0 @ 0x18002BC66 (memcmp_0.c)
 */

bool __fastcall utl::equal_to<_RM_PSM_APP_INSTANCE_ID>::operator()(__int64 a1, const wchar_t *a2, const wchar_t *a3)
{
  return !_wcsicmp(a2, a3) && memcmp_0(a2 + 232, a3 + 232, 0x58uLL) == 0;
}
