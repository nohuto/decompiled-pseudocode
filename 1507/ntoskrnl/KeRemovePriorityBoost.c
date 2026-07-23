/*
 * XREFs of KeRemovePriorityBoost @ 0x1401FEDB4
 * Callers:
 *     CmpReleaseWriteQueue @ 0x14044CDA4 (CmpReleaseWriteQueue.c)
 * Callees:
 *     KiDeliverApc @ 0x140048670 (KiDeliverApc.c)
 *     KiDeferredReadyThread @ 0x14004CE40 (KiDeferredReadyThread.c)
 *     KiRemoveBoostThread @ 0x14009AE80 (KiRemoveBoostThread.c)
 *     KiQueueReadyThread @ 0x1400EAD80 (KiQueueReadyThread.c)
 *     KiAbProcessLocksWorker @ 0x1400F3920 (KiAbProcessLocksWorker.c)
 *     KiAbProcessThreadLocks @ 0x1400F3A10 (KiAbProcessThreadLocks.c)
 *     PoGetFrequencyBucket @ 0x140170614 (PoGetFrequencyBucket.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KiSwapContext @ 0x14018A310 (KiSwapContext.c)
 *     KiEndCounterAccumulation @ 0x140205058 (KiEndCounterAccumulation.c)
 */

void __fastcall KeRemovePriorityBoost(__int64 a1)
{
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v3; // rcx
  unsigned __int64 v4; // r8
  __int64 CurrentThread; // rsi
  struct _KPRCB *v6; // r14
  _QWORD *v7; // rbx
  _BYTE *v8; // rdx
  unsigned int v9; // ebx
  __int64 NextThread; // r13
  unsigned __int64 v11; // rax
  __int64 v12; // r12
  unsigned __int64 v13; // rcx
  char v14; // bl
  __int64 v15; // r14
  __int64 v16; // rcx
  _QWORD *i; // rcx
  unsigned int v18; // r8d
  _QWORD *v19; // [rsp+80h] [rbp+8h] BYREF
  _QWORD *v20; // [rsp+88h] [rbp+10h] BYREF

  if ( *(_BYTE *)(a1 + 564) )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentPrcb = KeGetCurrentPrcb();
    KiRemoveBoostThread((__int64)CurrentPrcb, a1);
    if ( CurrentIrql < 2u )
    {
      CurrentThread = (__int64)CurrentPrcb->CurrentThread;
      if ( CurrentPrcb->NextThread )
      {
        if ( (*(char *)(CurrentThread + 792) | *(char *)(CurrentThread + 1418)) != 0x3F && KiAbEnabled )
        {
          v19 = 0LL;
          v20 = 0LL;
          v6 = KeGetCurrentPrcb();
          KiAbProcessThreadLocks(CurrentThread, 1, 1, 1, (__int64)&v19, (__int64)&v20, (__int64)&v6->AbSelfIoBoostsList);
          KiAbProcessLocksWorker(&v20, (__int64 *)&v6->AbSelfIoBoostsList, (__int64)&v19, 0);
          v7 = v19;
          while ( v7 )
          {
            v8 = v7 - 27;
            v7 = (_QWORD *)*v7;
            KiDeferredReadyThread((__int64)v6, v8);
          }
        }
        v9 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
        {
          do
          {
            if ( (++v9 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v9);
          }
          while ( CurrentPrcb->PrcbLock );
        }
        NextThread = (__int64)CurrentPrcb->NextThread;
        CurrentPrcb->NextThread = 0LL;
        _disable();
        CurrentPrcb->NestingLevel = 1;
        v11 = __rdtsc();
        v12 = v11 - CurrentPrcb->StartCycles;
        v13 = v12 + *(unsigned int *)(CurrentThread + 80);
        *(_QWORD *)(CurrentThread + 72) += v12;
        CurrentPrcb->StartCycles = v11;
        v14 = *(_BYTE *)(CurrentThread + 2);
        if ( v13 > 0xFFFFFFFF )
          LODWORD(v13) = -1;
        *(_DWORD *)(CurrentThread + 80) = v13;
        if ( (v14 & 0x3E) != 0 )
        {
          if ( (v14 & 0x10) != 0 )
          {
            CurrentPrcb->TaggedCycles[*(unsigned __int8 *)(CurrentThread + 124)] += CurrentPrcb->StartCycles
                                                                                  - CurrentPrcb->TaggedCyclesStart;
            v14 &= ~0x10u;
            CurrentPrcb->TaggedCyclesStart = 0LL;
          }
          if ( (v14 & 0x3E) != 0 )
          {
            if ( (v14 & 0x20) != 0 )
            {
              v15 = *(_QWORD *)(CurrentThread + 1952);
              if ( v15 )
              {
                v4 = CurrentPrcb->PowerState.Class + 2LL * (unsigned int)PoGetFrequencyBucket((__int64)CurrentPrcb);
                *(_QWORD *)(v15 + 8 * v4) += v12;
              }
              v14 &= ~0x20u;
            }
            if ( (v14 & 0x3E) != 0 )
            {
              v16 = *(_QWORD *)(CurrentThread + 104);
              if ( v16 )
              {
                for ( i = (_QWORD *)(CurrentPrcb->ScbOffset + v16); i; i = (_QWORD *)i[49] )
                  *i += v12;
              }
              if ( (*(_BYTE *)(CurrentThread + 2) & 8) != 0
                && (*(_QWORD *)(CurrentThread + 576) & CurrentPrcb->ParentNode->Affinity.Mask) != CurrentPrcb->ParentNode->Affinity.Mask )
              {
                CurrentPrcb->AffinitizedCycles += v12;
              }
              if ( *(_QWORD *)(CurrentThread + 360) )
                KiEndCounterAccumulation(CurrentThread);
            }
          }
        }
        _enable();
        CurrentPrcb->CurrentThread = (_KTHREAD *)NextThread;
        *(_BYTE *)(NextThread + 388) = 2;
        *(_BYTE *)(CurrentThread + 643) = 32;
        *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
        KiQueueReadyThread((__int64)CurrentPrcb, CurrentThread, v4);
        LOBYTE(v18) = CurrentIrql;
        if ( !(unsigned __int8)KiSwapContext(CurrentThread, NextThread, v18) )
          goto LABEL_41;
      }
      else if ( (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0 )
      {
LABEL_41:
        __writecr8(CurrentIrql);
        return;
      }
      __writecr8(1uLL);
      *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
      KiDeliverApc(0, 0, 0LL);
      goto LABEL_41;
    }
    if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
    {
      if ( CurrentPrcb->NestingLevel )
      {
        CurrentPrcb->InterruptRequest = 1;
      }
      else
      {
        LOBYTE(v3) = 2;
        HalRequestSoftwareInterrupt(v3);
      }
    }
  }
}
