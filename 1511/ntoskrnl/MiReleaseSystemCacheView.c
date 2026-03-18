/*
 * XREFs of MiReleaseSystemCacheView @ 0x1400AE7E8
 * Callers:
 *     MmUnmapViewInSystemCache @ 0x1400ADB30 (MmUnmapViewInSystemCache.c)
 * Callees:
 *     MiReturnSystemVa @ 0x140015490 (MiReturnSystemVa.c)
 *     MiInsertTbFlushEntry @ 0x1400606D0 (MiInsertTbFlushEntry.c)
 *     MiChargeWsles @ 0x140061CF0 (MiChargeWsles.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     InsertTailListPte @ 0x1400B2424 (InsertTailListPte.c)
 *     KxWaitForLockChainValid @ 0x1400C6540 (KxWaitForLockChainValid.c)
 *     RemoveListEntryPte @ 0x1400EA358 (RemoveListEntryPte.c)
 *     MiWaitForSystemCacheViewFlush @ 0x14012D628 (MiWaitForSystemCacheViewFlush.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1401C49A4 (KiReleaseQueuedSpinLockInstrumented.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401CE7C4 (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MI_SET_SYSTEM_CACHE_REVERSE_MAP @ 0x1401D5784 (MI_SET_SYSTEM_CACHE_REVERSE_MAP.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiReleaseSystemCacheView(__int64 a1)
{
  __int64 v2; // r14
  unsigned __int64 v3; // rsi
  __int64 v4; // rax
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r13
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  __int64 result; // rax
  _QWORD *v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v14; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v15; // [rsp+40h] [rbp-C0h] BYREF
  int v16; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v17; // [rsp+54h] [rbp-ACh]
  __int64 v18; // [rsp+58h] [rbp-A8h]
  __int64 v19; // [rsp+60h] [rbp-A0h]
  __int64 v20; // [rsp+68h] [rbp-98h]
  _QWORD v21[8]; // [rsp+110h] [rbp+10h] BYREF
  void *retaddr; // [rsp+188h] [rbp+88h]

  MiChargeWsles((ULONG_PTR)&dword_1402FF880, -64LL, 0LL);
  v2 = 0LL;
  v3 = 0LL;
  KeAcquireInStackQueuedSpinLock(&qword_1402FE9E8, &LockHandle);
  v14 = MI_READ_PTE_LOCK_FREE((((a1 << 25 >> 16) & 0xFFFFFFE00000uLL) >> 18) - 0x904C0000000LL);
  v4 = MI_GET_PFN_FROM_PTE(&v14);
  if ( (*(_BYTE *)(v4 + 39))-- == 1 )
  {
    v3 = a1 & 0xFFFFFFFFFFFFF000uLL;
    v6 = a1 & 0xFFFFFFFFFFFFF000uLL;
    v7 = (a1 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    if ( (a1 & 0xFFFFFFFFFFFFF000uLL) < v7 )
    {
      do
      {
        if ( v6 != a1 )
        {
          RemoveListEntryPte(&qword_1402FE9D0, v6);
          if ( (*(_QWORD *)(v6 + 24) & 0xFFFFFFFFF0000000uLL) == 0x10000000 )
          {
            v21[v2] = v6;
            v2 = (unsigned int)(v2 + 1);
          }
          else
          {
            *(_QWORD *)(v6 + 24) = 0LL;
            if ( (unsigned int)MiPteInShadowRange(v6 + 24) )
              MiWritePteShadow(v6 + 24, 0LL);
          }
        }
        v6 += 512LL;
      }
      while ( v6 < v7 );
    }
  }
  else
  {
    InsertTailListPte(&qword_1402FE9D0, a1);
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
      v10 = v21;
      do
      {
        MiWaitForSystemCacheViewFlush(*v10++);
        --v2;
      }
      while ( v2 );
    }
    v11 = v3 << 25;
    v18 = 20LL;
    v16 = 0;
    v17 = 0;
    v19 = 0LL;
    v20 = 0LL;
    MiInsertTbFlushEntry((__int64)&v16, v11 >> 16, 512LL, 0);
    v15 = MI_READ_PTE_LOCK_FREE((((unsigned __int64)(v11 >> 16) >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
    v12 = MI_GET_PFN_FROM_PTE(&v15);
    ExFreePoolWithTag((PVOID)(*(_QWORD *)(v12 + 16) + 40 * (((unsigned __int64)(v11 >> 16) >> 18) & 7)), 0);
    MI_SET_SYSTEM_CACHE_REVERSE_MAP(v11 >> 16, 0LL);
    return MiReturnSystemVa(v11 >> 16, (v11 + 0x2000000000LL) >> 16, 8, (__int64)&v16);
  }
  return result;
}
