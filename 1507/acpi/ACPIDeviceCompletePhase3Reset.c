/*
 * XREFs of ACPIDeviceCompletePhase3Reset @ 0x1C0037B60
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDeviceCompletePhase3Common @ 0x1C00379B0 (ACPIDeviceCompletePhase3Common.c)
 */

void __fastcall ACPIDeviceCompletePhase3Reset(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  KIRQL v5; // al
  signed __int32 v6; // edx
  KIRQL v7; // bl

  v5 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  v6 = *(_DWORD *)(a4 + 68);
  --Phase3PendingOnWorkCount;
  v7 = v5;
  ACPIDeviceCompletePhase3Common((volatile signed __int32 *)(a4 + 64), v6);
  KeReleaseSpinLock(&AcpiPowerLock, v7);
}
