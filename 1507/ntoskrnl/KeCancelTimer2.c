/*
 * XREFs of KeCancelTimer2 @ 0x1400F436C
 * Callers:
 *     ExpShutdownWorkerFactory @ 0x14002DA50 (ExpShutdownWorkerFactory.c)
 *     ExpSetTimer2 @ 0x1400F4D70 (ExpSetTimer2.c)
 *     PopResetIdleTime @ 0x14012DF68 (PopResetIdleTime.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x140147F78 (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     ExCancelTimer @ 0x140158CD4 (ExCancelTimer.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x140170B24 (PopThermalUpdateTelemetryClientCount.c)
 *     PopBatteryWorker @ 0x14056B280 (PopBatteryWorker.c)
 *     PopCancelDripsWatchdog @ 0x1406BCF60 (PopCancelDripsWatchdog.c)
 * Callees:
 *     KiUpdateTimer2Flags @ 0x1400F5C10 (KiUpdateTimer2Flags.c)
 *     KiRemoveTimer2 @ 0x1400F5CA0 (KiRemoveTimer2.c)
 *     KiAcquireTimer2CollectionLockIfInserted @ 0x1400F6734 (KiAcquireTimer2CollectionLockIfInserted.c)
 *     KiAcquireTimer2LockUnlessDisabled @ 0x1400F67A0 (KiAcquireTimer2LockUnlessDisabled.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     KiTraceCancelTimer2 @ 0x140209920 (KiTraceCancelTimer2.c)
 */

char __fastcall KeCancelTimer2(__int64 a1)
{
  unsigned int v1; // r14d
  char v2; // di
  unsigned int v4; // esi
  char v5; // bp
  __int64 v6; // r15
  unsigned __int8 CurrentIrql; // r12
  void *retaddr; // [rsp+38h] [rbp+0h]

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
  if ( !(unsigned __int8)KiAcquireTimer2LockUnlessDisabled() )
  {
    if ( (unsigned __int8)KiAcquireTimer2CollectionLockIfInserted(a1) )
    {
      KiRemoveTimer2(a1);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented(&KiTimer2CollectionLock, retaddr);
      else
        _InterlockedAnd64(&KiTimer2CollectionLock, 0LL);
    }
    else
    {
      if ( (*(_BYTE *)(a1 + 1) & 0xA) == 0 )
        goto LABEL_8;
      v1 = 4;
    }
    v2 = 1;
    v4 = 0;
LABEL_8:
    KiUpdateTimer2Flags(a1, v1, v4);
  }
  __writecr8(CurrentIrql);
  if ( v5 && v2 )
    KiTraceCancelTimer2(a1, KiWaitAlways ^ _byteswap_uint64(a1 ^ __ROL8__(v6 ^ KiWaitNever, KiWaitNever)));
  return v2;
}
