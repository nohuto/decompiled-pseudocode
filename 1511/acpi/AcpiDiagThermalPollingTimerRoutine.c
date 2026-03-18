/*
 * XREFs of AcpiDiagThermalPollingTimerRoutine @ 0x1C0024BD0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIThermalLoopEx @ 0x1C001A03C (ACPIThermalLoopEx.c)
 */

void AcpiDiagThermalPollingTimerRoutine()
{
  KIRQL v0; // al
  __int64 *v1; // rbx
  KIRQL v2; // di

  v0 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalConstraintLock);
  v1 = (__int64 *)AcpiThermalZoneList;
  v2 = v0;
  while ( v1 != &AcpiThermalZoneList )
  {
    ACPIThermalLoopEx((__int64)(v1 - 25), 536870914, 0);
    v1 = (__int64 *)*v1;
  }
  KeReleaseSpinLock(&AcpiThermalConstraintLock, v2);
  AcpiDiagRequeueThermalPollingTimer();
}
