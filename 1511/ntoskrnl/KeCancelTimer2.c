/*
 * XREFs of KeCancelTimer2 @ 0x1400C5258
 * Callers:
 *     ExpSetTimer2 @ 0x140034460 (ExpSetTimer2.c)
 *     ExCancelTimer @ 0x1400C50FC (ExCancelTimer.c)
 *     ExpShutdownWorkerFactory @ 0x1400C5128 (ExpShutdownWorkerFactory.c)
 *     PopIdleCancelAoAcDozeS4Timer @ 0x140107AA0 (PopIdleCancelAoAcDozeS4Timer.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x140119F04 (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x140142C6C (PopThermalUpdateTelemetryClientCount.c)
 *     EtwpDisableKernelTrace @ 0x1404B8504 (EtwpDisableKernelTrace.c)
 *     PopBatteryWorker @ 0x1404F9510 (PopBatteryWorker.c)
 *     PopCancelDripsWatchdog @ 0x14063C930 (PopCancelDripsWatchdog.c)
 * Callees:
 *     KiAcquireTimer2LockUnlessDisabled @ 0x140031978 (KiAcquireTimer2LockUnlessDisabled.c)
 *     KiAcquireTimer2CollectionLockIfInserted @ 0x1400319A8 (KiAcquireTimer2CollectionLockIfInserted.c)
 *     KiUpdateTimer2Flags @ 0x1400326AC (KiUpdateTimer2Flags.c)
 *     KiRemoveTimer2 @ 0x1400338E0 (KiRemoveTimer2.c)
 *     KxReleaseSpinLock @ 0x1400775A0 (KxReleaseSpinLock.c)
 *     KiTraceCancelTimer2 @ 0x1401CAD68 (KiTraceCancelTimer2.c)
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
