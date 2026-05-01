/*
 * XREFs of RmpPolicyGenerateRevokeListForCommit @ 0x1800416F4
 * Callers:
 *     ?CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJPEAU_RM_POLICY_REQUEST_BUFFER@@KW4Enum@Priority@2@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEAU_RM_RESOURCE_USAGE_LIMITS@@W44PendType@2@PEA_N5PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x180003574 (-CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJPEAU_RM_POLICY_REQUEST_BUFFER@@K.c)
 *     ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@PEBU_ResourceSetInfo@2@KPEBU_ResourceInfo@2@W4Enum@Priority@2@K_NW4_RM_REVOKE_REASON@@W46PendType@2@PEA_NPEAVResourceManager@2@P6AJPEAPEAV12@@ZW4_RM_ACQUIRE_PEND_POLICY@@9@Z @ 0x18000B760 (-AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@PEBU_ResourceSetIn.c)
 *     ?RmpMemoryMonitorGenerateHostListAndRevoke@@YAXPEAU_RM_POLICY@@W4_RM_ACTIVITY_HOST_METRIC@@PEAU_RM_ACTIVITY_HOST_METRICS@@K_KW4_RM_REVOKE_REASON@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x1800427FC (-RmpMemoryMonitorGenerateHostListAndRevoke@@YAXPEAU_RM_POLICY@@W4_RM_ACTIVITY_HOST_METRIC@@PEAU_.c)
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
    0x38uLL,
    (_CoreCrtNonSecureSearchSortCompareFunction)RmpPolicyCompareActivityHostsByPriorityAndCommitQSortThunk);
  for ( i = 0LL; (unsigned int)i < a2; v9 += 7 )
  {
    if ( a3 <= a4 )
      break;
    *(_QWORD *)(a5 + 8 * i) = v9[5];
    i = (unsigned int)(i + 1);
    a4 += *v9;
  }
  *a6 = i;
  return a4 >= a3;
}
