/*
 * XREFs of IopCompleteIrpInFileObjectList @ 0x140042DE0
 * Callers:
 *     IopfCompleteRequest @ 0x140048F80 (IopfCompleteRequest.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KiWakeQueueWaiter @ 0x140043EC0 (KiWakeQueueWaiter.c)
 *     IopCompleteRequest @ 0x14004A190 (IopCompleteRequest.c)
 *     KiExitDispatcher @ 0x14004C6B0 (KiExitDispatcher.c)
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     IopDropIrp @ 0x140112D18 (IopDropIrp.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 *     EtwTraceEnqueueWork @ 0x14025CFD4 (EtwTraceEnqueueWork.c)
 */

char __fastcall IopCompleteIrpInFileObjectList(__int64 a1, __int64 a2, char a3)
{
  __int64 *v6; // rax
  __int64 v7; // rdi
  char v8; // r12
  _QWORD *v9; // r14
  int v10; // r15d
  _KTHREAD *CurrentThread; // rbp
  unsigned int v12; // ebx
  int v13; // ebx
  _QWORD *v14; // rcx
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  __int64 v16; // [rsp+30h] [rbp-68h] BYREF
  __int64 CurrentIrql; // [rsp+38h] [rbp-60h]
  char v18; // [rsp+40h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-50h] BYREF
  void *retaddr; // [rsp+98h] [rbp+0h]
  struct _KPRCB *CurrentPrcb; // [rsp+B8h] [rbp+20h]

  v16 = 0LL;
  if ( !*(_BYTE *)(a1 + 65)
    && ((*(_DWORD *)(a1 + 48) & 0xC0000000) == 0xC0000000
     || (*(_DWORD *)(a2 + 80) & 0x2000000) != 0 && *(int *)(a1 + 48) >= 0) )
  {
    return 0;
  }
  v6 = *(__int64 **)(a2 + 176);
  if ( v6 )
  {
    v7 = *v6;
    v8 = 0;
    *(_QWORD *)(a1 + 120) = v6[1];
    *(_DWORD *)(a1 + 184) = 0;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v7 + 64), &LockHandle);
    *(_DWORD *)(a1 + 16) |= 0x10000u;
    if ( *(_BYTE *)(v7 + 72) )
    {
      v8 = 1;
      goto LABEL_36;
    }
    v9 = (_QWORD *)(a1 + 168);
    v10 = a3;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentPrcb = KeGetCurrentPrcb();
    CurrentThread = CurrentPrcb->CurrentThread;
    if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
    {
      if ( CurrentThread->WaitBlockFill6[68] == 2 && CurrentThread->NextProcessor == KeGetPcr()->Prcb.Number )
      {
        v12 = 0;
        EtwTraceEnqueueWork(CurrentThread, a1 + 168, 1LL);
      }
      else
      {
        v12 = 0;
        EtwTraceEnqueueWork(CurrentThread, a1 + 168, 0LL);
      }
    }
    else
    {
      v12 = 0;
    }
    if ( v10 && (*(_BYTE *)(v7 + 1) & 2) != 0 )
      v10 = 0;
    if ( _interlockedbittestandset((volatile signed __int32 *)v7, 7u) )
    {
      do
      {
        if ( (++v12 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v12);
      }
      while ( (*(_DWORD *)v7 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)v7, 7u) );
    }
    if ( *(_QWORD *)(v7 + 16) == v7 + 8
      || *(_DWORD *)(v7 + 40) >= *(_DWORD *)(v7 + 44)
      || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v7 && CurrentThread->WaitReason == 15 )
    {
      v13 = (int)CurrentPrcb;
    }
    else
    {
      v13 = (int)CurrentPrcb;
      if ( (unsigned __int8)KiWakeQueueWaiter(CurrentPrcb, v7, a1 + 168) )
      {
LABEL_35:
        _InterlockedAnd((volatile signed __int32 *)v7, 0xFFFFFF7F);
        KiExitDispatcher(v13, 0, 1, v10, CurrentIrql);
LABEL_36:
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
          goto LABEL_42;
        }
        _m_prefetchw(&LockHandle);
        Next = LockHandle.LockQueue.Next;
        if ( !LockHandle.LockQueue.Next )
        {
          if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                               (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                               0LL,
                                               (signed __int64)&LockHandle) == &LockHandle )
            goto LABEL_42;
          Next = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle);
        }
        LockHandle.LockQueue.Next = 0LL;
        _InterlockedXor64((volatile signed __int64 *)&Next->Lock, 1uLL);
LABEL_42:
        __writecr8(LockHandle.OldIrql);
        if ( v8 )
          IopDropIrp(a1, *(_QWORD *)(a1 + 192));
        return 1;
      }
    }
    ++*(_DWORD *)(v7 + 4);
    v14 = *(_QWORD **)(v7 + 32);
    *v9 = v7 + 24;
    *(_QWORD *)(a1 + 176) = v14;
    if ( *v14 != v7 + 24 )
      __fastfail(3u);
    *v14 = v9;
    *(_QWORD *)(v7 + 32) = v9;
    goto LABEL_35;
  }
  IopCompleteRequest(a1 + 120, (unsigned int)&v18, (unsigned int)&v16, a1 + 192, (__int64)&v16);
  return 1;
}
