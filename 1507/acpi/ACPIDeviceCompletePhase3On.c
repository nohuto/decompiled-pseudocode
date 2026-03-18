/*
 * XREFs of ACPIDeviceCompletePhase3On @ 0x1C0037AD0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDeviceCompletePhase3Common @ 0x1C00379B0 (ACPIDeviceCompletePhase3Common.c)
 */

void __fastcall ACPIDeviceCompletePhase3On(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  KIRQL v6; // si
  signed __int32 v7; // edx

  v6 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  _InterlockedAnd64((volatile signed __int64 *)(a4 + 16), 0xFFFFFFFFFFFFF7FFuLL);
  if ( a2 < 0 )
  {
    _InterlockedOr64((volatile signed __int64 *)(a4 + 16), 0x10000uLL);
  }
  else
  {
    _InterlockedOr64((volatile signed __int64 *)(a4 + 16), 0x10uLL);
    _InterlockedAnd64((volatile signed __int64 *)(a4 + 16), 0xFFFFFFFFFFFEFFFFuLL);
  }
  _InterlockedAnd64((volatile signed __int64 *)(a4 + 16), 0xFFFFFFFFFFFFFFF7uLL);
  v7 = *(_DWORD *)(a4 + 68);
  --Phase3PendingOnWorkCount;
  ACPIDeviceCompletePhase3Common((volatile signed __int32 *)(a4 + 64), v7);
  KeReleaseSpinLock(&AcpiPowerLock, v6);
}
