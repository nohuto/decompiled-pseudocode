/*
 * XREFs of KeCancelTimer2 @ 0x1400F7600
 * Callers:
 *     ExpSetTimer2 @ 0x1400EC4C0 (ExpSetTimer2.c)
 *     ExCancelTimer @ 0x1400F749C (ExCancelTimer.c)
 *     ExpShutdownWorkerFactory @ 0x1400F74C8 (ExpShutdownWorkerFactory.c)
 *     PopIdleCancelAoAcDozeS4Timer @ 0x140112708 (PopIdleCancelAoAcDozeS4Timer.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x1401270D4 (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x140145550 (PopThermalUpdateTelemetryClientCount.c)
 *     EtwpDisableKernelTrace @ 0x140496B74 (EtwpDisableKernelTrace.c)
 *     PopBatteryWorker @ 0x1405440D0 (PopBatteryWorker.c)
 *     PdcPoNetworkResiliency @ 0x14066FB44 (PdcPoNetworkResiliency.c)
 *     PopCancelDripsWatchdog @ 0x140675178 (PopCancelDripsWatchdog.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400953A0 (KxReleaseSpinLock.c)
 *     KiUpdateTimer2Flags @ 0x1400EA620 (KiUpdateTimer2Flags.c)
 *     KiAcquireTimer2CollectionLockIfInserted @ 0x1400EA698 (KiAcquireTimer2CollectionLockIfInserted.c)
 *     KiAcquireTimer2LockUnlessDisabled @ 0x1400EA6D4 (KiAcquireTimer2LockUnlessDisabled.c)
 *     KiRemoveTimer2 @ 0x1400F76D0 (KiRemoveTimer2.c)
 *     KiTraceCancelTimer2 @ 0x1401DAA5C (KiTraceCancelTimer2.c)
 */

char __fastcall KeCancelTimer2(__int64 a1)
{
  int v1; // r14d
  char v2; // di
  char v4; // si
  char v5; // bp
  __int64 v6; // r15
  unsigned __int8 CurrentIrql; // r12

  v1 = 0;
  v2 = 0;
  v4 = 2;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 96);
    v5 = 1;
  }
  else
  {
    v5 = 0;
    v6 = 0LL;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( !(unsigned __int8)KiAcquireTimer2LockUnlessDisabled(a1) )
  {
    if ( KiAcquireTimer2CollectionLockIfInserted(a1) )
    {
      KiRemoveTimer2(a1);
      KxReleaseSpinLock(&KiTimer2CollectionLock);
    }
    else
    {
      if ( (*(_BYTE *)(a1 + 1) & 0xA) == 0 )
        goto LABEL_7;
      v1 = 4;
    }
    v2 = 1;
    v4 = 0;
LABEL_7:
    KiUpdateTimer2Flags((volatile signed __int32 *)a1, v1, v4);
  }
  __writecr8(CurrentIrql);
  if ( v5 && v2 )
    KiTraceCancelTimer2(a1, KiWaitAlways ^ _byteswap_uint64(a1 ^ __ROL8__(v6 ^ KiWaitNever, KiWaitNever)));
  return v2;
}
