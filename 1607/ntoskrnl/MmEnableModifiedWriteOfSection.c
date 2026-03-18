/*
 * XREFs of MmEnableModifiedWriteOfSection @ 0x1401E5C5C
 * Callers:
 *     CcClearPrivateWriteFile @ 0x1401B1FD8 (CcClearPrivateWriteFile.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14001BCF0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     MiLockSectionControlArea @ 0x1400218CC (MiLockSectionControlArea.c)
 *     ExReleaseSpinLockExclusive @ 0x14002E9A0 (ExReleaseSpinLockExclusive.c)
 *     MiUnlinkPageFromList @ 0x140065A40 (MiUnlinkPageFromList.c)
 *     MiPartitionIdToPointer @ 0x1400680A0 (MiPartitionIdToPointer.c)
 *     KxReleaseQueuedSpinLock @ 0x140069570 (KxReleaseQueuedSpinLock.c)
 *     MiInsertPageInList @ 0x1400695D0 (MiInsertPageInList.c)
 *     MiGetPrototypePteDirect @ 0x1401F26B0 (MiGetPrototypePteDirect.c)
 */

char __fastcall MmEnableModifiedWriteOfSection(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // rdi
  int v3; // ecx
  KIRQL v4; // dl
  int *v5; // rsi
  unsigned __int8 CurrentIrql; // r14
  __int64 v7; // rbx
  __int64 i; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF
  KIRQL OldIrql; // [rsp+78h] [rbp+38h] BYREF

  v1 = MiLockSectionControlArea(a1, 1, &OldIrql);
  v2 = v1;
  if ( v1 )
  {
    v3 = *(_DWORD *)(v1 + 56);
    v4 = OldIrql;
    if ( (v3 & 8) != 0 )
    {
      *(_DWORD *)(v1 + 56) = v3 & 0xFFFFFFF7;
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v1 + 72), v4);
      v5 = MiPartitionIdToPointer(*(_WORD *)(v2 + 60) & 0x3FF);
      if ( *((_QWORD *)v5 + 914) != 0xFFFFFFFFFLL )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        OldIrql = CurrentIrql;
LABEL_12:
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)v5 + 916, &LockHandle);
        for ( i = *((_QWORD *)v5 + 914); i != 0xFFFFFFFFFLL; i = *(_QWORD *)v7 & 0xFFFFFFFFFLL )
        {
          v7 = 48 * i - 0x58000000000LL;
          if ( v2 == *(_QWORD *)MiGetPrototypePteDirect(*(_QWORD *)(v7 + 16)) )
          {
            if ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
            {
              KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
            }
            else
            {
              MiUnlinkPageFromList(v7, 1);
              KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
              MiInsertPageInList(v7, 8u);
              _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            }
            __writecr8(OldIrql);
            OldIrql = KeGetCurrentIrql();
            CurrentIrql = OldIrql;
            __writecr8(2uLL);
            goto LABEL_12;
          }
        }
        KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
        __writecr8(CurrentIrql);
      }
    }
    else
    {
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v1 + 72), OldIrql);
    }
    LOBYTE(v1) = 1;
  }
  return v1;
}
