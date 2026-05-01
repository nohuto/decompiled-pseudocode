/*
 * XREFs of RmpActivityHostAddToRemediationGroup @ 0x18003B7A4
 * Callers:
 *     ?RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@K_KKPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@PEAE3@Z @ 0x18003CBCC (-RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@K_KKPEAU_RM_ACTIVITY_H.c)
 *     ?RmpMemoryMonitorGenerateHostListAndRevoke@@YAXPEAU_RM_POLICY@@W4_RM_MEMORY_METRIC@@PEAU_RM_ACTIVITY_HOST_METRICS@@K_KW4_RM_REVOKE_REASON@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x18003D194 (-RmpMemoryMonitorGenerateHostListAndRevoke@@YAXPEAU_RM_POLICY@@W4_RM_MEMORY_METRIC@@PEAU_RM_ACTI.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpActivityHostAddToRemediationGroup(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD *v3; // r8

  *(_QWORD *)(a1 + 864) = a2;
  result = a1 + 872;
  v3 = *(_QWORD **)(a2 + 8);
  *(_QWORD *)(a1 + 872) = a2;
  *(_QWORD *)(a1 + 880) = v3;
  if ( *v3 != a2 )
    __fastfail(3u);
  *v3 = result;
  *(_QWORD *)(a2 + 8) = result;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 16));
  return result;
}
