/*
 * XREFs of RmpActivityHostAddToRemediationGroup @ 0x180040B7C
 * Callers:
 *     ?RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@K_KKPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@PEAE3@Z @ 0x180041F8C (-RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@K_KKPEAU_RM_ACTIVITY_H.c)
 *     ?RmpMemoryMonitorGenerateHostListAndRevoke@@YAXPEAU_RM_POLICY@@W4_RM_ACTIVITY_HOST_METRIC@@PEAU_RM_ACTIVITY_HOST_METRICS@@K_KW4_RM_REVOKE_REASON@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x1800427FC (-RmpMemoryMonitorGenerateHostListAndRevoke@@YAXPEAU_RM_POLICY@@W4_RM_ACTIVITY_HOST_METRIC@@PEAU_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpActivityHostAddToRemediationGroup(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD *v3; // r8

  *(_QWORD *)(a1 + 896) = a2;
  result = a1 + 904;
  v3 = *(_QWORD **)(a2 + 8);
  *(_QWORD *)(a1 + 904) = a2;
  *(_QWORD *)(a1 + 912) = v3;
  if ( *v3 != a2 )
    __fastfail(3u);
  *v3 = result;
  *(_QWORD *)(a2 + 8) = result;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 16));
  return result;
}
