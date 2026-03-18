/*
 * XREFs of KiRundownMutants @ 0x14000DF1C
 * Callers:
 *     PspExitThread @ 0x140422830 (PspExitThread.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140033D90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KiWakeQueueWaiter @ 0x140043EC0 (KiWakeQueueWaiter.c)
 *     KiExitDispatcher @ 0x14004C6B0 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x14004DFB0 (KiTryUnwaitThread.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     EtwTraceEnqueueWork @ 0x14025CFD4 (EtwTraceEnqueueWork.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140264154 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

void __fastcall KiRundownMutants(ULONG_PTR BugCheckParameter1)
{
  _QWORD *v1; // r15
  char CurrentIrql; // r12
  unsigned int v4; // ebx
  _QWORD *v5; // rsi
  volatile signed __int32 *v6; // rbx
  _DWORD *v7; // rdi
  signed __int32 v8; // ett
  unsigned int v9; // ebp
  unsigned int v10; // edi
  __int64 v11; // rdx
  volatile signed __int32 **v12; // rcx
  volatile signed __int32 *v13; // r13
  volatile signed __int32 *v14; // rdi
  __int64 v15; // rcx
  volatile signed __int32 **v16; // rax
  char v17; // al
  __int64 v18; // r8
  __int64 v19; // rsi
  _KTHREAD *CurrentThread; // r15
  bool v21; // al
  unsigned int v22; // ebp
  volatile signed __int32 **v23; // rcx
  char v25[88]; // [rsp+30h] [rbp-58h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]
  int v27; // [rsp+90h] [rbp+8h]
  struct _KPRCB *CurrentPrcb; // [rsp+98h] [rbp+10h]
  char v29; // [rsp+A0h] [rbp+18h]
  struct _KPRCB *v30; // [rsp+A8h] [rbp+20h]

  v1 = (_QWORD *)(BugCheckParameter1 + 776);
  if ( (_QWORD *)*v1 != v1 )
  {
    v27 = 0;
    CurrentIrql = KeGetCurrentIrql();
    v29 = CurrentIrql;
    __writecr8(2uLL);
    CurrentPrcb = KeGetCurrentPrcb();
    while ( 1 )
    {
      while ( 1 )
      {
        v4 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
        {
          do
          {
            if ( (++v4 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v4);
          }
          while ( *(_QWORD *)(BugCheckParameter1 + 64) );
        }
        v5 = (_QWORD *)*v1;
        if ( (_QWORD *)*v1 == v1 )
        {
          *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
          KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, 1, CurrentIrql);
          return;
        }
        v6 = (volatile signed __int32 *)(v5 - 3);
        if ( *((_BYTE *)v5 + 25) )
          KeBugCheckEx(0x4000008Au, BugCheckParameter1, (ULONG_PTR)(v5 - 3), 0LL, 0LL);
        if ( _interlockedbittestandset(v6, 7u) )
          break;
LABEL_41:
        v11 = *((_QWORD *)v6 + 3);
        v12 = (volatile signed __int32 **)*((_QWORD *)v6 + 4);
        if ( *(volatile signed __int32 **)(v11 + 8) != v6 + 6 || *v12 != v6 + 6 )
          __fastfail(3u);
        *v12 = (volatile signed __int32 *)v11;
        *(_QWORD *)(v11 + 8) = v12;
        *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
        *((_QWORD *)v6 + 5) = 0LL;
        v13 = (volatile signed __int32 *)*((_QWORD *)v6 + 1);
        *((_DWORD *)v6 + 1) = 1;
        *((_BYTE *)v6 + 48) = 1;
        if ( v13 != v6 + 2 )
        {
          while ( 1 )
          {
            v14 = v13;
            v13 = *(volatile signed __int32 **)v13;
            v15 = *(_QWORD *)v14;
            v16 = (volatile signed __int32 **)*((_QWORD *)v14 + 1);
            if ( *(volatile signed __int32 **)(*(_QWORD *)v14 + 8LL) != v14 || *v16 != v14 )
              __fastfail(3u);
            *v16 = (volatile signed __int32 *)v15;
            *(_QWORD *)(v15 + 8) = v16;
            v17 = *((_BYTE *)v14 + 16);
            if ( v17 == 1 )
            {
              if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v14, *((unsigned __int16 *)v14 + 9), v25) )
                goto LABEL_71;
            }
            else
            {
              v18 = 2LL;
              if ( v17 == 2 )
              {
                *((_BYTE *)v14 + 17) = 5;
                v19 = *((_QWORD *)v14 + 3);
                *(_QWORD *)v14 = 0LL;
                __writecr8(2uLL);
                v30 = KeGetCurrentPrcb();
                CurrentThread = v30->CurrentThread;
                if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
                {
                  v21 = CurrentThread->WaitBlockFill6[68] == 2
                     && CurrentThread->NextProcessor == KeGetPcr()->Prcb.Number;
                  LOBYTE(v18) = v21;
                  EtwTraceEnqueueWork(CurrentThread, v14, v18);
                }
                v22 = 0;
                while ( _interlockedbittestandset((volatile signed __int32 *)v19, 7u) )
                {
                  do
                  {
                    if ( (++v22 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                      _mm_pause();
                    else
                      HvlNotifyLongSpinWait(v22);
                  }
                  while ( (*(_DWORD *)v19 & 0x80u) != 0 );
                }
                if ( *(_QWORD *)(v19 + 16) == v19 + 8
                  || *(_DWORD *)(v19 + 40) >= *(_DWORD *)(v19 + 44)
                  || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v19 && CurrentThread->WaitReason == 15
                  || !(unsigned __int8)KiWakeQueueWaiter(v30, v19, v14) )
                {
                  ++*(_DWORD *)(v19 + 4);
                  v23 = *(volatile signed __int32 ***)(v19 + 32);
                  *(_QWORD *)v14 = v19 + 24;
                  *((_QWORD *)v14 + 1) = v23;
                  if ( *v23 != (volatile signed __int32 *)(v19 + 24) )
                    __fastfail(3u);
                  *v23 = v14;
                  *(_QWORD *)(v19 + 32) = v14;
                }
                _InterlockedAnd((volatile signed __int32 *)v19, 0xFFFFFF7F);
LABEL_71:
                if ( (*((_DWORD *)v6 + 1))-- == 1 )
                  goto LABEL_75;
                goto LABEL_74;
              }
              KiTryUnwaitThread(CurrentPrcb, v14, 256LL, 0LL);
            }
LABEL_74:
            if ( v13 == v6 + 2 )
            {
LABEL_75:
              CurrentIrql = v29;
              v1 = (_QWORD *)(BugCheckParameter1 + 776);
              break;
            }
          }
        }
        _InterlockedAnd(v6, 0xFFFFFF7F);
        if ( ++v27 == 32 )
        {
          KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, 1, CurrentIrql);
          v27 = 0;
          __writecr8(2uLL);
          CurrentPrcb = KeGetCurrentPrcb();
        }
      }
      *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
      v7 = (_DWORD *)((char *)&KiObjectRundownLocks + 64 * (((unsigned __int64)v6 >> 4) & 0x3F));
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        ExpAcquireSpinLockSharedAtDpcLevelInstrumented((char *)&KiObjectRundownLocks + 64
                                                                                     * (((unsigned __int64)v6 >> 4) & 0x3F));
      }
      else
      {
        _m_prefetchw(v7);
        v8 = *v7 & 0x7FFFFFFF;
        if ( v8 != _InterlockedCompareExchange(v7, v8 + 1, v8) )
          ExpWaitForSpinLockSharedAndAcquire((char *)&KiObjectRundownLocks + 64 * (((unsigned __int64)v6 >> 4) & 0x3F));
      }
      if ( v5 == (_QWORD *)*v1 )
      {
        v9 = 0;
        while ( _interlockedbittestandset(v6, 7u) )
        {
          do
          {
            if ( (++v9 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v9);
          }
          while ( (*v6 & 0x80u) != 0 );
        }
        if ( *((_QWORD *)v6 + 5) == BugCheckParameter1 )
          goto LABEL_29;
        _InterlockedAnd(v6, 0xFFFFFF7F);
      }
      v5 = 0LL;
LABEL_29:
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        ExpReleaseSpinLockSharedFromDpcLevelInstrumented(
          (char *)&KiObjectRundownLocks + 64 * (((unsigned __int64)v6 >> 4) & 0x3F),
          retaddr);
      }
      else
      {
        _InterlockedAnd(v7, 0xBFFFFFFF);
        _InterlockedDecrement(v7);
      }
      if ( v5 )
      {
        v10 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
        {
          do
          {
            if ( (++v10 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v10);
          }
          while ( *(_QWORD *)(BugCheckParameter1 + 64) );
        }
        goto LABEL_41;
      }
    }
  }
}
