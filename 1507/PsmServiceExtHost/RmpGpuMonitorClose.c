/*
 * XREFs of RmpGpuMonitorClose @ 0x180041B38
 * Callers:
 *     RmpEnforcerContextInitialize @ 0x180019ED8 (RmpEnforcerContextInitialize.c)
 *     RmpUninitializeGlobalModules @ 0x18003996C (RmpUninitializeGlobalModules.c)
 * Callees:
 *     ?RmpGpuMonitorDisable@@YAXPEAU_RM_GPU_MONITOR@@@Z @ 0x180041718 (-RmpGpuMonitorDisable@@YAXPEAU_RM_GPU_MONITOR@@@Z.c)
 */

void __fastcall RmpGpuMonitorClose(struct _RM_GPU_MONITOR *a1)
{
  RtlEnterCriticalSection(&RmpGlobalLock);
  if ( (*((_BYTE *)a1 + 52) & 1) != 0 )
    RmpGpuMonitorDisable(a1);
  RtlLeaveCriticalSection(&RmpGlobalLock);
  if ( *(_QWORD *)a1 )
  {
    CloseThreadpoolCleanupGroupMembers(*(PTP_CLEANUP_GROUP *)a1, 1, 0LL);
    CloseThreadpoolCleanupGroup(*(PTP_CLEANUP_GROUP *)a1);
  }
}
