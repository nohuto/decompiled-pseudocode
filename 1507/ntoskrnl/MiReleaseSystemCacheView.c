/*
 * XREFs of MiReleaseSystemCacheView @ 0x14006B8A0
 * Callers:
 *     MmUnmapViewInSystemCache @ 0x140098640 (MmUnmapViewInSystemCache.c)
 * Callees:
 *     MiChargeWsles @ 0x14003EE30 (MiChargeWsles.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     InsertTailListPte @ 0x14006BAEC (InsertTailListPte.c)
 *     RemoveListEntryPte @ 0x14006BBFC (RemoveListEntryPte.c)
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     MiInsertTbFlushEntry @ 0x1400AE330 (MiInsertTbFlushEntry.c)
 *     MiReturnSystemVa @ 0x140108060 (MiReturnSystemVa.c)
 *     MI_GET_SYSTEM_CACHE_REVERSE_MAP @ 0x140116EB8 (MI_GET_SYSTEM_CACHE_REVERSE_MAP.c)
 *     MiWaitForSystemCacheViewFlush @ 0x1401396E8 (MiWaitForSystemCacheViewFlush.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 *     MI_DECREMENT_SYSTEM_CACHE_VIEW_COUNT @ 0x1402176FC (MI_DECREMENT_SYSTEM_CACHE_VIEW_COUNT.c)
 *     MI_SET_SYSTEM_CACHE_REVERSE_MAP @ 0x14021781C (MI_SET_SYSTEM_CACHE_REVERSE_MAP.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiGetPteLink @ 0x140225B3C (MiGetPteLink.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiReleaseSystemCacheView(__int64 a1)
{
  __int64 v2; // rsi
  unsigned __int64 v3; // r14
  unsigned __int64 v4; // rdi
  _QWORD *v5; // r8
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  __int64 result; // rax
  _QWORD *v8; // rdi
  __int64 v9; // r14
  void *v10; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-158h] BYREF
  int v12; // [rsp+40h] [rbp-138h] BYREF
  __int16 v13; // [rsp+44h] [rbp-134h]
  __int64 v14; // [rsp+48h] [rbp-130h]
  __int64 v15; // [rsp+50h] [rbp-128h]
  __int64 v16; // [rsp+58h] [rbp-120h]
  _QWORD v17[8]; // [rsp+100h] [rbp-78h] BYREF
  void *retaddr; // [rsp+178h] [rbp+0h]

  MiChargeWsles((__int64)dword_14034FD40, -64LL, 0);
  v2 = 0LL;
  v3 = 0LL;
  KeAcquireInStackQueuedSpinLock(&qword_14034EEA8, &LockHandle);
  if ( (unsigned __int8)MI_DECREMENT_SYSTEM_CACHE_VIEW_COUNT(a1 << 25 >> 16) )
  {
    InsertTailListPte(&qword_14034EE90, a1);
  }
  else
  {
    v3 = a1 & 0xFFFFFFFFFFFFF000uLL;
    v4 = v3;
    if ( v3 < v3 + 4096 )
    {
      do
      {
        if ( v4 != a1 )
        {
          RemoveListEntryPte(&qword_14034EE90, v4);
          if ( MiGetPteLink(*(_QWORD *)(v4 + 24)) == 1 )
          {
            v17[v2] = v4;
            v2 = (unsigned int)(v2 + 1);
          }
          else
          {
            *v5 = 0LL;
            if ( (unsigned __int64)(v5 + 0x12090482600LL) <= 0x7F8 )
              MiWritePteShadow(v5, 0LL);
          }
        }
        v4 += 512LL;
      }
      while ( v4 < (a1 & 0xFFFFFFFFFFFFF000uLL) + 4096 );
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
    goto LABEL_16;
  }
  _m_prefetchw(&LockHandle);
  Next = LockHandle.LockQueue.Next;
  if ( !LockHandle.LockQueue.Next )
  {
    if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                         (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                         0LL,
                                         (signed __int64)&LockHandle) == &LockHandle )
      goto LABEL_16;
    Next = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle);
  }
  LockHandle.LockQueue.Next = 0LL;
  _InterlockedXor64((volatile signed __int64 *)&Next->Lock, 1uLL);
LABEL_16:
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  if ( v3 )
  {
    if ( (_DWORD)v2 )
    {
      v8 = v17;
      do
      {
        MiWaitForSystemCacheViewFlush(*v8++);
        --v2;
      }
      while ( v2 );
    }
    v9 = v3 << 25;
    v14 = 20LL;
    v12 = 0;
    v13 = 0;
    v15 = 0LL;
    v16 = 0LL;
    MiInsertTbFlushEntry(&v12, v9 >> 16, 512LL, 0LL);
    v10 = (void *)MI_GET_SYSTEM_CACHE_REVERSE_MAP(v9 >> 16);
    ExFreePoolWithTag(v10, 0);
    MI_SET_SYSTEM_CACHE_REVERSE_MAP(v9 >> 16, 0LL);
    return MiReturnSystemVa(v9 >> 16, (v9 + 0x2000000000LL) >> 16, 8LL, &v12);
  }
  return result;
}
