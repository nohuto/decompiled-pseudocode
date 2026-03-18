/*
 * XREFs of ExpWorkerFactoryCheckCreate @ 0x1400C59E0
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x14007F570 (NtWaitForWorkViaWorkerFactory.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1400C54A0 (NtReleaseWorkerFactoryWorker.c)
 *     NtSetInformationWorkerFactory @ 0x1400C5D50 (NtSetInformationWorkerFactory.c)
 *     ExpWorkerFactoryManagerThread @ 0x14013631C (ExpWorkerFactoryManagerThread.c)
 * Callees:
 *     ExpLeaveWorkerFactoryAwayMode @ 0x14002E49C (ExpLeaveWorkerFactoryAwayMode.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1400B1C70 (KxWaitForLockOwnerShip.c)
 *     KxWaitForLockChainValid @ 0x1400C6540 (KxWaitForLockChainValid.c)
 *     ExpCheckThreadHistory @ 0x1400C6574 (ExpCheckThreadHistory.c)
 *     ExpWorkerFactoryCreateThread @ 0x1400C66BC (ExpWorkerFactoryCreateThread.c)
 *     RtlpInterlockedPushEntrySList @ 0x14015B9A0 (RtlpInterlockedPushEntrySList.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401C4828 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1401C49A4 (KiReleaseQueuedSpinLockInstrumented.c)
 *     ExpSetWorkerFactoryDeferredCreateTimer @ 0x140487BCC (ExpSetWorkerFactoryDeferredCreateTimer.c)
 */

