/*
 * XREFs of TraceLoggingProviderEnabled @ 0x180004330
 * Callers:
 *     ?LogPendingEnd@ResourceSet@ExecutionModel@@MEAAXXZ @ 0x180003D00 (-LogPendingEnd@ResourceSet@ExecutionModel@@MEAAXXZ.c)
 *     ?LogPendingBegin@ResourceSet@ExecutionModel@@QEAAXXZ @ 0x180003E1C (-LogPendingBegin@ResourceSet@ExecutionModel@@QEAAXXZ.c)
 *     RmpMemoryMonitorCheckMetricsAndRemediateSingleStep @ 0x18000A190 (RmpMemoryMonitorCheckMetricsAndRemediateSingleStep.c)
 *     RmgrSrv_RmTestGetApplicationProperties @ 0x180037730 (RmgrSrv_RmTestGetApplicationProperties.c)
 *     RmpActivityHostRevokeAllResourceSets @ 0x18004124C (RmpActivityHostRevokeAllResourceSets.c)
 *     ?RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x1800417F8 (-RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_RESOURCE_U.c)
 *     ?RmpMemoryMonitorRebootIfAble@@YAXPEAU_RM_POLICY@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180042980 (-RmpMemoryMonitorRebootIfAble@@YAXPEAU_RM_POLICY@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_.c)
 *     ?LogRevocationBegin@ResourceSet@ExecutionModel@@AEAAXXZ @ 0x18004557C (-LogRevocationBegin@ResourceSet@ExecutionModel@@AEAAXXZ.c)
 *     ?LogRevocationEnd@ResourceSet@ExecutionModel@@AEAAXXZ @ 0x18004567C (-LogRevocationEnd@ResourceSet@ExecutionModel@@AEAAXXZ.c)
 * Callees:
 *     _TlgKeywordOn @ 0x18001CED4 (_TlgKeywordOn.c)
 */

BOOLEAN __stdcall TraceLoggingProviderEnabled(
        TraceLoggingHProvider hProvider,
        UCHAR eventLevel,
        ULONGLONG eventKeyword)
{
  BOOLEAN v3; // cl

  v3 = 0;
  if ( dword_180071060 )
    return TlgKeywordOn(0LL, eventKeyword) != 0;
  return v3;
}
