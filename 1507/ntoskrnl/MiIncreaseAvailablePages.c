/*
 * XREFs of MiIncreaseAvailablePages @ 0x1400FFF20
 * Callers:
 *     MiInsertLargePageInNodeList @ 0x1400FFD48 (MiInsertLargePageInNodeList.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14003E5A0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     MiUpdateAvailableEvents @ 0x14015FA18 (MiUpdateAvailableEvents.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 */

volatile signed __int64 *__fastcall MiIncreaseAvailablePages(__int64 a1, unsigned __int64 a2)
{
  volatile signed __int64 *result; // rax
  unsigned __int64 v5; // rdi
  int v6; // ecx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdi
  int v9; // eax
  __int64 v10; // rbx
  unsigned __int64 v11; // rdi
  __int64 v12; // rbx
  __int64 Next; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF
  void *retaddr; // [rsp+58h] [rbp+18h] BYREF

  result = (volatile signed __int64 *)&retaddr;
  if ( a2 == 1 )
  {
    v8 = _InterlockedIncrement64((volatile signed __int64 *)(a1 + 5504));
    if ( v8 <= 0x80 )
    {
      if ( v8 == 128 )
      {
        v9 = 1;
      }
      else
      {
        if ( v8 != 2 )
          goto LABEL_26;
        v9 = 0;
      }
      v10 = 32LL * v9;
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 4032), &LockHandle);
      KeSetEvent((PRKEVENT)(v10 + a1 + 4040), 0, 0);
      ++*(_DWORD *)(v10 + a1 + 4064);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
      {
        _m_prefetchw(&LockHandle);
        result = (volatile signed __int64 *)LockHandle.LockQueue.Next;
        if ( !LockHandle.LockQueue.Next )
        {
          result = (volatile signed __int64 *)_InterlockedCompareExchange64(
                                                (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                                0LL,
                                                (signed __int64)&LockHandle);
          if ( result == (volatile signed __int64 *)&LockHandle )
            goto LABEL_26;
          result = (volatile signed __int64 *)KxWaitForLockChainValid((__int64 *)&LockHandle);
        }
        LockHandle.LockQueue.Next = 0LL;
        _InterlockedXor64(result + 1, 1uLL);
        goto LABEL_26;
      }
      result = (volatile signed __int64 *)KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
    }
LABEL_26:
    v11 = v8 - 1;
    if ( v11 != *(_QWORD *)(a1 + 4104) && v11 != *(_QWORD *)(a1 + 4112) )
      return result;
    return (volatile signed __int64 *)MiUpdateAvailableEvents(a1);
  }
  v5 = a2 + _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 5504), a2);
  v6 = 2;
  if ( v5 >= 0x80 && v5 - a2 < 0x80 )
    v6 = 1;
  if ( v5 >= 2 && v5 - a2 < 2 )
    v6 = 0;
  if ( v6 != 2 )
  {
    v12 = 32LL * v6;
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 4032), &LockHandle);
    KeSetEvent((PRKEVENT)(v12 + a1 + 4040), 0, 0);
    ++*(_DWORD *)(v12 + a1 + 4064);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
      goto LABEL_9;
    }
    _m_prefetchw(&LockHandle);
    Next = (__int64)LockHandle.LockQueue.Next;
    if ( !LockHandle.LockQueue.Next )
    {
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) == &LockHandle )
        goto LABEL_9;
      Next = KxWaitForLockChainValid((__int64 *)&LockHandle);
    }
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
  }
LABEL_9:
  v7 = *(_QWORD *)(a1 + 4112);
  if ( v5 > v7 && v5 - a2 <= v7 )
    return (volatile signed __int64 *)MiUpdateAvailableEvents(a1);
  result = *(volatile signed __int64 **)(a1 + 4104);
  if ( v5 > (unsigned __int64)result && v5 - a2 <= (unsigned __int64)result )
    return (volatile signed __int64 *)MiUpdateAvailableEvents(a1);
  return result;
}
