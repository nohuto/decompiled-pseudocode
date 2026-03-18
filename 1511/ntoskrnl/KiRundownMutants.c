/*
 * XREFs of KiRundownMutants @ 0x14002BB9C
 * Callers:
 *     PspExitThread @ 0x1403F0588 (PspExitThread.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140034400 (KiAcquireKobjectLockSafe.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140035AF0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140077FB0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KiWakeQueueWaiter @ 0x14007E740 (KiWakeQueueWaiter.c)
 *     KiExitDispatcher @ 0x1400879A0 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x140088FA0 (KiTryUnwaitThread.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     KeIsThreadRunning @ 0x1401C2F44 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14020DD68 (EtwTraceEnqueueWork.c)
 */

void __fastcall KiRundownMutants(ULONG_PTR BugCheckParameter1)
{
  _QWORD *v1; // r15
  char CurrentIrql; // r14
  int v4; // r13d
  _QWORD *v5; // rdi
  volatile signed __int32 *v6; // rbx
  __int64 v7; // rdx
  volatile signed __int32 **v8; // rcx
  volatile signed __int32 *v9; // r12
  volatile signed __int32 *v10; // rdi
  __int64 v11; // rcx
  volatile signed __int32 **v12; // rax
  char v13; // al
  __int64 v14; // rbp
  struct _KPRCB *v15; // rax
  _KTHREAD *CurrentThread; // r14
  __int64 v17; // r8
  volatile signed __int32 **v18; // rcx
  int v20; // ecx
  char v21; // [rsp+30h] [rbp-68h]
  struct _KPRCB *v22; // [rsp+38h] [rbp-60h]
  char v23[88]; // [rsp+40h] [rbp-58h] BYREF
  int v24; // [rsp+A0h] [rbp+8h]
  int v25; // [rsp+A8h] [rbp+10h] BYREF
  int v26; // [rsp+B0h] [rbp+18h] BYREF
  struct _KPRCB *CurrentPrcb; // [rsp+B8h] [rbp+20h]

  v1 = (_QWORD *)(BugCheckParameter1 + 776);
  if ( (_QWORD *)*v1 != v1 )
  {
    v24 = 0;
    CurrentIrql = KeGetCurrentIrql();
    v21 = CurrentIrql;
    __writecr8(2uLL);
    v4 = (unsigned __int8)v24 + 1;
    CurrentPrcb = KeGetCurrentPrcb();
    while ( 1 )
    {
      while ( 1 )
      {
        v25 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
        {
          do
            KeYieldProcessorEx(&v25);
          while ( *(_QWORD *)(BugCheckParameter1 + 64) );
        }
        v5 = (_QWORD *)*v1;
        if ( (_QWORD *)*v1 == v1 )
        {
          v20 = (int)CurrentPrcb;
          *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
          KiExitDispatcher(v20, 0, v4, v4, CurrentIrql);
          return;
        }
        v6 = (volatile signed __int32 *)(v5 - 3);
        if ( *((_BYTE *)v5 + 25) )
          KeBugCheckEx(0x4000008Au, BugCheckParameter1, (ULONG_PTR)(v5 - 3), 0LL, 0LL);
        if ( _interlockedbittestandset(v6, 7u) )
          break;
LABEL_19:
        v7 = *((_QWORD *)v6 + 3);
        v8 = (volatile signed __int32 **)*((_QWORD *)v6 + 4);
        if ( *(volatile signed __int32 **)(v7 + 8) != v6 + 6 || *v8 != v6 + 6 )
          __fastfail(3u);
        *v8 = (volatile signed __int32 *)v7;
        *(_QWORD *)(v7 + 8) = v8;
        *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
        *((_QWORD *)v6 + 5) = 0LL;
        v9 = (volatile signed __int32 *)*((_QWORD *)v6 + 1);
        *((_DWORD *)v6 + 1) = v4;
        *((_BYTE *)v6 + 48) = v4;
        if ( v9 != v6 + 2 )
        {
          while ( 1 )
          {
            v10 = v9;
            v9 = *(volatile signed __int32 **)v9;
            v11 = *(_QWORD *)v10;
            v12 = (volatile signed __int32 **)*((_QWORD *)v10 + 1);
            if ( *(volatile signed __int32 **)(*(_QWORD *)v10 + 8LL) != v10 || *v12 != v10 )
              __fastfail(3u);
            *v12 = (volatile signed __int32 *)v11;
            *(_QWORD *)(v11 + 8) = v12;
            v13 = *((_BYTE *)v10 + 16);
            if ( v13 == (_BYTE)v4 )
            {
              if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v10, *((unsigned __int16 *)v10 + 9), v23) )
                goto LABEL_39;
            }
            else
            {
              if ( v13 == 2 )
              {
                *((_BYTE *)v10 + 17) = 5;
                v14 = *((_QWORD *)v10 + 3);
                *(_QWORD *)v10 = 0LL;
                __writecr8(2uLL);
                v15 = KeGetCurrentPrcb();
                v22 = v15;
                CurrentThread = v15->CurrentThread;
                if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
                {
                  LOBYTE(v17) = KeIsThreadRunning(v15->CurrentThread);
                  EtwTraceEnqueueWork(CurrentThread, v10, v17);
                }
                KiAcquireKobjectLockSafe(v14);
                if ( *(_QWORD *)(v14 + 16) == v14 + 8
                  || *(_DWORD *)(v14 + 40) >= *(_DWORD *)(v14 + 44)
                  || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v14 && CurrentThread->WaitReason == 15
                  || !(unsigned __int8)KiWakeQueueWaiter(v22, v14, v10) )
                {
                  v4 = 1;
                  ++*(_DWORD *)(v14 + 4);
                  v18 = *(volatile signed __int32 ***)(v14 + 32);
                  *(_QWORD *)v10 = v14 + 24;
                  *((_QWORD *)v10 + 1) = v18;
                  if ( *v18 != (volatile signed __int32 *)(v14 + 24) )
                    __fastfail(3u);
                  *v18 = v10;
                  *(_QWORD *)(v14 + 32) = v10;
                }
                else
                {
                  v4 = 1;
                }
                _InterlockedAnd((volatile signed __int32 *)v14, 0xFFFFFF7F);
LABEL_39:
                if ( (*((_DWORD *)v6 + 1))-- == 1 )
                  goto LABEL_43;
                goto LABEL_42;
              }
              KiTryUnwaitThread(CurrentPrcb, v10, 256LL, 0LL);
            }
LABEL_42:
            if ( v9 == v6 + 2 )
            {
LABEL_43:
              CurrentIrql = v21;
              break;
            }
          }
        }
        _InterlockedAnd(v6, 0xFFFFFF7F);
        v24 += v4;
        if ( v24 == 32 )
        {
          KiExitDispatcher((_DWORD)CurrentPrcb, 0, v4, v4, CurrentIrql);
          v24 = 0;
          __writecr8(2uLL);
          CurrentPrcb = KeGetCurrentPrcb();
        }
      }
      *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
      ExAcquireSpinLockSharedAtDpcLevel(&KiObjectRundownLocks[16 * (((unsigned __int64)v6 >> 4) & 0x3F)]);
      if ( v5 != (_QWORD *)*v1 )
        goto LABEL_13;
      KiAcquireKobjectLockSafe(v5 - 3);
      if ( *((_QWORD *)v6 + 5) != BugCheckParameter1 )
        break;
LABEL_14:
      ExReleaseSpinLockSharedFromDpcLevel(&KiObjectRundownLocks[16 * (((unsigned __int64)v6 >> 4) & 0x3F)]);
      if ( v5 )
      {
        v26 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
        {
          do
            KeYieldProcessorEx(&v26);
          while ( *(_QWORD *)(BugCheckParameter1 + 64) );
        }
        goto LABEL_19;
      }
    }
    _InterlockedAnd(v6, 0xFFFFFF7F);
LABEL_13:
    v5 = 0LL;
    goto LABEL_14;
  }
}
