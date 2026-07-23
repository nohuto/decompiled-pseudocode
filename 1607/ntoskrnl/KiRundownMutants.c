/*
 * XREFs of KiRundownMutants @ 0x1400F0170
 * Callers:
 *     PspExitThread @ 0x1404F950C (PspExitThread.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14001D8E0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KiExitDispatcher @ 0x140056280 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x140057920 (KiTryUnwaitThread.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400E8250 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EC640 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x1400EC680 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x1400F7B48 (KiWakeOtherQueueWaiters.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     KeIsThreadRunning @ 0x1401D2AA4 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x140225A4C (EtwTraceEnqueueWork.c)
 */

void __fastcall KiRundownMutants(ULONG_PTR BugCheckParameter1)
{
  _QWORD *v1; // r12
  unsigned __int8 CurrentIrql; // r14
  _QWORD *v4; // rsi
  volatile signed __int32 *v5; // rbx
  __int64 v6; // rdx
  volatile signed __int32 **v7; // rcx
  volatile signed __int32 *v8; // r13
  struct _KPRCB *v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rcx
  _QWORD *v12; // rax
  char v13; // al
  bool v14; // zf
  __int64 v15; // rbp
  _QWORD *v16; // r14
  struct _KPRCB *v17; // rax
  _KTHREAD *CurrentThread; // r15
  __int64 v19; // r8
  __int64 v20; // r15
  int v21; // r8d
  __int64 *v22; // rdx
  __int64 v23; // [rsp+30h] [rbp-68h]
  unsigned __int8 v24; // [rsp+38h] [rbp-60h]
  __int64 v25[11]; // [rsp+40h] [rbp-58h] BYREF
  int v26; // [rsp+A0h] [rbp+8h]
  int v27; // [rsp+A8h] [rbp+10h] BYREF
  int v28; // [rsp+B0h] [rbp+18h] BYREF
  struct _KPRCB *CurrentPrcb; // [rsp+B8h] [rbp+20h]

  v1 = (_QWORD *)(BugCheckParameter1 + 776);
  if ( (_QWORD *)*v1 != v1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    v24 = CurrentIrql;
    __writecr8(2uLL);
    CurrentPrcb = KeGetCurrentPrcb();
LABEL_3:
    v26 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v27 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
        {
          do
            KeYieldProcessorEx(&v27);
          while ( *(_QWORD *)(BugCheckParameter1 + 64) );
        }
        v4 = (_QWORD *)*v1;
        if ( (_QWORD *)*v1 == v1 )
        {
          v9 = CurrentPrcb;
          *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
          KiExitDispatcher((__int64)v9, 0LL, 1LL, 1LL, CurrentIrql);
          return;
        }
        v5 = (volatile signed __int32 *)(v4 - 3);
        if ( *((_BYTE *)v4 + 25) )
          KeBugCheckEx(0x4000008Au, BugCheckParameter1, (ULONG_PTR)(v4 - 3), 0LL, 0LL);
        if ( _interlockedbittestandset(v5, 7u) )
          break;
LABEL_9:
        v6 = *((_QWORD *)v5 + 3);
        v7 = (volatile signed __int32 **)*((_QWORD *)v5 + 4);
        if ( *(volatile signed __int32 **)(v6 + 8) != v5 + 6 || *v7 != v5 + 6 )
          __fastfail(3u);
        *v7 = (volatile signed __int32 *)v6;
        *(_QWORD *)(v6 + 8) = v7;
        *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
        v8 = (volatile signed __int32 *)*((_QWORD *)v5 + 1);
        *((_DWORD *)v5 + 1) = 1;
        *((_BYTE *)v5 + 48) = 1;
        *((_QWORD *)v5 + 5) = 0LL;
        if ( v8 != v5 + 2 )
        {
          while ( 1 )
          {
            v10 = (__int64)v8;
            v8 = *(volatile signed __int32 **)v8;
            v11 = *(_QWORD *)v10;
            v12 = *(_QWORD **)(v10 + 8);
            if ( *(_QWORD *)(*(_QWORD *)v10 + 8LL) != v10 || *v12 != v10 )
              __fastfail(3u);
            *v12 = v11;
            *(_QWORD *)(v11 + 8) = v12;
            v13 = *(_BYTE *)(v10 + 16);
            if ( v13 == 1 )
            {
              if ( (unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, v10, *(unsigned __int16 *)(v10 + 18), v25) )
              {
                v14 = (*((_DWORD *)v5 + 1))-- == 1;
                if ( v14 )
                {
LABEL_50:
                  CurrentIrql = v24;
                  break;
                }
              }
            }
            else
            {
              if ( v13 == 2 )
              {
                *(_BYTE *)(v10 + 17) = 5;
                v15 = *(_QWORD *)(v10 + 24);
                *(_QWORD *)v10 = 0LL;
                v16 = (_QWORD *)(v15 + 8);
                __writecr8(2uLL);
                v17 = KeGetCurrentPrcb();
                v23 = (__int64)v17;
                CurrentThread = v17->CurrentThread;
                if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
                {
                  LOBYTE(v19) = KeIsThreadRunning(v17->CurrentThread);
                  EtwTraceEnqueueWork(CurrentThread, v10, v19);
                }
                KiAcquireKobjectLockSafe((volatile signed __int32 *)v15);
                if ( (_QWORD *)*v16 == v16
                  || *(_DWORD *)(v15 + 40) >= *(_DWORD *)(v15 + 44)
                  || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v15 && CurrentThread->WaitReason == 15 )
                {
                  v20 = v23;
                }
                else
                {
                  v20 = v23;
                  if ( KiWakeQueueWaiter(v23, v15, v10) )
                    goto LABEL_46;
                }
                v21 = *(_DWORD *)(v15 + 4);
                *(_DWORD *)(v15 + 4) = v21 + 1;
                v22 = *(__int64 **)(v15 + 32);
                if ( *v22 != v15 + 24 )
                  __fastfail(3u);
                *(_QWORD *)v10 = v15 + 24;
                *(_QWORD *)(v10 + 8) = v22;
                *v22 = v10;
                *(_QWORD *)(v15 + 32) = v10;
                if ( !v21 && (_QWORD *)*v16 != v16 )
                  KiWakeOtherQueueWaiters(v20, v15);
LABEL_46:
                _InterlockedAnd((volatile signed __int32 *)v15, 0xFFFFFF7F);
                v14 = (*((_DWORD *)v5 + 1))-- == 1;
                if ( v14 )
                  goto LABEL_50;
                goto LABEL_49;
              }
              KiTryUnwaitThread((__int64)CurrentPrcb, v10, 256LL, 0LL);
            }
LABEL_49:
            if ( v8 == v5 + 2 )
              goto LABEL_50;
          }
        }
        _InterlockedAnd(v5, 0xFFFFFF7F);
        if ( ++v26 == 32 )
        {
          KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1LL, 1LL, CurrentIrql);
          __writecr8(2uLL);
          CurrentPrcb = KeGetCurrentPrcb();
          goto LABEL_3;
        }
      }
      *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
      ExAcquireSpinLockSharedAtDpcLevel(&KiObjectRundownLocks[16 * (((unsigned __int64)v5 >> 4) & 0x3F)]);
      if ( v4 != (_QWORD *)*v1 )
        goto LABEL_20;
      KiAcquireKobjectLockSafe((volatile signed __int32 *)v4 - 6);
      if ( *((_QWORD *)v5 + 5) != BugCheckParameter1 )
        break;
LABEL_21:
      ExReleaseSpinLockSharedFromDpcLevel(&KiObjectRundownLocks[16 * (((unsigned __int64)v5 >> 4) & 0x3F)]);
      if ( v4 )
      {
        v28 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
        {
          do
            KeYieldProcessorEx(&v28);
          while ( *(_QWORD *)(BugCheckParameter1 + 64) );
        }
        goto LABEL_9;
      }
    }
    _InterlockedAnd(v5, 0xFFFFFF7F);
LABEL_20:
    v4 = 0LL;
    goto LABEL_21;
  }
}
