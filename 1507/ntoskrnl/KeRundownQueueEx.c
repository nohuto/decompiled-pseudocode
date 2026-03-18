/*
 * XREFs of KeRundownQueueEx @ 0x140112874
 * Callers:
 *     KeRundownQueue @ 0x1401127EC (KeRundownQueue.c)
 *     IopDeleteIoCompletionInternal @ 0x1401127F4 (IopDeleteIoCompletionInternal.c)
 *     EtwpDeleteRegistrationObject @ 0x1404CDFEC (EtwpDeleteRegistrationObject.c)
 *     KeUnInitializeUmsThread @ 0x140699F10 (KeUnInitializeUmsThread.c)
 * Callees:
 *     KiWakeQueueWaiter @ 0x140043EC0 (KiWakeQueueWaiter.c)
 *     KiExitDispatcher @ 0x14004C6B0 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x14004DFB0 (KiTryUnwaitThread.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     EtwTraceEnqueueWork @ 0x14025CFD4 (EtwTraceEnqueueWork.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall KeRundownQueueEx(unsigned __int64 a1, char a2)
{
  char v2; // r9
  _QWORD **v3; // r14
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // rbp
  unsigned int v7; // edi
  _QWORD *v8; // rax
  __int64 v9; // r8
  _QWORD *v10; // rcx
  _QWORD *v11; // rsi
  volatile signed __int32 *v12; // rdi
  __int64 v13; // rdx
  volatile signed __int32 **v14; // rcx
  unsigned int v15; // ebp
  _QWORD *v16; // r14
  _QWORD *v17; // r15
  __int64 v18; // rsi
  char v19; // al
  __int64 v20; // r8
  __int64 v21; // rdi
  _KTHREAD *CurrentThread; // r13
  bool v23; // al
  unsigned int v24; // ebp
  __int64 *v25; // rcx
  volatile signed __int32 *v26; // rbx
  unsigned int v27; // edi
  signed __int32 i; // edx
  void *retaddr; // [rsp+88h] [rbp+0h]
  struct _KPRCB *v31; // [rsp+90h] [rbp+8h]
  __int64 v33; // [rsp+A0h] [rbp+18h]
  struct _KPRCB *v34; // [rsp+A8h] [rbp+20h]

  v2 = a2;
  v3 = (_QWORD **)(a1 + 48);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v7 = 0;
  v31 = CurrentPrcb;
  if ( _interlockedbittestandset((volatile signed __int32 *)a1, 7u) )
  {
    do
    {
      if ( (++v7 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v7);
    }
    while ( (*(_DWORD *)a1 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)a1, 7u) );
    v2 = a2;
  }
  v8 = (_QWORD *)(a1 + 24);
  v9 = *(_QWORD *)(a1 + 24);
  v33 = v9;
  if ( v9 == a1 + 24 )
  {
    v33 = 0LL;
  }
  else
  {
    *(_DWORD *)(a1 + 4) = 0;
    v10 = *(_QWORD **)(a1 + 32);
    if ( *(_QWORD **)(v9 + 8) != v8 || (_QWORD *)*v10 != v8 )
      __fastfail(3u);
    *v10 = v9;
    *(_QWORD *)(v9 + 8) = v10;
    *(_QWORD *)(a1 + 32) = a1 + 24;
    *v8 = v8;
  }
  _interlockedbittestandset((volatile signed __int32 *)a1, 8u);
  if ( v2 )
  {
    v11 = *v3;
    if ( *v3 != v3 )
    {
      do
      {
        v12 = (volatile signed __int32 *)(v11 - 65);
        v11 = (_QWORD *)*v11;
        v13 = *((_QWORD *)v12 + 65);
        v14 = (volatile signed __int32 **)*((_QWORD *)v12 + 66);
        if ( *(volatile signed __int32 **)(v13 + 8) != v12 + 130 || *v14 != v12 + 130 )
          __fastfail(3u);
        *v14 = (volatile signed __int32 *)v13;
        v15 = 0;
        *(_QWORD *)(v13 + 8) = v14;
        while ( _interlockedbittestandset64(v12 + 16, 0LL) )
        {
          do
          {
            if ( (++v15 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v15);
          }
          while ( *((_QWORD *)v12 + 8) );
        }
        *((_QWORD *)v12 + 29) = 0LL;
        *((_QWORD *)v12 + 8) = 0LL;
      }
      while ( v11 != v3 );
      v2 = a2;
      CurrentPrcb = v31;
    }
    *(_DWORD *)(a1 + 40) = 0;
  }
  v16 = (_QWORD *)(a1 + 8);
  v17 = *(_QWORD **)(a1 + 8);
  if ( v17 != (_QWORD *)(a1 + 8) )
  {
    while ( 1 )
    {
      v18 = (__int64)v17;
      v17 = (_QWORD *)*v17;
      v19 = *(_BYTE *)(v18 + 16);
      if ( v19 == 1 )
      {
        v20 = *(unsigned __int16 *)(v18 + 18);
      }
      else
      {
        if ( v19 == 2 )
        {
          *(_BYTE *)(v18 + 17) = 5;
          v21 = *(_QWORD *)(v18 + 24);
          *(_QWORD *)v18 = 0LL;
          __writecr8(2uLL);
          v34 = KeGetCurrentPrcb();
          CurrentThread = v34->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            v23 = CurrentThread->WaitBlockFill6[68] == 2 && CurrentThread->NextProcessor == KeGetPcr()->Prcb.Number;
            LOBYTE(v9) = v23;
            EtwTraceEnqueueWork(CurrentThread, v18, v9);
          }
          v24 = 0;
          while ( _interlockedbittestandset((volatile signed __int32 *)v21, 7u) )
          {
            do
            {
              if ( (++v24 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v24);
            }
            while ( (*(_DWORD *)v21 & 0x80u) != 0 );
          }
          if ( *(_QWORD *)(v21 + 16) == v21 + 8
            || *(_DWORD *)(v21 + 40) >= *(_DWORD *)(v21 + 44)
            || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v21 && CurrentThread->WaitReason == 15
            || !KiWakeQueueWaiter((__int64)v34, v21, v18) )
          {
            ++*(_DWORD *)(v21 + 4);
            v25 = *(__int64 **)(v21 + 32);
            *(_QWORD *)v18 = v21 + 24;
            *(_QWORD *)(v18 + 8) = v25;
            if ( *v25 != v21 + 24 )
              __fastfail(3u);
            *v25 = v18;
            *(_QWORD *)(v21 + 32) = v18;
          }
          _InterlockedAnd((volatile signed __int32 *)v21, 0xFFFFFF7F);
          CurrentPrcb = v31;
          goto LABEL_57;
        }
        v20 = 256LL;
      }
      KiTryUnwaitThread((__int64)CurrentPrcb, v18, v20, 0LL);
LABEL_57:
      if ( v17 == v16 )
      {
        v2 = a2;
        break;
      }
    }
  }
  *(_QWORD *)(a1 + 16) = a1 + 8;
  *v16 = v16;
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  if ( v2 )
  {
    v26 = (volatile signed __int32 *)((char *)&KiObjectRundownLocks + 64 * ((a1 >> 4) & 0x3F));
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v26);
    }
    else
    {
      v27 = 0;
      if ( _interlockedbittestandset(v26, 0x1Fu) )
        v27 = ExpWaitForSpinLockExclusiveAndAcquire(v26);
      for ( i = *v26; (*v26 & 0xBFFFFFFF) != 0x80000000; i = *v26 )
      {
        if ( (i & 0x40000000) == 0 )
          _InterlockedCompareExchange(v26, i | 0x40000000, i);
        if ( (++v27 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v27);
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v26, retaddr);
    else
      *v26 = 0;
  }
  KiExitDispatcher((signed __int64)CurrentPrcb, 0, 1u, 0, CurrentIrql);
  return v33;
}
