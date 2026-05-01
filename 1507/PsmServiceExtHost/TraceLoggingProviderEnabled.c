/*
 * XREFs of TraceLoggingProviderEnabled @ 0x180001D28
 * Callers:
 *     ?LogPendingEnd@ResourceSet@ExecutionModel@@MEAAXXZ @ 0x180001910 (-LogPendingEnd@ResourceSet@ExecutionModel@@MEAAXXZ.c)
 *     ?LogPendingBegin@ResourceSet@ExecutionModel@@QEAAXXZ @ 0x180001A2C (-LogPendingBegin@ResourceSet@ExecutionModel@@QEAAXXZ.c)
 *     ?RmpMemoryMonitorCheckMetricsAndRemediate@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180002F60 (-RmpMemoryMonitorCheckMetricsAndRemediate@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_SERVICE_GLOBALS.c)
 *     ?CheckPoolResources@BaseResourceSet@ExecutionModel@@AEAAJKPEBU_ResourceInfo@2@K_NPEA_N2PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x18002E4FC (-CheckPoolResources@BaseResourceSet@ExecutionModel@@AEAAJKPEBU_ResourceInfo@2@K_NPEA_N2PEAV-$lis.c)
 *     RmgrSrv_RmTestGetApplicationProperties @ 0x180030580 (RmgrSrv_RmTestGetApplicationProperties.c)
 *     RmpActivityHostRevokeAllResourceSets @ 0x18003BED8 (RmpActivityHostRevokeAllResourceSets.c)
 *     ?RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18003C5D8 (-RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpMemoryMonitorRebootIfAble@@YAXPEAU_RM_POLICY@@@Z @ 0x18003D328 (-RmpMemoryMonitorRebootIfAble@@YAXPEAU_RM_POLICY@@@Z.c)
 *     ?LogRevocationBegin@ResourceSet@ExecutionModel@@AEAAXXZ @ 0x1800405AC (-LogRevocationBegin@ResourceSet@ExecutionModel@@AEAAXXZ.c)
 *     ?LogRevocationEnd@ResourceSet@ExecutionModel@@AEAAXXZ @ 0x1800406AC (-LogRevocationEnd@ResourceSet@ExecutionModel@@AEAAXXZ.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1800073AC (_TlgKeywordOn.c)
 */

BOOLEAN __stdcall TraceLoggingProviderEnabled(
        TraceLoggingHProvider hProvider,
        UCHAR eventLevel,
        ULONGLONG eventKeyword)
{
  BOOLEAN v3; // cl

  v3 = 0;
  if ( dword_1800690A0 )
    return TlgKeywordOn(0LL, eventKeyword) != 0;
  return v3;
}
