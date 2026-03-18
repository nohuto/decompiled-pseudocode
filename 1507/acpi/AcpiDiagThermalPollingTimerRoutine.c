/*
 * XREFs of AcpiDiagThermalPollingTimerRoutine @ 0x1C0032E30
 * Callers:
 *     <none>
 * Callees:
 *     ACPIThermalLoopEx @ 0x1C0019DFC (ACPIThermalLoopEx.c)
 */

void __fastcall AcpiDiagThermalPollingTimerRoutine(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  KIRQL v4; // al
  __int64 *v5; // rbx
  KIRQL v6; // di

  v4 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalConstraintLock);
  v5 = (__int64 *)AcpiThermalZoneList;
  v6 = v4;
  while ( v5 != &AcpiThermalZoneList )
  {
    ACPIThermalLoopEx((__int64)(v5 - 25), 536870914, 0);
    v5 = (__int64 *)*v5;
  }
  KeReleaseSpinLock(&AcpiThermalConstraintLock, v6);
  AcpiDiagRequeueThermalPollingTimer();
}
