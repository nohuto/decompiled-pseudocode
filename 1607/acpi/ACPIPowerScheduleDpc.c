/*
 * XREFs of ACPIPowerScheduleDpc @ 0x1C0010384
 * Callers:
 *     ACPIDeviceInternalQueueRequest @ 0x1C000EA04 (ACPIDeviceInternalQueueRequest.c)
 *     ACPIDeviceCompletePhase3Common @ 0x1C001034C (ACPIDeviceCompletePhase3Common.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase4 @ 0x1C00103C0 (ACPIDevicePowerProcessPhase1DeviceSubPhase4.c)
 *     ACPIDeviceCompleteRequest @ 0x1C00109E0 (ACPIDeviceCompleteRequest.c)
 *     ACPIBuildDeviceDpc @ 0x1C0011D70 (ACPIBuildDeviceDpc.c)
 *     ACPITableLoadCallBack @ 0x1C0029CB0 (ACPITableLoadCallBack.c)
 *     ACPIInitStartACPI @ 0x1C00A9A78 (ACPIInitStartACPI.c)
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
