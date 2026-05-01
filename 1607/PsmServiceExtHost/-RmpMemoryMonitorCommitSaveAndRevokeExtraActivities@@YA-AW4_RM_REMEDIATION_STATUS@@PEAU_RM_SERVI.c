/*
 * XREFs of ?RmpMemoryMonitorCommitSaveAndRevokeExtraActivities@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_SERVICE_GLOBALS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1@Z @ 0x1800327B0
 * Callers:
 *     RmpMemoryMonitorCheckMetricsAndRemediateSingleStep @ 0x180008710 (RmpMemoryMonitorCheckMetricsAndRemediateSingleStep.c)
 * Callees:
 *     ?RmpMemoryMonitorCheckQueueDecommitRepurposedMemory@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18003270C (-RmpMemoryMonitorCheckQueueDecommitRepurposedMemory@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpMemoryMonitorEmptyWorkingSets@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_SERVICE_GLOBALS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1K@Z @ 0x180033070 (-RmpMemoryMonitorEmptyWorkingSets@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_SERVICE_GLOBALS@@PEAU_R.c)
 *     ?RmpMemoryMonitorRevokeExtraActivities@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_SERVICE_GLOBALS@@_K@Z @ 0x1800339C4 (-RmpMemoryMonitorRevokeExtraActivities@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_SERVICE_GLOBALS@@_.c)
 */

__int64 __fastcall RmpMemoryMonitorCommitSaveAndRevokeExtraActivities(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  RmpMemoryMonitorCheckQueueDecommitRepurposedMemory((struct _RM_SERVICE_GLOBALS *)a1);
  if ( (*(_BYTE *)(a1 + 1840) & 8) == 0 )
    return RmpMemoryMonitorRevokeExtraActivities(a1, *(_QWORD *)(a3 + 24));
  result = RmpMemoryMonitorEmptyWorkingSets(a1, a2, a3, 31LL);
  if ( (_DWORD)result == 2 )
    return RmpMemoryMonitorRevokeExtraActivities(a1, *(_QWORD *)(a3 + 24));
  return result;
}
