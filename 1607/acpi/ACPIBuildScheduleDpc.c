/*
 * XREFs of ACPIBuildScheduleDpc @ 0x1C0013240
 * Callers:
 *     ACPITableLoad @ 0x1C00064E0 (ACPITableLoad.c)
 *     ACPIBuildRunMethodRequest @ 0x1C00067C0 (ACPIBuildRunMethodRequest.c)
 *     ACPIBuildProcessDelayedDependencyExternalTrigger @ 0x1C000AE60 (ACPIBuildProcessDelayedDependencyExternalTrigger.c)
 *     ACPIBuildSpecialSynchronizationRequest @ 0x1C000C6F0 (ACPIBuildSpecialSynchronizationRequest.c)
 *     ACPIBuildProcessDeviceGenericEval @ 0x1C0010E20 (ACPIBuildProcessDeviceGenericEval.c)
 *     ACPIBuildProcessDevicePhasePrx @ 0x1C0013050 (ACPIBuildProcessDevicePhasePrx.c)
 *     ACPIBuildSynchronizationRequestInternal @ 0x1C0028220 (ACPIBuildSynchronizationRequestInternal.c)
 *     ACPIBuildProcessDelayedDependencyExternalTriggerFilterPowerCheck @ 0x1C0028410 (ACPIBuildProcessDelayedDependencyExternalTriggerFilterPowerCheck.c)
 *     ACPITableUnload @ 0x1C0056C70 (ACPITableUnload.c)
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
