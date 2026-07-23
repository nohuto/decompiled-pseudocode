/*
 * XREFs of ExpWorkerFactoryCheckCreate @ 0x1400F6D70
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x14005E490 (NtWaitForWorkViaWorkerFactory.c)
 *     NtSetInformationWorkerFactory @ 0x1400F5A50 (NtSetInformationWorkerFactory.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1400F68B0 (NtReleaseWorkerFactoryWorker.c)
 *     ExpWorkerFactoryManagerThread @ 0x14013DCFC (ExpWorkerFactoryManagerThread.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x14001B920 (KxWaitForLockOwnerShip.c)
 *     ObfReferenceObjectWithTag @ 0x1400EC370 (ObfReferenceObjectWithTag.c)
 *     ExpCheckThreadHistory @ 0x1400F70DC (ExpCheckThreadHistory.c)
 *     ExpWorkerFactoryCreateThread @ 0x1400F7224 (ExpWorkerFactoryCreateThread.c)
 *     KxWaitForLockChainValid @ 0x1400F7370 (KxWaitForLockChainValid.c)
 *     ExpLeaveWorkerFactoryAwayMode @ 0x1400F7920 (ExpLeaveWorkerFactoryAwayMode.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401673B0 (RtlpInterlockedPushEntrySList.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401D380C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1401D3988 (KiReleaseQueuedSpinLockInstrumented.c)
 *     ExpSetWorkerFactoryDeferredCreateTimer @ 0x1404FF130 (ExpSetWorkerFactoryDeferredCreateTimer.c)
 */

void __fastcall ExpWorkerFactoryCheckCreate(PVOID Object, PKLOCK_QUEUE_HANDLE LockHandle, char a3)
{
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
  int v16; // eax
  char v17; // si
  unsigned int v18; // ecx
  int v19; // eax
  unsigned int v20; // eax
  _QWORD v21[2]; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int8 v22; // [rsp+30h] [rbp-18h]
  void *retaddr; // [rsp+48h] [rbp+0h]

  v4 = LockHandle;
  v6 = 2;
  if ( !LockHandle )
  {
    v7 = (volatile __int64 *)*((_QWORD *)Object + 2);
    v4 = (PKLOCK_QUEUE_HANDLE)v21;
    v21[1] = v7;
    v21[0] = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v22 = CurrentIrql;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(v21, v7);
    }
    else
    {
      v9 = (_QWORD *)_InterlockedExchange64(v7, (__int64)v21);
      if ( v9 )
        KxWaitForLockOwnerShip((__int64)v21, v9);
    }
  }
  if ( a3 )
  {
    v18 = *((_DWORD *)Object + 38);
    if ( (((unsigned __int8)v18 | (unsigned __int8)((v18 | (v18 >> 6)) >> 2)) & 0x30) == 0 && (v18 & 0x100) == 0 )
      goto LABEL_52;
  }
  if ( *((_DWORD *)Object + 36)
    || *((_DWORD *)Object + 32) >= *((_DWORD *)Object + 31)
    || (v10 = *((_QWORD *)Object + 2), *(_DWORD *)(v10 + 28))
    || (v12 = *(_QWORD *)(v10 + 8), !*(_DWORD *)(v12 + 4)) && !*(_DWORD *)(v10 + 24) )
  {
    *((_DWORD *)Object + 38) &= 0xFFFFCE0F;
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
  if ( (!a3 || (*((_DWORD *)Object + 38) & 0xC0) != 0x80) && *(_DWORD *)(v12 + 40) >= (unsigned int)KeNumberProcessors_0 )
  {
    v19 = *((_DWORD *)Object + 38);
    if ( (unsigned __int8)v19 >> 6 )
    {
      if ( ((*((_DWORD *)Object + 38) >> 6) & 3) != 1 || !a3 )
        goto LABEL_52;
      *((_DWORD *)Object + 38) = v19 & 0xFFFFFF3F | 0x80;
    }
    else
    {
      v6 = 3;
      *((_DWORD *)Object + 38) = v19 & 0xFFFFFF3F | 0x40;
    }
    goto LABEL_36;
  }
  if ( (!a3 || (*((_DWORD *)Object + 38) & 0x30) != 0x20) && (unsigned __int8)ExpCheckThreadHistory(Object) )
  {
    v15 = *((_DWORD *)Object + 38);
    if ( ((v15 >> 4) & 3) != 0 )
    {
      if ( ((*((_DWORD *)Object + 38) >> 4) & 3) != 1 || !a3 )
        goto LABEL_52;
      *((_DWORD *)Object + 38) = v15 & 0xFFFFFFCF | 0x20;
    }
    else
    {
      v6 = 3;
      *((_DWORD *)Object + 38) = v15 & 0xFFFFFFCF | 0x10;
    }
    goto LABEL_36;
  }
  if ( !a3 || (*((_DWORD *)Object + 38) & 0x3000) != 0x2000 )
  {
    v13 = *((_DWORD *)Object + 35);
    if ( v13 )
    {
      if ( *((_DWORD *)Object + 32) > v13 )
      {
        v20 = *((_DWORD *)Object + 38);
        if ( ((v20 >> 12) & 3) == 0 )
        {
          v6 = 3;
          *((_DWORD *)Object + 38) = v20 & 0xFFFFCFFF | 0x1000;
          goto LABEL_36;
        }
        if ( ((*((_DWORD *)Object + 38) >> 12) & 3) == 1 && a3 )
        {
          *((_DWORD *)Object + 38) = v20 & 0xFFFFCFFF | 0x2000;
          goto LABEL_36;
        }
LABEL_52:
        KeReleaseInStackQueuedSpinLock(v4);
        return;
      }
    }
  }
  if ( (*((_DWORD *)Object + 38) & 0x200) != 0 )
    ExpLeaveWorkerFactoryAwayMode(Object);
  ++*((_DWORD *)Object + 36);
  *((_DWORD *)Object + 38) &= 0xFFFFCE0F;
  KeReleaseInStackQueuedSpinLock(v4);
  Thread = ExpWorkerFactoryCreateThread(Object);
  if ( Thread < 0 )
  {
    KeAcquireInStackQueuedSpinLock(*((PKSPIN_LOCK *)Object + 2), v4);
    --*((_DWORD *)Object + 36);
    if ( Thread == -1073741558 || Thread == -1073741814 || Thread == -1073741582 || Thread == -1073741823 )
      goto LABEL_52;
    *((_DWORD *)Object + 38) |= 0x100u;
    v6 = 1;
LABEL_36:
    v16 = *((_DWORD *)Object + 38);
    v17 = 0;
    if ( (v16 & 8) == 0 )
    {
      v17 = 1;
      *((_DWORD *)Object + 38) = v16 | 8;
    }
    KeReleaseInStackQueuedSpinLock(v4);
    if ( v17 )
    {
      ObfReferenceObjectWithTag(Object, 0x746C6644u);
      RtlpInterlockedPushEntrySList(&ExpWorkerFactoryThreadCreationList, (PSLIST_ENTRY)Object);
    }
    ExpSetWorkerFactoryDeferredCreateTimer(v6);
  }
}
