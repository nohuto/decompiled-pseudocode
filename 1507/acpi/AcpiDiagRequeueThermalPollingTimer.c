/*
 * XREFs of AcpiDiagRequeueThermalPollingTimer @ 0x1C0032DCC
 * Callers:
 *     AcpiDiagThermalPollingTimerRoutine @ 0x1C0032E30 (AcpiDiagThermalPollingTimerRoutine.c)
 *     AcpiDiagThermalPollingTraceControlCallback @ 0x1C0032EA0 (AcpiDiagThermalPollingTraceControlCallback.c)
 * Callees:
 *     <none>
 */

void AcpiDiagRequeueThermalPollingTimer()
{
  KIRQL v0; // bl

  v0 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalConstraintLock);
  if ( AcpiDiagThermalPollingInterval )
    KeSetTimer(&AcpiDiagThermalPollingTimer, (LARGE_INTEGER)-AcpiDiagThermalPollingInterval, &AcpiDiagThermalPollingDpc);
  else
    KeCancelTimer(&AcpiDiagThermalPollingTimer);
  KeReleaseSpinLock(&AcpiThermalConstraintLock, v0);
}
