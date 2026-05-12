/*
 * XREFs of _TlgCreateWsz @ 0x1C0019BC0
 * Callers:
 *     RaidAdapterCompleteInitialization @ 0x1C0015260 (RaidAdapterCompleteInitialization.c)
 *     StorpLogPhysicalTopologyInfo @ 0x1C003D238 (StorpLogPhysicalTopologyInfo.c)
 *     StorpTelemetryLogUnitDeviceStatisticsCriticalData @ 0x1C003DBA4 (StorpTelemetryLogUnitDeviceStatisticsCriticalData.c)
 *     StorpTelemetryLogUnitDeviceStatisticsMeasures @ 0x1C003E0D8 (StorpTelemetryLogUnitDeviceStatisticsMeasures.c)
 *     StorpTelemetryLogUnitErrorDataCriticalData @ 0x1C003E604 (StorpTelemetryLogUnitErrorDataCriticalData.c)
 *     StorpTelemetryLogUnitErrorDataMeasures @ 0x1C003E888 (StorpTelemetryLogUnitErrorDataMeasures.c)
 *     StorpTelemetryLogUnitPerfDataCriticalData @ 0x1C003EB10 (StorpTelemetryLogUnitPerfDataCriticalData.c)
 *     StorpTelemetryLogUnitPerfDataMeasures @ 0x1C003EEA0 (StorpTelemetryLogUnitPerfDataMeasures.c)
 *     StorpTelemetryLogUnitQosDataMeasures @ 0x1C003F228 (StorpTelemetryLogUnitQosDataMeasures.c)
 *     StorpTelemetryLogUnitSmartAttributesCriticalData @ 0x1C003F548 (StorpTelemetryLogUnitSmartAttributesCriticalData.c)
 *     StorpTelemetryLogUnitSmartAttributesMeasures @ 0x1C003F948 (StorpTelemetryLogUnitSmartAttributesMeasures.c)
 *     StorpTelemetrySendUnitNvmeHealthInfo @ 0x1C00408B4 (StorpTelemetrySendUnitNvmeHealthInfo.c)
 * Callees:
 *     <none>
 */

void __stdcall TlgCreateWsz(PEVENT_DATA_DESCRIPTOR pDesc, LPCWSTR pwsz)
{
  LPCWSTR v2; // r8
  __int64 v3; // rax

  v2 = (LPCWSTR)qword_1C001AEE0;
  LODWORD(v3) = 0;
  if ( pwsz )
  {
    v2 = pwsz;
    v3 = -1LL;
    do
      ++v3;
    while ( pwsz[v3] );
  }
  pDesc->Ptr = (unsigned __int64)v2;
  *(_QWORD *)&pDesc->Size = (unsigned int)(2 * v3 + 2);
}
