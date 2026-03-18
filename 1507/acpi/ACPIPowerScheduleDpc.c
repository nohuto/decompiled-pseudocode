/*
 * XREFs of ACPIPowerScheduleDpc @ 0x1C000AE54
 * Callers:
 *     ACPIDeviceInternalQueueRequest @ 0x1C000B0B0 (ACPIDeviceInternalQueueRequest.c)
 *     ACPIBuildDeviceDpc @ 0x1C001B6A0 (ACPIBuildDeviceDpc.c)
 *     ACPIDeviceCompleteRequest @ 0x1C001C43C (ACPIDeviceCompleteRequest.c)
 *     ACPITableLoadCallBack @ 0x1C0022480 (ACPITableLoadCallBack.c)
 *     ACPIDeviceCompletePhase3Common @ 0x1C00379B0 (ACPIDeviceCompletePhase3Common.c)
 *     ACPIInitStartACPI @ 0x1C0086F88 (ACPIInitStartACPI.c)
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
