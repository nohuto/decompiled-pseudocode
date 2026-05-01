/*
 * XREFs of RmpActivityHostAddToRemediationGroup @ 0x18002EC24
 * Callers:
 *     ?RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_ACTIVITY_HOST_METRICS@@K_KKPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@PEAE4@Z @ 0x180032AA8 (-RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_ACTIVITY_HOST_METRIC.c)
 *     RmpPolicyReclaimHostList @ 0x180034270 (RmpPolicyReclaimHostList.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpActivityHostAddToRemediationGroup(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  _QWORD *v3; // r8

  *(_QWORD *)(a1 + 1048) = a2;
  v2 = (_QWORD *)(a1 + 1056);
  v3 = *(_QWORD **)(a2 + 8);
  if ( *v3 != a2 )
    __fastfail(3u);
  *v2 = a2;
  *(_QWORD *)(a1 + 1064) = v3;
  *v3 = v2;
  *(_QWORD *)(a2 + 8) = v2;
  RmpObjectAddRef(a1);
}
