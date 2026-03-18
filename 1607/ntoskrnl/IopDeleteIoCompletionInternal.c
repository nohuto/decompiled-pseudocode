/*
 * XREFs of IopDeleteIoCompletionInternal @ 0x1400F69B8
 * Callers:
 *     IopDeleteIoCompletion @ 0x14051A16C (IopDeleteIoCompletion.c)
 *     IopCloseIoCompletion @ 0x14051A174 (IopCloseIoCompletion.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14001BD40 (KeAcquireInStackQueuedSpinLock.c)
 *     IopFreeWaitCompletionPacket @ 0x1400EE378 (IopFreeWaitCompletionPacket.c)
 *     KeRundownQueueEx @ 0x1400F6B68 (KeRundownQueueEx.c)
 *     KxWaitForLockChainValid @ 0x1400F9530 (KxWaitForLockChainValid.c)
 *     EvaluateCurrentState @ 0x1401B8354 (EvaluateCurrentState.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1401D3B5C (KiReleaseQueuedSpinLockInstrumented.c)
 *     IopFreeCompletionListPackets @ 0x14051B9E0 (IopFreeCompletionListPackets.c)
 */

__int64 __fastcall IopDeleteIoCompletionInternal(__int64 a1, __int64 a2)
{
  char v2; // si
  char v4; // al
  __int64 v5; // rbx
  __int64 result; // rax
  __int64 v7; // rax
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
  v5 = KeRundownQueueEx(a1, a2);
  result = EvaluateCurrentState(&g_Feature_2544326971_59422651_FeatureDescriptorDetails);
  if ( (_DWORD)result && v5 )
  {
    v7 = *(_QWORD *)v5;
    if ( *(_QWORD *)(*(_QWORD *)v5 + 8LL) != v5 )
      __fastfail(3u);
    v13 = *(_QWORD **)v5;
    v14 = (_QWORD **)v5;
    *(_QWORD *)(v7 + 8) = &v13;
    *(_QWORD *)v5 = &v13;
    v5 = (__int64)v13;
    if ( v13 != &v13 )
    {
      do
      {
        v8 = v5;
        v5 = *(_QWORD *)v5;
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
      while ( (_QWORD **)v5 != &v13 );
      v5 = (__int64)v13;
    }
    result = (__int64)&v13;
    if ( (_QWORD **)v5 == &v13 )
    {
      v5 = 0LL;
    }
    else
    {
      v11 = v14;
      if ( *(_QWORD ***)(v5 + 8) != &v13 || *v14 != &v13 )
        __fastfail(3u);
      *v14 = (_QWORD *)v5;
      *(_QWORD *)(v5 + 8) = v11;
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
LABEL_29:
      result = LockHandle.OldIrql;
      __writecr8(LockHandle.OldIrql);
      goto LABEL_30;
    }
    _m_prefetchw(&LockHandle);
    Next = LockHandle.LockQueue.Next;
    if ( !LockHandle.LockQueue.Next )
    {
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) == &LockHandle )
        goto LABEL_29;
      Next = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle);
    }
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)&Next->Lock, 1uLL);
    goto LABEL_29;
  }
LABEL_30:
  if ( v5 )
  {
    **(_QWORD **)(v5 + 8) = 0LL;
    return IopFreeCompletionListPackets((PVOID)v5);
  }
  return result;
}
