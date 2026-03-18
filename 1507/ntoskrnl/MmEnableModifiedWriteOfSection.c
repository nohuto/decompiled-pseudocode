/*
 * XREFs of MmEnableModifiedWriteOfSection @ 0x140216DA8
 * Callers:
 *     CcClearPrivateWriteFile @ 0x1401DD72C (CcClearPrivateWriteFile.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14003E5A0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     MiLockSectionControlArea @ 0x140086F60 (MiLockSectionControlArea.c)
 *     MiInsertPageInList @ 0x1400C6750 (MiInsertPageInList.c)
 *     MiUnlinkPageFromList @ 0x1400C6FD0 (MiUnlinkPageFromList.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 *     MiGetPrototypePteDirect @ 0x140225B58 (MiGetPrototypePteDirect.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

char __fastcall MmEnableModifiedWriteOfSection(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // rdi
  int v3; // eax
  _DWORD *v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 i; // rax
  __int64 Next; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF
  __int64 retaddr; // [rsp+58h] [rbp+18h]
  unsigned __int8 CurrentIrql; // [rsp+68h] [rbp+28h] BYREF

  v1 = MiLockSectionControlArea(a1, 1, &CurrentIrql);
  v2 = v1;
  if ( v1 )
  {
    v3 = *(_DWORD *)(v1 + 56);
    if ( (v3 & 8) == 0 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v2 + 72, retaddr);
      else
        *(_DWORD *)(v2 + 72) = 0;
      goto LABEL_36;
    }
    v4 = (_DWORD *)(v2 + 72);
    *(_DWORD *)(v2 + 56) = v3 & 0xFFFFFFF7;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v4, retaddr);
    else
      *v4 = 0;
    __writecr8(CurrentIrql);
    if ( qword_140355350 == 0xFFFFFFFFFLL )
      goto LABEL_37;
LABEL_28:
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    KeAcquireInStackQueuedSpinLockAtDpcLevel(&qword_140355360, &LockHandle);
    for ( i = qword_140355350; i != 0xFFFFFFFFFLL; i = *(_QWORD *)v5 & 0xFFFFFFFFFLL )
    {
      v5 = 48 * i - 0x58000000000LL;
      if ( v2 == *(_QWORD *)MiGetPrototypePteDirect(*(_QWORD *)(v5 + 16), v6, v7, v8) )
      {
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
        {
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          {
            KiReleaseQueuedSpinLockInstrumented((volatile signed __int64 **)&LockHandle, retaddr);
LABEL_27:
            __writecr8(CurrentIrql);
            goto LABEL_28;
          }
          _m_prefetchw(&LockHandle);
          Next = (__int64)LockHandle.LockQueue.Next;
          if ( !LockHandle.LockQueue.Next )
          {
            if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                                 (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                                 0LL,
                                                 (signed __int64)&LockHandle) == &LockHandle )
              goto LABEL_27;
            Next = KxWaitForLockChainValid((__int64 *)&LockHandle);
          }
          LockHandle.LockQueue.Next = 0LL;
          _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
          goto LABEL_27;
        }
        MiUnlinkPageFromList(v5, 1LL);
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          KiReleaseQueuedSpinLockInstrumented((volatile signed __int64 **)&LockHandle, retaddr);
LABEL_26:
          MiInsertPageInList(v5, 8u);
          _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          goto LABEL_27;
        }
        _m_prefetchw(&LockHandle);
        v11 = (__int64)LockHandle.LockQueue.Next;
        if ( !LockHandle.LockQueue.Next )
        {
          if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                               (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                               0LL,
                                               (signed __int64)&LockHandle) == &LockHandle )
            goto LABEL_26;
          v11 = KxWaitForLockChainValid((__int64 *)&LockHandle);
        }
        LockHandle.LockQueue.Next = 0LL;
        _InterlockedXor64((volatile signed __int64 *)(v11 + 8), 1uLL);
        goto LABEL_26;
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented((volatile signed __int64 **)&LockHandle, retaddr);
LABEL_36:
      __writecr8(CurrentIrql);
LABEL_37:
      LOBYTE(v1) = 1;
      return v1;
    }
    _m_prefetchw(&LockHandle);
    v12 = (__int64)LockHandle.LockQueue.Next;
    if ( !LockHandle.LockQueue.Next )
    {
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) == &LockHandle )
        goto LABEL_36;
      v12 = KxWaitForLockChainValid((__int64 *)&LockHandle);
    }
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v12 + 8), 1uLL);
    goto LABEL_36;
  }
  return v1;
}
