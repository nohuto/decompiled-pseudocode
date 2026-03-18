/*
 * XREFs of ACPIDeviceCompleteCommon @ 0x1C001F88C
 * Callers:
 *     ACPIDeviceCompleteGenericPhase @ 0x1C000C790 (ACPIDeviceCompleteGenericPhase.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase6 @ 0x1C001F680 (ACPIDevicePowerProcessPhase5DeviceSubPhase6.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase5 @ 0x1C001F710 (ACPIDevicePowerProcessPhase5DeviceSubPhase5.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase4 @ 0x1C001F790 (ACPIDevicePowerProcessPhase1DeviceSubPhase4.c)
 *     ACPIDevicePowerProcessPhase0DeviceSubPhase2 @ 0x1C001F840 (ACPIDevicePowerProcessPhase0DeviceSubPhase2.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase6 @ 0x1C0039320 (ACPIDevicePowerProcessPhase5SystemSubPhase6.c)
 * Callees:
 *     <none>
 */

void __fastcall ACPIDeviceCompleteCommon(volatile signed __int32 *a1, signed __int32 a2)
{
  KIRQL v2; // bl
  int v3; // edx

  _InterlockedCompareExchange(a1, a2, 1);
  v2 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerQueueLock);
  v3 = AcpiPowerDpcFlags | 2;
  AcpiPowerDpcFlags = v3;
  if ( (v3 & 1) == 0 )
  {
    AcpiPowerDpcFlags = v3 | 1;
    KeInsertQueueDpc(&AcpiPowerDpc, 0LL, 0LL);
  }
  KeReleaseSpinLock(&AcpiPowerQueueLock, v2);
}
