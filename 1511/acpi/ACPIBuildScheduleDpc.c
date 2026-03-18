/*
 * XREFs of ACPIBuildScheduleDpc @ 0x1C000DBD0
 * Callers:
 *     ACPITableLoad @ 0x1C0006C60 (ACPITableLoad.c)
 *     ACPIBuildRunMethodRequest @ 0x1C0006E60 (ACPIBuildRunMethodRequest.c)
 *     ACPIBuildProcessDelayedDependencyExternalTrigger @ 0x1C0007828 (ACPIBuildProcessDelayedDependencyExternalTrigger.c)
 *     ACPIBuildSpecialSynchronizationRequest @ 0x1C000A528 (ACPIBuildSpecialSynchronizationRequest.c)
 *     ACPIBuildProcessDeviceGenericEval @ 0x1C000D870 (ACPIBuildProcessDeviceGenericEval.c)
 *     ACPIBuildSynchronizationRequestInternal @ 0x1C0021214 (ACPIBuildSynchronizationRequestInternal.c)
 *     ACPIBuildProcessDelayedDependencyExternalTriggerFilterPowerCheck @ 0x1C0021674 (ACPIBuildProcessDelayedDependencyExternalTriggerFilterPowerCheck.c)
 *     ACPITableUnload @ 0x1C0040720 (ACPITableUnload.c)
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
