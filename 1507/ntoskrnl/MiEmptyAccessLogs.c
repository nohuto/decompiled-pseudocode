/*
 * XREFs of MiEmptyAccessLogs @ 0x1400D6F7C
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     MiEmptyPageAccessLog @ 0x1400D71E0 (MiEmptyPageAccessLog.c)
 *     MiGetNextSession @ 0x1400FD468 (MiGetNextSession.c)
 *     MmDetachSession @ 0x1400FD53C (MmDetachSession.c)
 *     MmAttachSession @ 0x1400FD5A0 (MmAttachSession.c)
 *     MiCheckAndProcessCcAccessLog @ 0x140119F44 (MiCheckAndProcessCcAccessLog.c)
 *     MiDrainSystemAccessLog @ 0x140131290 (MiDrainSystemAccessLog.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PsGetNextProcess @ 0x14050D584 (PsGetNextProcess.c)
 */

void MiEmptyAccessLogs()
{
  void *i; // rcx
  __int64 NextProcess; // rax
  void *v2; // rdi
  __int64 v3; // rbx
  unsigned __int8 CurrentIrql; // bp
  unsigned int v5; // esi
  signed __int32 v6; // eax
  void *v7; // rcx
  void *j; // rcx
  ULONG_PTR NextSession; // rax
  void *v10; // rdi
  _KPROCESS *Process; // rdx
  __int64 v12; // rbx
  unsigned __int8 v13; // bp
  unsigned int v14; // esi
  signed __int32 v15; // eax
  void *v16; // rcx
  signed __int32 *v17; // rbx
  __int64 v18; // rdi
  PSLIST_ENTRY v19; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v21[48]; // [rsp+38h] [rbp-50h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_14034F280, &LockHandle);
  if ( dword_14034F248 )
  {
    stru_14034F250.Parameter = 0LL;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  else
  {
    do
    {
      stru_14034F250.Parameter = (void *)2;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      for ( i = 0LL; ; i = v2 )
      {
        NextProcess = PsGetNextProcess(i);
        v2 = (void *)NextProcess;
        if ( !NextProcess )
          break;
        v3 = NextProcess + 1272;
        if ( *(_QWORD *)(NextProcess + 1288) )
        {
          KiStackAttachProcess((_KPROCESS *)NextProcess, 0, (__int64)v21);
          if ( *(_QWORD *)(v3 + 16) )
          {
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
            {
              ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v3);
            }
            else
            {
              v5 = 0;
              if ( _interlockedbittestandset((volatile signed __int32 *)v3, 0x1Fu) )
                v5 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)v3);
              while ( 1 )
              {
                v6 = *(_DWORD *)v3;
                if ( (*(_DWORD *)v3 & 0xBFFFFFFF) == 0x80000000 )
                  break;
                if ( (v6 & 0x40000000) == 0 )
                  _InterlockedCompareExchange((volatile signed __int32 *)v3, v6 | 0x40000000, v6);
                if ( (++v5 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                  _mm_pause();
                else
                  HvlNotifyLongSpinWait(v5);
              }
            }
            v7 = *(void **)(v3 + 16);
            if ( v7 )
            {
              MiEmptyPageAccessLog(v7);
              *(_QWORD *)(v3 + 16) = 0LL;
            }
            MiUnlockWorkingSetExclusive(v3, CurrentIrql);
          }
          KiUnstackDetachProcess((struct _KTHREAD *)v21, 0);
        }
      }
      for ( j = 0LL; ; j = v10 )
      {
        NextSession = MiGetNextSession(j);
        v10 = (void *)NextSession;
        if ( !NextSession )
          break;
        if ( (int)MmAttachSession(NextSession) >= 0 )
        {
          Process = KeGetCurrentThread()->ApcState.Process;
          v12 = Process[1].ActiveProcessors.Bitmap[2] + 2968;
          if ( *(_QWORD *)(Process[1].ActiveProcessors.Bitmap[2] + 2984) )
          {
            v13 = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
            {
              ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v12);
            }
            else
            {
              v14 = 0;
              if ( _interlockedbittestandset((volatile signed __int32 *)v12, 0x1Fu) )
                v14 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)v12);
              while ( 1 )
              {
                v15 = *(_DWORD *)v12;
                if ( (*(_DWORD *)v12 & 0xBFFFFFFF) == 0x80000000 )
                  break;
                if ( (v15 & 0x40000000) == 0 )
                  _InterlockedCompareExchange((volatile signed __int32 *)v12, v15 | 0x40000000, v15);
                if ( (++v14 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                  _mm_pause();
                else
                  HvlNotifyLongSpinWait(v14);
              }
            }
            v16 = *(void **)(v12 + 16);
            if ( v16 )
            {
              MiEmptyPageAccessLog(v16);
              *(_QWORD *)(v12 + 16) = 0LL;
            }
            MiUnlockWorkingSetExclusive(v12, v13);
          }
          MmDetachSession(v10, v21);
        }
      }
      v17 = dword_14034FD40;
      v18 = 3LL;
      do
      {
        MiDrainSystemAccessLog(v17);
        v17 += 64;
        --v18;
      }
      while ( v18 );
      v19 = 0LL;
      MiCheckAndProcessCcAccessLog(0LL, 1LL);
      KeAcquireInStackQueuedSpinLock(&qword_14034F280, &LockHandle);
    }
    while ( stru_14034F250.Parameter != (void *)2 );
    if ( !dword_14034F248 )
    {
      v19 = P;
      P = 0LL;
    }
    stru_14034F250.Parameter = 0LL;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( v19 )
      ExFreePoolWithTag(v19, 0);
  }
}
