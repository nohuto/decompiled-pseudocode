/*
 * XREFs of ACPIPowerScheduleDpc @ 0x1C000AF24
 * Callers:
 *     ACPIDeviceInternalQueueRequest @ 0x1C000B180 (ACPIDeviceInternalQueueRequest.c)
 *     ACPIBuildDeviceDpc @ 0x1C001B910 (ACPIBuildDeviceDpc.c)
 *     ACPIDeviceCompleteRequest @ 0x1C001C684 (ACPIDeviceCompleteRequest.c)
 *     ACPITableLoadCallBack @ 0x1C0022C00 (ACPITableLoadCallBack.c)
 *     ACPIDeviceCompletePhase3Common @ 0x1C00385A0 (ACPIDeviceCompletePhase3Common.c)
 *     ACPIInitStartACPI @ 0x1C0086FA4 (ACPIInitStartACPI.c)
 * Callees:
 *     <none>
 */

char ACPIPowerScheduleDpc()
{
  int v0; // eax

  v0 = AcpiPowerDpcFlags | 2;
  AcpiPowerDpcFlags = v0;
  if ( (v0 & 1) == 0 )
  {
    AcpiPowerDpcFlags = v0 | 1;
    LOBYTE(v0) = KeInsertQueueDpc(&AcpiPowerDpc, 0LL, 0LL);
  }
  return v0;
}
