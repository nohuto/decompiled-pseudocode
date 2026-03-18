/*
 * XREFs of ACPIBuildScheduleDpc @ 0x1C000D64C
 * Callers:
 *     ACPITableLoad @ 0x1C0006510 (ACPITableLoad.c)
 *     ACPIBuildRunMethodRequest @ 0x1C0006710 (ACPIBuildRunMethodRequest.c)
 *     ACPIBuildProcessDeviceGenericEval @ 0x1C000D190 (ACPIBuildProcessDeviceGenericEval.c)
 *     ACPIBuildProcessDevicePhasePrx @ 0x1C000D4F0 (ACPIBuildProcessDevicePhasePrx.c)
 *     ACPIBuildSpecialSynchronizationRequest @ 0x1C0018584 (ACPIBuildSpecialSynchronizationRequest.c)
 *     ACPIBuildProcessDelayedDependencyExternalTrigger @ 0x1C001ABBC (ACPIBuildProcessDelayedDependencyExternalTrigger.c)
 *     ACPIBuildSynchronizationRequestInternal @ 0x1C0020B1C (ACPIBuildSynchronizationRequestInternal.c)
 *     ACPIBuildProcessDelayedDependencyExternalTriggerFilterPowerCheck @ 0x1C0020D6C (ACPIBuildProcessDelayedDependencyExternalTriggerFilterPowerCheck.c)
 *     ACPITableUnload @ 0x1C0040C70 (ACPITableUnload.c)
 * Callees:
 *     <none>
 */

char ACPIBuildScheduleDpc()
{
  int v0; // eax

  v0 = AcpiBuildDpcFlags | 2;
  AcpiBuildDpcFlags = v0;
  if ( (v0 & 1) == 0 )
  {
    AcpiBuildDpcFlags = v0 | 1;
    LOBYTE(v0) = KeInsertQueueDpc(&AcpiBuildDpc, 0LL, 0LL);
  }
  return v0;
}
