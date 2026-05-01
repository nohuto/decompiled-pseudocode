/*
 * XREFs of RmpEnforcementArmWorkerForActivityHost @ 0x1800050C8
 * Callers:
 *     ?ReleaseResources@ResourceSet@ExecutionModel@@UEAAJXZ @ 0x180010690 (-ReleaseResources@ResourceSet@ExecutionModel@@UEAAJXZ.c)
 *     ?HostStateNotification@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x1800115F0 (-HostStateNotification@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_I.c)
 *     RmpActivityHostCheckQueueWork @ 0x18003B7DC (RmpActivityHostCheckQueueWork.c)
 *     ?RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@K_KKPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@PEAE3@Z @ 0x18003CBCC (-RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@K_KKPEAU_RM_ACTIVITY_H.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpEnforcementArmWorkerForActivityHost(__int64 a1)
{
  int v1; // eax

  if ( (*(_BYTE *)(a1 + 768) & 1) == 0 )
  {
    v1 = *(_DWORD *)(a1 + 768);
    if ( (v1 & 2) == 0 )
    {
      *(_DWORD *)(a1 + 768) = v1 | 2;
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 16));
      TpPostWork(*(_QWORD *)(a1 + 744));
    }
  }
}
