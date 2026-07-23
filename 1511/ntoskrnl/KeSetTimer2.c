/*
 * XREFs of KeSetTimer2 @ 0x140034600
 * Callers:
 *     ExpSetTimer2 @ 0x140034460 (ExpSetTimer2.c)
 *     ExSetTimer @ 0x1400345B0 (ExSetTimer.c)
 *     KiProcessPendingForegroundBoosts @ 0x140095818 (KiProcessPendingForegroundBoosts.c)
 *     NtSetInformationWorkerFactory @ 0x1400C5D50 (NtSetInformationWorkerFactory.c)
 *     KiTriggerForegroundBoostDpc @ 0x1400EAF84 (KiTriggerForegroundBoostDpc.c)
 *     MiStoreEvictThread @ 0x140142B00 (MiStoreEvictThread.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x140142C6C (PopThermalUpdateTelemetryClientCount.c)
 *     PopCheckPowerSourceAfterRtcWakeSet @ 0x1401EE9C8 (PopCheckPowerSourceAfterRtcWakeSet.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x1401F3A18 (PopIdleArmAoAcDozeS4Timer.c)
 *     ExpTimeRefreshWork @ 0x1403A6F68 (ExpTimeRefreshWork.c)
 *     NtCreateWorkerFactory @ 0x14044E4E8 (NtCreateWorkerFactory.c)
 *     CmpArmDelayDerefKCBWorker @ 0x1404B5C08 (CmpArmDelayDerefKCBWorker.c)
 *     EtwpEnableKernelTrace @ 0x1404B8278 (EtwpEnableKernelTrace.c)
 *     PopBatteryWorker @ 0x1404F9510 (PopBatteryWorker.c)
 *     PopSetDripsWatchdog @ 0x14063CF34 (PopSetDripsWatchdog.c)
 *     ExInitializeTimeRefresh @ 0x140768010 (ExInitializeTimeRefresh.c)
 *     ExpWorkerInitialization @ 0x14076B754 (ExpWorkerInitialization.c)
 * Callees:
 *     RtlGetSystemTimePrecise @ 0x14002D4E8 (RtlGetSystemTimePrecise.c)
 *     KiRemoveTimer2 @ 0x1400338E0 (KiRemoveTimer2.c)
 *     KiInsertTimer2WithCollectionLockHeld @ 0x140034D90 (KiInsertTimer2WithCollectionLockHeld.c)
 *     RtlGetInterruptTimePrecise @ 0x1400351D0 (RtlGetInterruptTimePrecise.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140038DE0 (KxWaitForSpinLockAndAcquire.c)
 *     KxAcquireSpinLock @ 0x140076D00 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400775A0 (KxReleaseSpinLock.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KiSendClockInterruptToClockOwner @ 0x1400EC2C0 (KiSendClockInterruptToClockOwner.c)
 *     KiRequestTimer2Expiration @ 0x1400ED01C (KiRequestTimer2Expiration.c)
 *     KiAcquireSpinLockInstrumented @ 0x1401C4B24 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1401C4BD4 (KiReleaseSpinLockInstrumented.c)
 *     KiTraceSetTimer2 @ 0x1401CAF00 (KiTraceSetTimer2.c)
 */

