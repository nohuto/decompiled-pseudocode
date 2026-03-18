/*
 * XREFs of MiFreeModifiedReservations @ 0x1402218E8
 * Callers:
 *     MiModifiedPageWriter @ 0x140169194 (MiModifiedPageWriter.c)
 *     MiPageFileNoFreeSpace @ 0x140221DAC (MiPageFileNoFreeSpace.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14003E5A0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     MiInsertPageInList @ 0x1400C6750 (MiInsertPageInList.c)
 *     MiUnlinkPageFromList @ 0x1400C6FD0 (MiUnlinkPageFromList.c)
 *     MiReleasePageFileInfo @ 0x1400DD8D8 (MiReleasePageFileInfo.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall MiFreeModifiedReservations(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rsi
  __int64 v3; // r15
  __int64 i; // rbx
  __int64 v5; // rdi
  unsigned __int8 CurrentIrql; // r12
  unsigned int v7; // r14d
  __int64 v8; // rax
  unsigned __int64 v9; // rbx
  __int64 Next; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF
  __int64 retaddr; // [rsp+68h] [rbp+28h]

  result = *(unsigned __int16 *)(a1 + 164);
  if ( (result & 0x40) == 0 )
  {
    v2 = *(_QWORD *)(a1 + 216);
    v3 = 5 * (result & 0xF);
    result = 0xFFFFFFFFFLL;
    for ( i = *(_QWORD *)(v2 + 8 * v3 + 2128); i != 0xFFFFFFFFFLL; result = 0xFFFFFFFFFLL )
    {
      v5 = 48 * i - 0x58000000000LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      v7 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v7 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v7);
        }
        while ( *(__int64 *)(v5 + 24) < 0 );
      }
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v2 + 5664), &LockHandle);
      if ( i == *(_QWORD *)(v2 + 8 * v3 + 2128) )
      {
        MiUnlinkPageFromList(48 * i - 0x58000000000LL, 1LL);
        v9 = *(_QWORD *)(v5 + 16);
        *(_QWORD *)(v5 + 16) = v9 & 0xFFFFFFFFFFFFFFFDuLL;
        MiInsertPageInList(v5, 0x88u);
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          KiReleaseQueuedSpinLockInstrumented((volatile signed __int64 **)&LockHandle, retaddr);
LABEL_24:
          _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          MiReleasePageFileInfo((struct _KEVENT *)v2, v9, 1);
          goto LABEL_25;
        }
        _m_prefetchw(&LockHandle);
        Next = (__int64)LockHandle.LockQueue.Next;
        if ( !LockHandle.LockQueue.Next )
        {
          if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                               (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                               0LL,
                                               (signed __int64)&LockHandle) == &LockHandle )
            goto LABEL_24;
          Next = KxWaitForLockChainValid((__int64 *)&LockHandle);
        }
        LockHandle.LockQueue.Next = 0LL;
        _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
        goto LABEL_24;
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseQueuedSpinLockInstrumented((volatile signed __int64 **)&LockHandle, retaddr);
      }
      else
      {
        _m_prefetchw(&LockHandle);
        v8 = (__int64)LockHandle.LockQueue.Next;
        if ( LockHandle.LockQueue.Next )
          goto LABEL_16;
        if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                             (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                             0LL,
                                             (signed __int64)&LockHandle) != &LockHandle )
        {
          v8 = KxWaitForLockChainValid((__int64 *)&LockHandle);
LABEL_16:
          LockHandle.LockQueue.Next = 0LL;
          _InterlockedXor64((volatile signed __int64 *)(v8 + 8), 1uLL);
        }
      }
      _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_25:
      __writecr8(CurrentIrql);
      i = *(_QWORD *)(v2 + 8 * v3 + 2128);
    }
  }
  return result;
}
