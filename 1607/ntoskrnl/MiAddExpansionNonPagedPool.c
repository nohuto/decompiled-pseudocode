/*
 * XREFs of MiAddExpansionNonPagedPool @ 0x1401436D4
 * Callers:
 *     MiFreeInitializationCode @ 0x14047C33C (MiFreeInitializationCode.c)
 *     MxConsumeLargePageSlush @ 0x1407D0D5C (MxConsumeLargePageSlush.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiChangePageAttribute @ 0x14001CC08 (MiChangePageAttribute.c)
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     KxWaitForLockChainValid @ 0x1400F7370 (KxWaitForLockChainValid.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1401D3988 (KiReleaseQueuedSpinLockInstrumented.c)
 *     MiMakeDemandZeroPte @ 0x1401F2560 (MiMakeDemandZeroPte.c)
 */

void __fastcall MiAddExpansionNonPagedPool(__int64 a1, __int64 a2)
{
  __int64 DemandZeroPte; // rbx
  __int64 v3; // r8
  unsigned __int64 v4; // rsi
  __int64 v5; // rdx
  unsigned int v6; // r9d
  char v7; // cl
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // r12
  unsigned int v10; // edi
  unsigned __int64 v11; // r14
  __int64 v12; // r15
  _SLIST_HEADER *v13; // rdi
  __int64 Next; // rax
  unsigned __int64 v15; // rcx
  char v16; // al
  _SLIST_HEADER *v17; // rbx
  __int64 v18; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF
  void *retaddr; // [rsp+68h] [rbp+28h]
  unsigned __int8 v21; // [rsp+78h] [rbp+38h]

  if ( !a2 )
    return;
  DemandZeroPte = MiMakeDemandZeroPte(4LL, a2, a1, 0LL);
  v4 = 48 * v3 - 0x58000000000LL;
  v7 = v6 + 63;
  v8 = v4 + 48 * v5;
  v9 = v6;
  v10 = -1;
  v11 = v6;
  v12 = v6;
  do
  {
    if ( (_WORD)v10 == ((unsigned __int8)v7 & (*(_QWORD *)(v4 + 40) >> 58)) )
      goto LABEL_13;
    if ( v12 )
    {
      v13 = &qword_1403269F0[26 * v10];
      KeAcquireInStackQueuedSpinLock(&v13[19].Region, &LockHandle);
      *(_QWORD *)v11 = v13[20].Alignment;
      v13[19].Alignment += v12;
      v13[20].Alignment = v9;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
LABEL_11:
        __writecr8(LockHandle.OldIrql);
        v12 = 0LL;
        v9 = 0LL;
        v11 = 0LL;
        v7 = 63;
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
LABEL_12:
    v10 = (unsigned __int8)v7 & (*(_QWORD *)(v4 + 40) >> 58);
LABEL_13:
    v21 = MiLockPageInline(v4);
    *(_QWORD *)(v4 + 40) &= ~0x200000000000000uLL;
    *(_BYTE *)(v4 + 34) &= 0xC7u;
    *(_BYTE *)(v4 + 35) &= ~0x20u;
    v15 = *(_QWORD *)(v4 + 24) & 0xC000000000000001uLL;
    *(_WORD *)(v4 + 32) = 1;
    *(_QWORD *)(v4 + 16) = DemandZeroPte;
    *(_QWORD *)(v4 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
    *(_QWORD *)(v4 + 24) = v15 | 1;
    *(_BYTE *)(v4 + 35) |= 0x10u;
    *(_QWORD *)(v4 + 40) &= 0xFFFFFFF000000000uLL;
    if ( (*(_BYTE *)(v4 + 34) & 0xC0) != 0x40 )
      MiChangePageAttribute(v4, 1u, 3);
    v16 = *(_BYTE *)(v4 + 34) & 0xFE;
    *(_QWORD *)(v4 + 8) = -8LL;
    *(_BYTE *)(v4 + 34) = v16 | 6;
    _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v21);
    *(_QWORD *)v4 = v9;
    v9 = v4;
    v7 = 63;
    if ( !v11 )
      v11 = v4;
    ++v12;
    v4 += 48LL;
  }
  while ( v4 < v8 );
  v17 = &qword_1403269F0[26 * v10];
  KeAcquireInStackQueuedSpinLock(&v17[19].Region, &LockHandle);
  *(_QWORD *)v11 = v17[20].Alignment;
  v17[19].Alignment += v12;
  v17[20].Alignment = v9;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
    goto LABEL_24;
  }
  _m_prefetchw(&LockHandle);
  v18 = (__int64)LockHandle.LockQueue.Next;
  if ( LockHandle.LockQueue.Next )
  {
LABEL_23:
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v18 + 8), 1uLL);
  }
  else if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                            (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                            0LL,
                                            (signed __int64)&LockHandle) != &LockHandle )
  {
    v18 = KxWaitForLockChainValid((__int64 *)&LockHandle);
    goto LABEL_23;
  }
LABEL_24:
  __writecr8(LockHandle.OldIrql);
}
