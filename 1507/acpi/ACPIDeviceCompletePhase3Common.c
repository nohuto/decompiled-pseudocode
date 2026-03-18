/*
 * XREFs of ACPIDeviceCompletePhase3Common @ 0x1C00379B0
 * Callers:
 *     ACPIDeviceCompletePhase3Off @ 0x1C00379F0 (ACPIDeviceCompletePhase3Off.c)
 *     ACPIDeviceCompletePhase3On @ 0x1C0037AD0 (ACPIDeviceCompletePhase3On.c)
 *     ACPIDeviceCompletePhase3Reset @ 0x1C0037B60 (ACPIDeviceCompletePhase3Reset.c)
 * Callees:
 *     ACPIPowerScheduleDpc @ 0x1C000AE54 (ACPIPowerScheduleDpc.c)
 */

void __fastcall ACPIDeviceCompletePhase3Common(volatile signed __int32 *a1, signed __int32 a2)
{
  KIRQL v2; // bl

  _InterlockedCompareExchange(a1, a2, 1);
  v2 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerQueueLock);
  ACPIPowerScheduleDpc();
  KeReleaseSpinLock(&AcpiPowerQueueLock, v2);
}
