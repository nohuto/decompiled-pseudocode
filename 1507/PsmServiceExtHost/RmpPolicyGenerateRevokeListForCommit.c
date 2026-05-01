/*
 * XREFs of RmpPolicyGenerateRevokeListForCommit @ 0x18003C2BC
 * Callers:
 *     ?RmpPolicyGenerateRevokeListForQueryableResources@@YAJPEAU_RM_POLICY_REQUEST_BUFFER@@PEAU_RM_RESOURCE_USAGE_LIMITS@@W4Enum@Priority@ExecutionModel@@W4_RM_PEND_TYPE@@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEAPEAU_RM_ACTIVITY_HOST@@PEAK@Z @ 0x18000CF94 (-RmpPolicyGenerateRevokeListForQueryableResources@@YAJPEAU_RM_POLICY_REQUEST_BUFFER@@PEAU_RM_RES.c)
 *     ?RmpMemoryMonitorGenerateHostListAndRevoke@@YAXPEAU_RM_POLICY@@W4_RM_MEMORY_METRIC@@PEAU_RM_ACTIVITY_HOST_METRICS@@K_KW4_RM_REVOKE_REASON@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x18003D194 (-RmpMemoryMonitorGenerateHostListAndRevoke@@YAXPEAU_RM_POLICY@@W4_RM_MEMORY_METRIC@@PEAU_RM_ACTI.c)
 * Callees:
 *     <none>
 */

bool __fastcall RmpPolicyGenerateRevokeListForCommit(
        _QWORD *a1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        _DWORD *a6)
{
  _QWORD *v9; // rdi
  __int64 i; // r10

  v9 = a1;
  qsort(
    a1,
    a2,
    0x30uLL,
    (_CoreCrtNonSecureSearchSortCompareFunction)RmpPolicyCompareActivityHostsByPriorityAndCommitQSortThunk);
  for ( i = 0LL; (unsigned int)i < a2; v9 += 6 )
  {
    if ( a3 <= a4 )
      break;
    *(_QWORD *)(a5 + 8 * i) = v9[4];
    i = (unsigned int)(i + 1);
    a4 += *v9;
  }
  *a6 = i;
  return a4 >= a3;
}
