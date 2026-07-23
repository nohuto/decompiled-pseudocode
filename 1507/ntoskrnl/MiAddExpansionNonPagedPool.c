/*
 * XREFs of MiAddExpansionNonPagedPool @ 0x140168300
 * Callers:
 *     MiFreeInitializationCode @ 0x140573D08 (MiFreeInitializationCode.c)
 *     MxConsumeLargePageSlush @ 0x1407FB3AC (MxConsumeLargePageSlush.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     MiChangePageAttribute @ 0x1400E5678 (MiChangePageAttribute.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 *     MiMakeDemandZeroPte @ 0x140225C14 (MiMakeDemandZeroPte.c)
 */

void __fastcall MiAddExpansionNonPagedPool(__int64 a1, __int64 a2)
{
  unsigned int v2; // r15d
  __int64 DemandZeroPte; // rbx
  __int64 v4; // r8
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // r13
  _QWORD *v7; // r14
  __int64 v8; // rdx
  __int64 v9; // r12
  unsigned int v10; // edi
  _SLIST_HEADER *v11; // rdi
  __int64 Next; // rax
  __int64 v13; // rax
  char v14; // cl
  char v15; // al
  _SLIST_HEADER *v16; // rbx
  __int64 v17; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF
  void *retaddr; // [rsp+78h] [rbp+38h]
  unsigned __int8 CurrentIrql; // [rsp+88h] [rbp+48h]
  unsigned __int64 v21; // [rsp+90h] [rbp+50h]

  if ( !a2 )
    return;
  v2 = 0;
  DemandZeroPte = MiMakeDemandZeroPte(4LL);
  v5 = 48 * v4 - 0x58000000000LL;
  v6 = 0LL;
  v7 = 0LL;
  v9 = 0LL;
  v21 = v5 + 48 * v8;
  v10 = -1;
  do
  {
    if ( (_WORD)v10 != ((*(_QWORD *)(v5 + 40) >> 58) & 0x3F) )
    {
      if ( !v9 )
      {
LABEL_12:
        v10 = (*(_QWORD *)(v5 + 40) >> 58) & 0x3F;
        goto LABEL_13;
      }
      v11 = &qword_14034EB70[26 * v10];
      KeAcquireInStackQueuedSpinLock(&v11[19].Region, &LockHandle);
      *v7 = v11[20].Alignment;
      v11[19].Alignment += v9;
      v11[20].Alignment = v6;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
LABEL_11:
        __writecr8(LockHandle.OldIrql);
        v9 = 0LL;
        v6 = 0LL;
        v7 = 0LL;
        goto LABEL_12;
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
LABEL_13:
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v2 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v2);
      }
      while ( *(__int64 *)(v5 + 24) < 0 );
    }
    v13 = *(_QWORD *)(v5 + 24);
    *(_BYTE *)(v5 + 34) &= 0xC7u;
    v14 = *(_BYTE *)(v5 + 34);
    *(_QWORD *)(v5 + 24) = v13 & 0xC000000000000000uLL | 1;
    LOBYTE(v13) = *(_BYTE *)(v5 + 35) & 0xDF;
    *(_WORD *)(v5 + 32) = 1;
    *(_QWORD *)(v5 + 16) = DemandZeroPte;
    *(_BYTE *)(v5 + 35) = v13 | 0x10;
    *(_QWORD *)(v5 + 40) &= 0xFC3FFFF000000000uLL;
    if ( (v14 & 0xC0) != 0x40 )
      MiChangePageAttribute(v5, 1u, 3LL, 1LL);
    v15 = *(_BYTE *)(v5 + 34) & 0xFE;
    *(_QWORD *)(v5 + 8) = -8LL;
    *(_BYTE *)(v5 + 34) = v15 | 6;
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(CurrentIrql);
    v2 = 0;
    *(_QWORD *)v5 = v6;
    v6 = v5;
    if ( !v7 )
      v7 = (_QWORD *)v5;
    ++v9;
    v5 += 48LL;
  }
  while ( v5 < v21 );
  v16 = &qword_14034EB70[26 * v10];
  KeAcquireInStackQueuedSpinLock(&v16[19].Region, &LockHandle);
  *v7 = v16[20].Alignment;
  v16[19].Alignment += v9;
  v16[20].Alignment = v6;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
    goto LABEL_31;
  }
  _m_prefetchw(&LockHandle);
  v17 = (__int64)LockHandle.LockQueue.Next;
  if ( LockHandle.LockQueue.Next )
  {
LABEL_30:
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v17 + 8), 1uLL);
  }
  else if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                            (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                            0LL,
                                            (signed __int64)&LockHandle) != &LockHandle )
  {
    v17 = KxWaitForLockChainValid((__int64 *)&LockHandle);
    goto LABEL_30;
  }
LABEL_31:
  __writecr8(LockHandle.OldIrql);
}
