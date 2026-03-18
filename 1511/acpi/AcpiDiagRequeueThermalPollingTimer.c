/*
 * XREFs of AcpiDiagRequeueThermalPollingTimer @ 0x1C000483C
 * Callers:
 *     AcpiDiagThermalPollingTimerRoutine @ 0x1C0024BD0 (AcpiDiagThermalPollingTimerRoutine.c)
 *     AcpiDiagThermalPollingTraceControlCallback @ 0x1C0033C30 (AcpiDiagThermalPollingTraceControlCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024C50 (__security_check_cookie.c)
 */

void AcpiDiagRequeueThermalPollingTimer()
{
  KIRQL v0; // bl
  _QWORD v1[2]; // [rsp+20h] [rbp-28h] BYREF

  v0 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalConstraintLock);
  if ( AcpiDiagThermalPollingInterval )
  {
    v1[1] = -1LL;
    v1[0] = 0LL;
    ((void (__fastcall *)(void *, __int64, _QWORD, _QWORD *))KeSetTimer2)(
      &AcpiDiagThermalPollingTimer,
      -AcpiDiagThermalPollingInterval,
      0LL,
      v1);
  }
  else
  {
    KeCancelTimer2(&AcpiDiagThermalPollingTimer);
  }
  KeReleaseSpinLock(&AcpiThermalConstraintLock, v0);
}
