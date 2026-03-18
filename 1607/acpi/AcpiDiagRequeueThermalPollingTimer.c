/*
 * XREFs of AcpiDiagRequeueThermalPollingTimer @ 0x1C0004014
 * Callers:
 *     AcpiDiagThermalPollingTimerRoutine @ 0x1C002BBB0 (AcpiDiagThermalPollingTimerRoutine.c)
 *     AcpiDiagThermalPollingTraceControlCallback @ 0x1C0041F80 (AcpiDiagThermalPollingTraceControlCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x1C002BC20 (__security_check_cookie.c)
 */

void AcpiDiagRequeueThermalPollingTimer()
{
  KIRQL v0; // bl
  _QWORD v1[2]; // [rsp+20h] [rbp-28h] BYREF

  v0 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalConstraintLock);
  if ( WPP_MAIN_CB.Reserved )
  {
    v1[1] = -1LL;
    v1[0] = 0LL;
    ((void (__fastcall *)(void *, __int64, _QWORD, _QWORD *))KeSetTimer2)(
      &AcpiDiagThermalPollingTimer,
      -(__int64)WPP_MAIN_CB.Reserved,
      0LL,
      v1);
  }
  else
  {
    KeCancelTimer2(&AcpiDiagThermalPollingTimer);
  }
  KeReleaseSpinLock(&AcpiThermalConstraintLock, v0);
}