void __fastcall ExpWorkerFactoryCheckCreate(_QWORD *Object, PKLOCK_QUEUE_HANDLE LockHandle, __int64 a3)
{
  char v3; // si
  PKLOCK_QUEUE_HANDLE v4; // rbx
  unsigned int v6; // ebp
  volatile __int64 *v7; // rcx
  unsigned __int8 CurrentIrql; // al
  _QWORD *v9; // rdx
  __int64 v10; // rax
  __int64 Next; // rax
  __int64 v12; // rcx
  unsigned int v13; // eax
  int Thread; // esi
  unsigned int v15; // eax
  unsigned int v16; // ecx
  int v17; // eax
  char v18; // si
  int v19; // eax
  unsigned int v20; // eax
  _QWORD v21[2]; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int8 v22; // [rsp+30h] [rbp-18h]
  void *retaddr; // [rsp+48h] [rbp+0h]

  v3 = a3;
  v4 = LockHandle;
  v6 = 2;
  if ( !LockHandle )
  {
    v7 = (volatile __int64 *)Object[2];
    v4 = (PKLOCK_QUEUE_HANDLE)v21;
    v21[1] = v7;
    v21[0] = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v22 = CurrentIrql;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(v21);
    }
    else
    {
      v9 = (_QWORD *)_InterlockedExchange64(v7, (__int64)v21);
      if ( v9 )
        KxWaitForLockOwnerShip((__int64)v21, v9, a3);
    }
  }
  if ( v3 )
  {
    v16 = *((_DWORD *)Object + 36);
    if ( (((unsigned __int8)v16 | (unsigned __int8)((v16 | (v16 >> 6)) >> 2)) & 0x30) == 0 && (v16 & 0x100) == 0 )
      goto LABEL_26;
  }
  if ( *((_DWORD *)Object + 34)
    || *((_DWORD *)Object + 30) >= *((_DWORD *)Object + 29)
    || (v10 = Object[2], *(_DWORD *)(v10 + 28))
    || (v12 = *(_QWORD *)(v10 + 8), !*(_DWORD *)(v12 + 4)) && !*(_DWORD *)(v10 + 24) )
  {
    *((_DWORD *)Object + 36) &= 0xFFFFCE0F;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(v4, retaddr);
      goto LABEL_12;
    }
    _m_prefetchw(v4);
    Next = (__int64)v4->LockQueue.Next;
    if ( !v4->LockQueue.Next )
    {
      if ( v4 == (PKLOCK_QUEUE_HANDLE)_InterlockedCompareExchange64(
                                        (volatile signed __int64 *)v4->LockQueue.Lock,
                                        0LL,
                                        (signed __int64)v4) )
      {
LABEL_12:
        __writecr8(v4->OldIrql);
        return;
      }
      Next = KxWaitForLockChainValid(v4);
    }
    v4->LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
    goto LABEL_12;
  }
  if ( (!v3 || (Object[18] & 0xC0) != 0x80) && *(_DWORD *)(v12 + 40) >= (unsigned int)KeNumberProcessors_0 )
  {
    v19 = *((_DWORD *)Object + 36);
    if ( (unsigned __int8)v19 >> 6 )
    {
      if ( ((*((_DWORD *)Object + 36) >> 6) & 3) != 1 || !v3 )
        goto LABEL_26;
      *((_DWORD *)Object + 36) = v19 & 0xFFFFFF3F | 0x80;
    }
    else
    {
      v6 = 3;
      *((_DWORD *)Object + 36) = v19 & 0xFFFFFF3F | 0x40;
    }
    goto LABEL_39;
  }
  if ( (!v3 || (Object[18] & 0x30) != 0x20) && (unsigned __int8)ExpCheckThreadHistory(Object) )
  {
    v15 = *((_DWORD *)Object + 36);
    if ( ((v15 >> 4) & 3) != 0 )
    {
      if ( ((*((_DWORD *)Object + 36) >> 4) & 3) != 1 || !v3 )
        goto LABEL_26;
      *((_DWORD *)Object + 36) = v15 & 0xFFFFFFCF | 0x20;
    }
    else
    {
      v6 = 3;
      *((_DWORD *)Object + 36) = v15 & 0xFFFFFFCF | 0x10;
    }
    goto LABEL_39;
  }
  if ( !v3 || (Object[18] & 0x3000) != 0x2000 )
  {
    v13 = *((_DWORD *)Object + 33);
    if ( v13 )
    {
      if ( *((_DWORD *)Object + 30) > v13 )
      {
        v20 = *((_DWORD *)Object + 36);
        if ( ((v20 >> 12) & 3) == 0 )
        {
          v6 = 3;
          *((_DWORD *)Object + 36) = v20 & 0xFFFFCFFF | 0x1000;
          goto LABEL_39;
        }
        if ( ((*((_DWORD *)Object + 36) >> 12) & 3) == 1 && v3 )
        {
          *((_DWORD *)Object + 36) = v20 & 0xFFFFCFFF | 0x2000;
          goto LABEL_39;
        }
LABEL_26:
        KeReleaseInStackQueuedSpinLock(v4);
        return;
      }
    }
  }
  if ( (Object[18] & 0x200) != 0 )
    ExpLeaveWorkerFactoryAwayMode(Object);
  ++*((_DWORD *)Object + 34);
  *((_DWORD *)Object + 36) &= 0xFFFFCE0F;
  KeReleaseInStackQueuedSpinLock(v4);
  Thread = ExpWorkerFactoryCreateThread(Object);
  if ( Thread < 0 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Object[2], v4);
    --*((_DWORD *)Object + 34);
    if ( Thread == -1073741558 || Thread == -1073741814 || Thread == -1073741582 || Thread == -1073741823 )
      goto LABEL_26;
    *((_DWORD *)Object + 36) |= 0x100u;
    v6 = 1;
LABEL_39:
    v17 = *((_DWORD *)Object + 36);
    v18 = 0;
    if ( (v17 & 8) == 0 )
    {
      v18 = 1;
      *((_DWORD *)Object + 36) = v17 | 8;
    }
    KeReleaseInStackQueuedSpinLock(v4);
    if ( v18 )
    {
      ObfReferenceObjectWithTag(Object, 0x746C6644u);
      RtlpInterlockedPushEntrySList(&ExpWorkerFactoryThreadCreationList, (PSLIST_ENTRY)Object);
    }
    ExpSetWorkerFactoryDeferredCreateTimer(v6);
  }
}
