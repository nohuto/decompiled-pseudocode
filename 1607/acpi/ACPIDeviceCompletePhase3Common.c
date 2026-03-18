/*
 * XREFs of ACPIDeviceCompletePhase3Common @ 0x1C001034C
 * Callers:
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase6 @ 0x1C000F700 (ACPIDevicePowerProcessPhase5DeviceSubPhase6.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase5 @ 0x1C000F950 (ACPIDevicePowerProcessPhase5DeviceSubPhase5.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C0012530 (ACPIDeviceCompleteGenericPhase.c)
 *     ACPIDeviceCompletePhase3Off @ 0x1C0049240 (ACPIDeviceCompletePhase3Off.c)
 *     ACPIDeviceCompletePhase3On @ 0x1C0049350 (ACPIDeviceCompletePhase3On.c)
 *     ACPIDeviceCompletePhase3Reset @ 0x1C0049410 (ACPIDeviceCompletePhase3Reset.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase6 @ 0x1C004A810 (ACPIDevicePowerProcessPhase5SystemSubPhase6.c)
 * Callees:
 *     ACPIPowerScheduleDpc @ 0x1C0010384 (ACPIPowerScheduleDpc.c)
 */

void __fastcall ACPIDeviceCompletePhase3Common(volatile signed __int32 *a1, signed __int32 a2)
{
  KIRQL v2; // bl

  _InterlockedCompareExchange(a1, a2, 1);
  v2 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerQueueLock);
  ACPIPowerScheduleDpc();
  KeReleaseSpinLock(&AcpiPowerQueueLock, v2);
}
