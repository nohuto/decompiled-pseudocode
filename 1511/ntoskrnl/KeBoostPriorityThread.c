/*
 * XREFs of KeBoostPriorityThread @ 0x1400F6440
 * Callers:
 *     NtSetInformationProcess @ 0x1404507B0 (NtSetInformationProcess.c)
 *     ExpCreateWorkerThread @ 0x1404D070C (ExpCreateWorkerThread.c)
 * Callees:
 *     KiUpdateTotalCyclesCurrentThread @ 0x1400292C4 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiQueueReadyThread @ 0x14002A180 (KiQueueReadyThread.c)
 *     KiAbProcessLocksWorker @ 0x140031F4C (KiAbProcessLocksWorker.c)
 *     KiAbProcessThreadLocks @ 0x14003203C (KiAbProcessThreadLocks.c)
 *     KiEndThreadCycleAccumulation @ 0x14007BC90 (KiEndThreadCycleAccumulation.c)
 *     KiSetPriorityThread @ 0x14007BEA0 (KiSetPriorityThread.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KiReadyDeferredReadyList @ 0x14007DD80 (KiReadyDeferredReadyList.c)
 *     KiDeliverApc @ 0x140083D40 (KiDeliverApc.c)
 *     KiDeferredReadyThread @ 0x140087D50 (KiDeferredReadyThread.c)
 *     KiSwapContext @ 0x14015A8A0 (KiSwapContext.c)
 *     EtwTracePriority @ 0x14020E158 (EtwTracePriority.c)
 */

char __fastcall KeBoostPriorityThread(__int64 a1, __int64 a2)
{
  void *v2; // rax
  int v3; // ebx
  int v5; // r13d
  __int64 CurrentIrql; // rdi
  struct _KPRCB *CurrentPrcb; // r14
  bool v8; // r15
  __int64 v9; // rcx
  __int64 updated; // rdx
  __int64 v11; // r8
  _QWORD *v12; // rbx
  __int64 v13; // rdx
  __int64 CurrentThread; // r15
  _KTHREAD *NextThread; // rbx
  __int64 v16; // r8
  __int64 v17; // r8
  _QWORD *v19; // [rsp+40h] [rbp-20h] BYREF
  _QWORD *v20; // [rsp+48h] [rbp-18h] BYREF
  _QWORD *v21; // [rsp+50h] [rbp-10h] BYREF
  __int64 v22; // [rsp+58h] [rbp-8h]
  int v23; // [rsp+A0h] [rbp+40h] BYREF
  int v24; // [rsp+B0h] [rbp+50h] BYREF
  int v25; // [rsp+B8h] [rbp+58h]

  v2 = &KiInitialProcess;
  v3 = a2;
  if ( *(_UNKNOWN **)(a1 + 544) == &KiInitialProcess )
    return (char)v2;
  v20 = 0LL;
  v5 = 0;
  CurrentIrql = KeGetCurrentIrql();
  v22 = CurrentIrql;
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v23 = (unsigned __int8)v20;
  v8 = (_KTHREAD *)a1 == CurrentPrcb->CurrentThread;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
    {
      KeYieldProcessorEx(&v23, a2, 0LL);
      v2 = *(void **)(a1 + 64);
    }
    while ( v2 );
  }
  v9 = (unsigned int)*(char *)(a1 + 195);
  v25 = v9;
  if ( (int)v9 < 16 && !*(_BYTE *)(a1 + 564) )
  {
    LODWORD(v2) = v3 + *(char *)(a1 + 563);
    if ( (int)v2 > (int)v9 )
    {
      v5 = v3 + *(char *)(a1 + 563);
      if ( (int)v2 >= 16 )
        v5 = 15;
      if ( !v8 || CurrentPrcb->NestingLevel )
      {
        updated = *(_QWORD *)(a1 + 72);
      }
      else
      {
        _disable();
        updated = KiUpdateTotalCyclesCurrentThread((__int64)CurrentPrcb, a1);
        _enable();
      }
      v11 = updated + (unsigned int)*(unsigned __int8 *)(a1 + 651) * KiCyclesPerClockQuantum;
      if ( (*(_DWORD *)(a1 + 120) & 0x10) != 0 )
        _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 4u);
      *(_QWORD *)(a1 + 32) = v11;
      LOBYTE(v2) = KiSetPriorityThread(a1, &v20, v5);
    }
  }
  v12 = v20;
  *(_QWORD *)(a1 + 64) = 0LL;
  while ( v12 )
  {
    v13 = (__int64)(v12 - 27);
    v12 = (_QWORD *)*v12;
    LOBYTE(v2) = KiDeferredReadyThread((__int64)CurrentPrcb, v13, 0LL);
  }
  if ( (unsigned __int8)CurrentIrql >= 2u )
  {
    if ( CurrentPrcb->NextThread )
    {
      LOBYTE(v2) = CurrentPrcb->DpcRoutineActive;
      if ( !(_BYTE)v2 )
      {
        if ( CurrentPrcb->NestingLevel )
        {
          CurrentPrcb->InterruptRequest = 1;
        }
        else
        {
          LOBYTE(v9) = 2;
          LOBYTE(v2) = HalRequestSoftwareInterrupt(v9);
        }
      }
    }
    goto LABEL_40;
  }
  CurrentThread = (__int64)CurrentPrcb->CurrentThread;
  if ( CurrentPrcb->NextThread )
  {
    if ( (*(char *)(CurrentThread + 792) | *(char *)(CurrentThread + 1418)) != 0x3F && KiAbEnabled )
    {
      v19 = 0LL;
      v21 = 0LL;
      CurrentIrql = (__int64)KeGetCurrentPrcb();
      KiAbProcessThreadLocks(CurrentThread, 1, 1, 1, (__int64)&v19, (__int64)&v21, CurrentIrql + 25648);
      KiAbProcessLocksWorker(&v21, (__int64 *)(CurrentIrql + 25648), (__int64)&v19, 0);
      KiReadyDeferredReadyList(CurrentIrql, &v19);
      LOBYTE(CurrentIrql) = v22;
    }
    v24 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v24, a2, 0LL);
      while ( CurrentPrcb->PrcbLock );
    }
    NextThread = CurrentPrcb->NextThread;
    CurrentPrcb->NextThread = 0LL;
    _disable();
    KiEndThreadCycleAccumulation((__int64)CurrentPrcb, CurrentThread, 0LL);
    _enable();
    CurrentPrcb->CurrentThread = NextThread;
    NextThread->WaitBlockFill6[68] = 2;
    *(_BYTE *)(CurrentThread + 643) = 32;
    *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
    KiQueueReadyThread(CurrentPrcb, CurrentThread, v16);
    LOBYTE(v17) = CurrentIrql;
    if ( !(unsigned __int8)KiSwapContext(CurrentThread, NextThread, v17) )
      goto LABEL_34;
    goto LABEL_33;
  }
  if ( (*(_DWORD *)(CurrentThread + 116) & 0x40) != 0 )
  {
LABEL_33:
    __writecr8(1uLL);
    *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
    KiDeliverApc(0, 0LL, 0LL);
  }
LABEL_34:
  LOBYTE(v2) = CurrentIrql;
  __writecr8((unsigned __int8)CurrentIrql);
LABEL_40:
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 && v5 )
    LOBYTE(v2) = EtwTracePriority(a1, 1328, v25, v5, 0LL);
  return (char)v2;
}