_BOOL8 __fastcall KeSetTimer2(unsigned int *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r15
  __int64 v6; // rsi
  bool v8; // di
  char v9; // r13
  LARGE_INTEGER InterruptTimePrecise; // rax
  LARGE_INTEGER v11; // rsi
  __int64 QuadPart; // r14
  __int64 v13; // rax
  bool v14; // r12
  __int64 v15; // rdx
  unsigned int v16; // ebp
  char v17; // al
  char v18; // al
  __int64 v19; // rdx
  unsigned __int32 i; // eax
  LARGE_INTEGER v22; // rcx
  LARGE_INTEGER SystemTimePrecise; // rax
  void *retaddr; // [rsp+68h] [rbp+0h]
  char v25; // [rsp+70h] [rbp+8h] BYREF
  int v26; // [rsp+78h] [rbp+10h] BYREF
  __int64 CurrentIrql; // [rsp+80h] [rbp+18h]
  LARGE_INTEGER PerformanceCounter; // [rsp+88h] [rbp+20h] BYREF

  v5 = a3;
  v6 = a2;
  if ( a3 && a3 < (unsigned int)KeMinimumIncrement )
    v5 = (unsigned int)KeMinimumIncrement;
  v8 = (*((_BYTE *)a1 + 129) & 4) != 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v9 = 0;
  if ( a2 > 0 )
  {
    v9 = 1;
    if ( v8 )
      SystemTimePrecise = RtlGetSystemTimePrecise();
    else
      SystemTimePrecise.QuadPart = MEMORY[0xFFFFF78000000014];
    if ( v6 > SystemTimePrecise.QuadPart )
      v6 = SystemTimePrecise.QuadPart - v6;
    else
      v6 = 0LL;
  }
  if ( v8 )
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
  else
    InterruptTimePrecise.QuadPart = MEMORY[0xFFFFF78000000008];
  v11.QuadPart = InterruptTimePrecise.QuadPart - v6;
  if ( v11.QuadPart < (unsigned __int64)InterruptTimePrecise.QuadPart || v11.QuadPart == -1 )
    v11.QuadPart = -2LL;
  QuadPart = v11.QuadPart;
  if ( a4 && *((_BYTE *)a1 + 130) != 20 )
  {
    v13 = *(_QWORD *)(a4 + 8);
    if ( v13 == -1 )
    {
      QuadPart = -1LL;
    }
    else
    {
      QuadPart = v13 + v11.QuadPart;
      if ( (unsigned __int64)(v13 + v11.QuadPart) < v11.QuadPart || QuadPart == -1 )
        QuadPart = -2LL;
    }
  }
  v14 = 0;
  v26 = 0;
  v25 = 0;
  v15 = 1LL;
  v16 = 1;
  if ( _interlockedbittestandset((volatile signed __int32 *)a1, 7u) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v26);
      while ( (*a1 & 0x80u) != 0 );
    }
    while ( _interlockedbittestandset((volatile signed __int32 *)a1, 7u) );
    v15 = 1LL;
  }
  if ( (*((_BYTE *)a1 + 1) & 0x20) != 0 )
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  v17 = *((_BYTE *)a1 + 1);
  if ( (v17 & 0x20) == 0 )
  {
    if ( (v17 & 1) != 0 )
    {
      KxAcquireSpinLock(&KiTimer2CollectionLock);
      if ( (*((_BYTE *)a1 + 1) & 1) != 0 )
      {
        KiRemoveTimer2((__int64)a1);
        KxReleaseSpinLock(&KiTimer2CollectionLock);
        v14 = 1;
LABEL_18:
        a1[1] = 0;
        *((LARGE_INTEGER *)a1 + 9) = v11;
        *((_QWORD *)a1 + 10) = QuadPart;
        *((_QWORD *)a1 + 11) = v5;
        *((_BYTE *)a1 + 128) = v9;
        if ( v16 == 1 )
        {
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            KiAcquireSpinLockInstrumented(&KiTimer2CollectionLock);
          }
          else if ( _interlockedbittestandset64((volatile signed __int32 *)&KiTimer2CollectionLock, 0LL) )
          {
            KxWaitForSpinLockAndAcquire(&KiTimer2CollectionLock);
          }
          LOBYTE(v15) = 1;
          KiInsertTimer2WithCollectionLockHeld(a1, v15, &v25);
        }
        if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
        {
          KiTraceSetTimer2(a1, v14, v16);
        }
        else
        {
          v19 = *a1;
          for ( i = _InterlockedCompareExchange((volatile signed __int32 *)a1, (v16 << 8) | *a1 & 0xFFFFF07F, *a1);
                (_DWORD)v19 != i;
                i = _InterlockedCompareExchange((volatile signed __int32 *)a1, (v16 << 8) | i & 0xFFFFF07F, i) )
          {
            v19 = i;
          }
          if ( v16 == 1 )
          {
            if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
              KiReleaseSpinLockInstrumented(&KiTimer2CollectionLock, retaddr);
            else
              _InterlockedAnd64((volatile signed __int64 *)&KiTimer2CollectionLock, 0LL);
          }
        }
        if ( v25 )
        {
          KiRequestTimer2Expiration();
        }
        else if ( v8 && !KiHRTimerClockActive )
        {
          v22.QuadPart = MEMORY[0xFFFFF78000000008] + KeMaximumIncrement;
          if ( v11.QuadPart < (unsigned __int64)v22.QuadPart )
            ((void (__fastcall *)(_QWORD, _QWORD))KiSendClockInterruptToClockOwner)((LARGE_INTEGER)v22.QuadPart, v19);
        }
        goto LABEL_31;
      }
      KxReleaseSpinLock(&KiTimer2CollectionLock);
      v15 = 1LL;
    }
    v18 = *((_BYTE *)a1 + 1);
    if ( (v18 & 0xF) != 0 )
    {
      v16 = 8;
      v14 = (v18 & 4) == 0;
    }
    goto LABEL_18;
  }
LABEL_31:
  __writecr8((unsigned __int8)CurrentIrql);
  return v14;
}
