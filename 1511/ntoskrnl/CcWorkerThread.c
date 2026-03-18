/*
 * XREFs of CcWorkerThread @ 0x1400B2610
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceKernelEvent @ 0x140037C30 (EtwTraceKernelEvent.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KeAcquireQueuedSpinLock @ 0x1400B0A70 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
 *     CcFindNextWorkQueueEntry @ 0x1400B4E2C (CcFindNextWorkQueueEntry.c)
 *     CcReEngageWorkerThreads @ 0x1400E8524 (CcReEngageWorkerThreads.c)
 *     CcPerformReadAhead @ 0x1400FC4E4 (CcPerformReadAhead.c)
 *     CcLazyWriteScan @ 0x140100810 (CcLazyWriteScan.c)
 *     CcWriteBehind @ 0x140101160 (CcWriteBehind.c)
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 *     CcPerfLogWorkItemEnqueue @ 0x140123444 (CcPerfLogWorkItemEnqueue.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x14015B9A0 (RtlpInterlockedPushEntrySList.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     CcLogExtraWBThreadAction @ 0x1401A8C1C (CcLogExtraWBThreadAction.c)
 *     CcOkToAddWriteBehindThread @ 0x1401A8C98 (CcOkToAddWriteBehindThread.c)
 */

void __fastcall CcWorkerThread(__int64 a1)
{
  __int64 *v2; // rsi
  __int64 NextWorkQueueEntry; // rdi
  int v4; // edx
  bool v5; // r14
  int v6; // ebx
  KIRQL v7; // r13
  signed __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r8
  int v11; // eax
  int v12; // ecx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v14; // ebx
  struct _KTHREAD *v15; // rax
  int v16; // ecx
  int v17; // ecx
  struct _KPRCB *CurrentPrcb; // rdx
  _GENERAL_LOOKASIDE *P; // rax
  PWORK_QUEUE_ITEM **v20; // rax
  unsigned int v21; // eax
  PWORK_QUEUE_ITEM v22; // rcx
  __int64 *v23; // rax
  struct _LIST_ENTRY *v24; // rax
  PWORK_QUEUE_ITEM **v25; // rax
  int v26; // eax
  PWORK_QUEUE_ITEM v27; // rcx
  struct _LIST_ENTRY *Flink; // rax
  char v29; // [rsp+48h] [rbp-A8h]
  char v30; // [rsp+49h] [rbp-A7h]
  int v31; // [rsp+60h] [rbp-90h] BYREF
  __int64 v32; // [rsp+68h] [rbp-88h]
  __int64 v33; // [rsp+70h] [rbp-80h] BYREF
  _QWORD v34[4]; // [rsp+78h] [rbp-78h] BYREF
  _QWORD v35[2]; // [rsp+98h] [rbp-58h] BYREF
  _QWORD v36[2]; // [rsp+A8h] [rbp-48h] BYREF

  v2 = 0LL;
  NextWorkQueueEntry = 0LL;
  v29 = 0;
  v34[2] = a1;
  v31 = 0;
  v32 = 0LL;
  v4 = *(_DWORD *)(a1 + 32);
  if ( (unsigned int)(v4 - 1) > 1 )
    KeBugCheckEx(0x34u, 0x15FAuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v5 = v4 == 2;
LABEL_3:
  v6 = 0;
  v30 = 0;
  v7 = KeAcquireQueuedSpinLock(8uLL);
  if ( v29 )
  {
    CcQueueThrottle = 0;
    v29 = 0;
    CcReEngageWorkerThreads(
      (unsigned int)CcThreadsActiveBeforeThrottle,
      (unsigned int)CcExtraWBThreadsActiveBeforeThrottle);
  }
  if ( v32 == 35422 )
  {
    if ( *(_BYTE *)(NextWorkQueueEntry + 104) == 2 )
      *(_QWORD *)(*(_QWORD *)(NextWorkQueueEntry + 16) + 496LL) = NextWorkQueueEntry;
    v23 = (__int64 *)v2[1];
    *(_QWORD *)NextWorkQueueEntry = v2;
    *(_QWORD *)(NextWorkQueueEntry + 8) = v23;
    if ( (__int64 *)*v23 != v2 )
      __fastfail(3u);
    *v23 = NextWorkQueueEntry;
    v2[1] = NextWorkQueueEntry;
    v32 = 0LL;
  }
  if ( !v5 || !CcRemoveExtraThreadPending )
  {
    while ( !v5 )
    {
      if ( (v6 & 1) != 0 || (v6 |= 1u, (__int64 *)CcFastTeardownWorkQueue == &CcFastTeardownWorkQueue) )
      {
        if ( (v6 & 2) != 0 )
          break;
        v6 |= 2u;
        if ( (__int64 *)CcExpressWorkQueue == &CcExpressWorkQueue )
          break;
        v2 = &CcExpressWorkQueue;
      }
      else
      {
        v2 = &CcFastTeardownWorkQueue;
      }
LABEL_15:
      if ( !v5 || CcMaxNumberOfWriteBehindThreads >= (unsigned int)CcNumberWorkerThreads )
      {
        if ( v2 == &CcRegularWorkQueue )
        {
LABEL_17:
          if ( CcExecutingWriteBehindWorkItems + 1 <= (unsigned int)CcMaxNumberOfWriteBehindThreads )
          {
LABEL_18:
            NextWorkQueueEntry = CcFindNextWorkQueueEntry(v2, (unsigned int)CcNumberWorkerThreads);
            v34[1] = NextWorkQueueEntry;
            if ( NextWorkQueueEntry )
            {
              v8 = MEMORY[0xFFFFF78000000014];
              if ( CcAddExtraWriteBehindThreads
                && MEMORY[0xFFFFF78000000014] >= CcPrevExtraWBThreadCheckTime + (unsigned int)CcExtraWBThreadDelay
                && CcIdleWorkerThreadList == (PWORK_QUEUE_ITEM)&CcIdleWorkerThreadList
                && CcPagesYetToWrite
                && (__int64 *)CcRegularWorkQueue != &CcRegularWorkQueue
                && CcIdleExtraWriteBehindThreadList != (PWORK_QUEUE_ITEM)&CcIdleExtraWriteBehindThreadList )
              {
                v26 = CcOkToAddWriteBehindThread();
                CcPrevExtraWBThreadCheckTime = v8;
                if ( CcActiveExtraWriteBehindThreads && v26 == 3 )
                  CcRemoveExtraThreadPending = 1;
                if ( v26 == 2 )
                {
                  v27 = CcIdleExtraWriteBehindThreadList;
                  Flink = CcIdleExtraWriteBehindThreadList->List.Flink;
                  if ( (PWORK_QUEUE_ITEM *)CcIdleExtraWriteBehindThreadList->List.Blink != &CcIdleExtraWriteBehindThreadList
                    || (PWORK_QUEUE_ITEM)Flink->Blink != CcIdleExtraWriteBehindThreadList )
                  {
                    __fastfail(3u);
                  }
                  CcIdleExtraWriteBehindThreadList = (PWORK_QUEUE_ITEM)CcIdleExtraWriteBehindThreadList->List.Flink;
                  Flink->Blink = (struct _LIST_ENTRY *)&CcIdleExtraWriteBehindThreadList;
                  ++CcActiveExtraWriteBehindThreads;
                  v27->List.Flink = 0LL;
                  ExQueueWorkItem(v27, CriticalWorkQueue);
                  v30 = 1;
                }
              }
              if ( v2 == &CcRegularWorkQueue )
              {
                v9 = v8;
                CcPrevRegularQueueItemRunTime = v8;
              }
              else
              {
                v9 = CcPrevRegularQueueItemRunTime;
              }
              if ( CcMaxNumberOfWriteBehindThreads >= (unsigned int)CcNumberWorkerThreads
                && v8 >= v9 + (unsigned int)CcExtraWBThreadDelay
                && CcIdleWorkerThreadList == (PWORK_QUEUE_ITEM)&CcIdleWorkerThreadList
                && (__int64 *)CcRegularWorkQueue != &CcRegularWorkQueue )
              {
                v22 = CcIdleExtraWriteBehindThreadList;
                if ( !CcActiveExtraWriteBehindThreads
                  && CcIdleExtraWriteBehindThreadList != (PWORK_QUEUE_ITEM)&CcIdleExtraWriteBehindThreadList )
                {
                  v24 = CcIdleExtraWriteBehindThreadList->List.Flink;
                  if ( (PWORK_QUEUE_ITEM *)CcIdleExtraWriteBehindThreadList->List.Blink != &CcIdleExtraWriteBehindThreadList
                    || (PWORK_QUEUE_ITEM)v24->Blink != CcIdleExtraWriteBehindThreadList )
                  {
                    __fastfail(3u);
                  }
                  CcIdleExtraWriteBehindThreadList = (PWORK_QUEUE_ITEM)CcIdleExtraWriteBehindThreadList->List.Flink;
                  v24->Blink = (struct _LIST_ENTRY *)&CcIdleExtraWriteBehindThreadList;
                  CcActiveExtraWriteBehindThreads = 1;
                  v22->List.Flink = 0LL;
                  ExQueueWorkItem(v22, CriticalWorkQueue);
                  CcPrevRegularQueueItemRunTime = v8;
                  v30 = 1;
                }
              }
              if ( v2 == &CcRegularWorkQueue )
                _InterlockedIncrement(&CcExecutingWriteBehindWorkItems);
              else
                _InterlockedIncrement(&CcExecutingHighPriorityWorkItem);
              KeReleaseQueuedSpinLock(8uLL, v7);
              v11 = xmmword_140382290;
              if ( (xmmword_140382290 & 0x20000) != 0 )
              {
                if ( v30 )
                {
                  CcLogExtraWBThreadAction(2LL);
                  v11 = xmmword_140382290;
                }
                if ( (v11 & 0x20000) != 0 )
                {
                  v33 = NextWorkQueueEntry;
                  v35[0] = &v33;
                  v35[1] = 8LL;
                  EtwTraceKernelEvent((int)v35, 1, 0x80020000, 0x1601u, 4200706);
                }
              }
              v12 = *(unsigned __int8 *)(NextWorkQueueEntry + 104);
              if ( v12 == 2 )
              {
                CurrentThread = KeGetCurrentThread();
                LODWORD(CurrentThread[1].Queue) |= 2u;
                v14 = 0;
                do
                {
                  v32 = NextWorkQueueEntry;
                  CcWriteBehind(*(_QWORD *)(NextWorkQueueEntry + 16), &v31);
                  if ( v14 >= 0xA )
                    break;
                  ++v14;
                }
                while ( v32 == 35422 );
                v15 = KeGetCurrentThread();
                LODWORD(v15[1].Queue) &= ~2u;
              }
              else
              {
                v16 = v12 - 1;
                if ( v16 )
                {
                  v17 = v16 - 2;
                  if ( v17 )
                  {
                    if ( v17 == 1 )
                    {
                      KeSetEvent(*(PRKEVENT *)(NextWorkQueueEntry + 16), 0, 0);
                      v29 = 1;
                    }
                  }
                  else
                  {
                    CcLazyWriteScan(NextWorkQueueEntry, *(unsigned int *)(NextWorkQueueEntry + 16));
                  }
                }
                else
                {
                  CcPerformReadAhead(NextWorkQueueEntry, *(_QWORD *)(NextWorkQueueEntry + 16));
                }
              }
              if ( v2 == &CcRegularWorkQueue )
                _InterlockedDecrement(&CcExecutingWriteBehindWorkItems);
              else
                _InterlockedDecrement(&CcExecutingHighPriorityWorkItem);
              if ( v32 == 35422 )
              {
                if ( (xmmword_140382290 & 0x20000) != 0 )
                {
                  LOBYTE(v10) = 1;
                  CcPerfLogWorkItemEnqueue(v2, NextWorkQueueEntry, v10, 0LL);
                }
              }
              else
              {
                if ( (xmmword_140382290 & 0x20000) != 0 )
                {
                  v34[0] = NextWorkQueueEntry;
                  v36[0] = v34;
                  v36[1] = 8LL;
                  EtwTraceKernelEvent((int)v36, 1, 0x80020000, 0x1602u, 4200706);
                }
                CurrentPrcb = KeGetCurrentPrcb();
                P = CurrentPrcb->PPLookasideList[6].P;
                ++P->TotalFrees;
                if ( LOWORD(P->ListHead.Alignment) < P->Depth
                  || (++P->FreeMisses,
                      P = CurrentPrcb->PPLookasideList[6].L,
                      ++P->TotalFrees,
                      LOWORD(P->ListHead.Alignment) < P->Depth) )
                {
                  RtlpInterlockedPushEntrySList(&P->ListHead, (PSLIST_ENTRY)NextWorkQueueEntry);
                }
                else
                {
                  ++P->FreeMisses;
                  ((void (__fastcall *)(__int64))P->FreeEx)(NextWorkQueueEntry);
                }
              }
              goto LABEL_3;
            }
          }
        }
        else if ( !CcPostTickWorkItemCount
               || CcExecutingHighPriorityWorkItem + 1 < (unsigned int)CcNumberWorkerThreads
               || CcActiveExtraWriteBehindThreads )
        {
          if ( v2 != &CcRegularWorkQueue )
            goto LABEL_18;
          goto LABEL_17;
        }
      }
    }
    if ( (v6 & 4) != 0 )
      goto LABEL_47;
    v6 |= 4u;
    if ( (__int64 *)CcRegularWorkQueue == &CcRegularWorkQueue )
      goto LABEL_47;
    v2 = &CcRegularWorkQueue;
    goto LABEL_15;
  }
  CcRemoveExtraThreadPending = 0;
LABEL_47:
  if ( v5 )
  {
    v25 = (PWORK_QUEUE_ITEM **)qword_1402FDCB8;
    *(_QWORD *)a1 = &CcIdleExtraWriteBehindThreadList;
    *(_QWORD *)(a1 + 8) = v25;
    if ( *v25 != &CcIdleExtraWriteBehindThreadList )
      __fastfail(3u);
    *v25 = (PWORK_QUEUE_ITEM *)a1;
    qword_1402FDCB8 = a1;
    --CcActiveExtraWriteBehindThreads;
    v21 = CcNumberActiveWorkerThreads;
  }
  else
  {
    v20 = (PWORK_QUEUE_ITEM **)qword_1402FDA58;
    *(_QWORD *)a1 = &CcIdleWorkerThreadList;
    *(_QWORD *)(a1 + 8) = v20;
    if ( *v20 != &CcIdleWorkerThreadList )
      __fastfail(3u);
    *v20 = (PWORK_QUEUE_ITEM *)a1;
    qword_1402FDA58 = a1;
    v21 = --CcNumberActiveWorkerThreads;
  }
  if ( CcAddExtraWriteBehindThreads && !CcActiveExtraWriteBehindThreads && v21 <= 1 )
  {
    CcAddExtraWriteBehindThreads = 0;
    memset(CcThroughputStats, 0, 8LL * (unsigned int)(CcMaxExtraWriteBehindThreads + 1));
  }
  KeReleaseQueuedSpinLock(8uLL, v7);
  if ( (xmmword_140382290 & 0x20000) != 0 && v5 )
    CcLogExtraWBThreadAction(3LL);
}
