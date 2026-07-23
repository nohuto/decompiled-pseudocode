/*
 * XREFs of IopDeleteIoCompletionInternal @ 0x1400F4808
 * Callers:
 *     IopDeleteIoCompletion @ 0x1404FD55C (IopDeleteIoCompletion.c)
 *     IopCloseIoCompletion @ 0x1404FD564 (IopCloseIoCompletion.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     IopFreeWaitCompletionPacket @ 0x1400EC1F8 (IopFreeWaitCompletionPacket.c)
 *     KeRundownQueueEx @ 0x1400F49A8 (KeRundownQueueEx.c)
 *     KxWaitForLockChainValid @ 0x1400F7370 (KxWaitForLockChainValid.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1401D3988 (KiReleaseQueuedSpinLockInstrumented.c)
 *     IopFreeCompletionListPackets @ 0x1404FEDD0 (IopFreeCompletionListPackets.c)
 */

__int64 __fastcall IopDeleteIoCompletionInternal(__int64 a1, __int64 a2)
{
  char v2; // si
  char v4; // al
  __int64 result; // rax
  _QWORD *v6; // rbx
  _QWORD *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  _QWORD *v10; // rax
  _QWORD **v11; // rax
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  _QWORD *v13; // [rsp+20h] [rbp-30h] BYREF
  _QWORD **v14; // [rsp+28h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-20h] BYREF
  void *retaddr; // [rsp+58h] [rbp+8h]

  v2 = a2;
  if ( (_BYTE)a2 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 64), &LockHandle);
    v4 = 0;
    *(_BYTE *)(a1 + 72) = 1;
  }
  else
  {
    v4 = 1;
  }
  LOBYTE(a2) = v4;
  result = KeRundownQueueEx(a1, a2);
  v6 = (_QWORD *)result;
  if ( result )
  {
    v7 = *(_QWORD **)result;
    if ( (_QWORD *)v7[1] != v6 )
      __fastfail(3u);
    v13 = v7;
    v14 = (_QWORD **)v6;
    v7[1] = &v13;
    *v6 = &v13;
    v6 = v13;
    if ( v13 != &v13 )
    {
      do
      {
        v8 = (__int64)v6;
        v6 = (_QWORD *)*v6;
        if ( *(_BYTE *)(v8 + 16) == 2 )
        {
          v9 = *(_QWORD *)v8;
          v10 = *(_QWORD **)(v8 + 8);
          if ( *(_QWORD *)(*(_QWORD *)v8 + 8LL) != v8 || *v10 != v8 )
            __fastfail(3u);
          *v10 = v9;
          *(_QWORD *)(v9 + 8) = v10;
          IopFreeWaitCompletionPacket(v8, (void *)a1);
        }
      }
      while ( v6 != &v13 );
      v6 = v13;
    }
    result = (__int64)&v13;
    if ( v6 == &v13 )
    {
      v6 = 0LL;
    }
    else
    {
      v11 = v14;
      if ( (_QWORD **)v6[1] != &v13 || *v14 != &v13 )
        __fastfail(3u);
      *v14 = v6;
      v6[1] = v11;
      v14 = &v13;
      result = (__int64)&v13;
      v13 = &v13;
    }
  }
  if ( v2 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
LABEL_28:
      result = LockHandle.OldIrql;
      __writecr8(LockHandle.OldIrql);
      goto LABEL_29;
    }
    _m_prefetchw(&LockHandle);
    Next = LockHandle.LockQueue.Next;
    if ( !LockHandle.LockQueue.Next )
    {
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) == &LockHandle )
        goto LABEL_28;
      Next = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle);
    }
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)&Next->Lock, 1uLL);
    goto LABEL_28;
  }
LABEL_29:
  if ( v6 )
  {
    *(_QWORD *)v6[1] = 0LL;
    return IopFreeCompletionListPackets(v6);
  }
  return result;
}
