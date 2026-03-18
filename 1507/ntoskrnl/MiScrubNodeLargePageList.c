/*
 * XREFs of MiScrubNodeLargePageList @ 0x14022D300
 * Callers:
 *     MiScrubNodeLargePages @ 0x1406A97C0 (MiScrubNodeLargePages.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14003E5A0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C80C0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertLargePageInNodeList @ 0x1400FFD48 (MiInsertLargePageInNodeList.c)
 *     MiUnlinkNodeLargePageHelper @ 0x1401025F8 (MiUnlinkNodeLargePageHelper.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 *     MiMakePageBad @ 0x140232438 (MiMakePageBad.c)
 *     MiScrubPage @ 0x140232D48 (MiScrubPage.c)
 */

__int64 __fastcall MiScrubNodeLargePageList(__int64 a1, int a2, int a3, unsigned int a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // edi
  __int64 v7; // r15
  __int64 v8; // rbx
  unsigned __int64 *v9; // r13
  unsigned __int8 CurrentIrql; // si
  KSPIN_LOCK *v11; // r12
  __int64 v12; // r14
  __int64 Next; // rax
  unsigned __int64 v14; // rbx
  _QWORD *v15; // rax
  _QWORD *v16; // rdx
  __int64 v17; // rax
  unsigned __int64 v18; // rdi
  int v19; // r12d
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // r13
  ULONG_PTR v22; // r14
  unsigned __int8 v23; // r12
  unsigned int v24; // r15d
  unsigned __int8 v25; // r15
  unsigned int v26; // r14d
  unsigned int v27; // r14d
  unsigned __int64 v28; // rbx
  unsigned __int8 v29; // si
  unsigned int v30; // edi
  __int64 v31; // rax
  unsigned __int64 v33; // [rsp+20h] [rbp-48h]
  unsigned __int64 v34; // [rsp+28h] [rbp-40h]
  unsigned __int64 *v35; // [rsp+30h] [rbp-38h]
  KSPIN_LOCK *SpinLock; // [rsp+38h] [rbp-30h]
  __int64 v37; // [rsp+40h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-20h] BYREF
  __int64 retaddr; // [rsp+A8h] [rbp+40h]

  v6 = 1;
  v7 = a1;
  v8 = a4 + 4 * (a3 + 2LL * a2);
  v9 = (unsigned __int64 *)(a1 + 16 * (v8 + 1));
  v35 = v9;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v11 = (KSPIN_LOCK *)(a1 + 1328);
  SpinLock = (KSPIN_LOCK *)(a1 + 1328);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 1328), &LockHandle);
  v12 = *(_QWORD *)(v7 + 8 * v8 + 272);
  if ( v12 )
  {
    while ( 1 )
    {
      if ( (unsigned __int64 *)*v9 == v9 )
        goto LABEL_69;
      if ( *(_DWORD *)(a6 + 4) )
      {
        v6 = 0;
        break;
      }
      if ( _interlockedbittestandset64((volatile signed __int32 *)(*v9 + 24), 0x3FuLL) )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          KiReleaseQueuedSpinLockInstrumented((volatile signed __int64 **)&LockHandle, retaddr);
LABEL_11:
          __writecr8(CurrentIrql);
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          KeAcquireInStackQueuedSpinLockAtDpcLevel(v11, &LockHandle);
          goto LABEL_68;
        }
        _m_prefetchw(&LockHandle);
        Next = (__int64)LockHandle.LockQueue.Next;
        if ( !LockHandle.LockQueue.Next )
        {
          if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                               (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                               0LL,
                                               (signed __int64)&LockHandle) == &LockHandle )
            goto LABEL_11;
          Next = KxWaitForLockChainValid((__int64 *)&LockHandle);
        }
        LockHandle.LockQueue.Next = 0LL;
        _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
        goto LABEL_11;
      }
      v14 = *v9;
      v15 = *(_QWORD **)*v9;
      if ( *(unsigned __int64 **)(*v9 + 8) != v9 || v15[1] != v14 )
        __fastfail(3u);
      v16 = (_QWORD *)*v9;
      *v9 = (unsigned __int64)v15;
      v15[1] = v9;
      MiUnlinkNodeLargePageHelper(v7, (__int64)v16);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseQueuedSpinLockInstrumented((volatile signed __int64 **)&LockHandle, retaddr);
      }
      else
      {
        _m_prefetchw(&LockHandle);
        v17 = (__int64)LockHandle.LockQueue.Next;
        if ( LockHandle.LockQueue.Next )
          goto LABEL_19;
        if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                             (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                             0LL,
                                             (signed __int64)&LockHandle) != &LockHandle )
        {
          v17 = KxWaitForLockChainValid((__int64 *)&LockHandle);
LABEL_19:
          LockHandle.LockQueue.Next = 0LL;
          _InterlockedXor64((volatile signed __int64 *)(v17 + 8), 1uLL);
        }
      }
      v18 = v14 + 24;
      v34 = v14 + 24;
      _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(CurrentIrql);
      v37 = v12 - 1;
      v19 = 0;
      v33 = v14 + 24576;
      v20 = v14;
      if ( v14 >= v14 + 24576 )
        goto LABEL_59;
      v21 = v14 + 24576;
      do
      {
        if ( (int)MiScrubPage(a5, 0LL, v14) < 0 )
        {
          if ( !v19 )
          {
            v22 = (__int64)(v20 + 0x58000000000LL) / 48;
            if ( v20 != v14 )
            {
              do
              {
                v23 = KeGetCurrentIrql();
                __writecr8(2uLL);
                v24 = 0;
                if ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
                {
                  do
                  {
                    if ( (++v24 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                      _mm_pause();
                    else
                      HvlNotifyLongSpinWait(v24);
                  }
                  while ( (*(_QWORD *)(v20 + 24) & 0x8000000000000000uLL) != 0
                       || _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) );
                }
                if ( (*(_BYTE *)(v20 + 35) & 0x40) != 0 )
                {
                  *(_BYTE *)(v20 + 34) = *(_BYTE *)(v20 + 34) & 0xF8 | 5;
                  MiMakePageBad(v20, 1LL);
                }
                else
                {
                  *(_QWORD *)(v20 + 40) &= 0xFFFFFFF000000000uLL;
                  MiInsertPageInFreeOrZeroedList(v22, 2);
                }
                _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                __writecr8(v23);
                v20 += 48LL;
                ++v22;
              }
              while ( v20 != v14 );
              v18 = v34;
              v21 = v33;
            }
          }
          v19 = 1;
          v25 = KeGetCurrentIrql();
          __writecr8(2uLL);
          v26 = 0;
          if ( _interlockedbittestandset64((volatile signed __int32 *)v18, 0x3FuLL) )
          {
            do
            {
              if ( (++v26 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v26);
            }
            while ( (*(_QWORD *)v18 & 0x8000000000000000uLL) != 0
                 || _interlockedbittestandset64((volatile signed __int32 *)v18, 0x3FuLL) );
          }
          *(_BYTE *)(v18 + 10) = *(_BYTE *)(v18 + 10) & 0xF8 | 5;
LABEL_55:
          MiMakePageBad(v14, 1LL);
          goto LABEL_56;
        }
        if ( v19 != 1 )
          goto LABEL_57;
        v25 = KeGetCurrentIrql();
        __writecr8(2uLL);
        v27 = 0;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v18, 0x3FuLL) )
        {
          do
          {
            if ( (++v27 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v27);
          }
          while ( (*(_QWORD *)v18 & 0x8000000000000000uLL) != 0
               || _interlockedbittestandset64((volatile signed __int32 *)v18, 0x3FuLL) );
        }
        if ( (*(_BYTE *)(v18 + 11) & 0x40) != 0 )
          goto LABEL_55;
        *(_QWORD *)(v18 + 16) &= 0xFFFFFFF000000000uLL;
        MiInsertPageInFreeOrZeroedList((__int64)(v18 + 0x57FFFFFFFE8LL) / 48, 2);
LABEL_56:
        _InterlockedAnd64((volatile signed __int64 *)v18, 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v25);
LABEL_57:
        v18 += 48LL;
        v14 += 48LL;
        v34 = v18;
      }
      while ( v14 < v21 );
      v9 = v35;
      if ( !v19 )
      {
LABEL_59:
        v28 = v14 - 24576;
        v29 = KeGetCurrentIrql();
        __writecr8(2uLL);
        v30 = 0;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v28 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v30 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v30);
          }
          while ( (*(_QWORD *)(v28 + 24) & 0x8000000000000000uLL) != 0
               || _interlockedbittestandset64((volatile signed __int32 *)(v28 + 24), 0x3FuLL) );
        }
        MiInsertLargePageInNodeList((__int64)(v28 + 0x58000000000LL) / 48, 0x200uLL, 1);
        _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v29);
      }
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      v11 = SpinLock;
      KeAcquireInStackQueuedSpinLockAtDpcLevel(SpinLock, &LockHandle);
      v12 = v37;
      v7 = a1;
LABEL_68:
      if ( !v12 )
      {
LABEL_69:
        v6 = 1;
        break;
      }
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
  {
    _m_prefetchw(&LockHandle);
    v31 = (__int64)LockHandle.LockQueue.Next;
    if ( !LockHandle.LockQueue.Next )
    {
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) == &LockHandle )
        goto LABEL_78;
      v31 = KxWaitForLockChainValid((__int64 *)&LockHandle);
    }
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v31 + 8), 1uLL);
    goto LABEL_78;
  }
  KiReleaseQueuedSpinLockInstrumented((volatile signed __int64 **)&LockHandle, retaddr);
LABEL_78:
  __writecr8(CurrentIrql);
  return v6;
}
