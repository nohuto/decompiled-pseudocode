/*
 * XREFs of CcWorkerThread @ 0x140071500
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     ExQueueWorkItem @ 0x14005F9DC (ExQueueWorkItem.c)
 *     CcPerfLogWorkItemEnqueue @ 0x14006B3C8 (CcPerfLogWorkItemEnqueue.c)
 *     CcLazyWriteScan @ 0x140070820 (CcLazyWriteScan.c)
 *     CcWriteBehind @ 0x14007119C (CcWriteBehind.c)
 *     CcFindNextWorkQueueEntry @ 0x140071B5C (CcFindNextWorkQueueEntry.c)
 *     CcPerformReadAhead @ 0x140071EB4 (CcPerformReadAhead.c)
 *     KeAcquireQueuedSpinLock @ 0x1400E6BD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
 *     CcReEngageWorkerThreads @ 0x14010F38C (CcReEngageWorkerThreads.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401673B0 (RtlpInterlockedPushEntrySList.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     CcLogExtraWBThreadAction @ 0x1401B1630 (CcLogExtraWBThreadAction.c)
 *     CcOkToAddWriteBehindThread @ 0x1401B16AC (CcOkToAddWriteBehindThread.c)
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
  int v10; // eax
  int v11; // ecx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v13; // ebx
  struct _KTHREAD *v14; // rax
  int v15; // ecx
  int v16; // ecx
  struct _KPRCB *CurrentPrcb; // rdx
  _GENERAL_LOOKASIDE *P; // rax
  __int64 *v19; // rax
  unsigned int v20; // eax
  PWORK_QUEUE_ITEM v21; // rcx
  struct _LIST_ENTRY *v22; // rax
  __int64 *v23; // rax
  __int64 *v24; // rax
  int v25; // eax
  PWORK_QUEUE_ITEM v26; // rcx
  struct _LIST_ENTRY *Flink; // rax
  char v28; // [rsp+48h] [rbp-A8h]
  char v29; // [rsp+49h] [rbp-A7h]
  int v30; // [rsp+60h] [rbp-90h] BYREF
  __int64 v31; // [rsp+68h] [rbp-88h]
  _QWORD v32[3]; // [rsp+70h] [rbp-80h] BYREF
  __int64 v33; // [rsp+88h] [rbp-68h] BYREF
  _QWORD v34[2]; // [rsp+98h] [rbp-58h] BYREF
  _QWORD v35[2]; // [rsp+A8h] [rbp-48h] BYREF

  v2 = 0LL;
  NextWorkQueueEntry = 0LL;
  v29 = 0;
  v32[2] = a1;
  v30 = 0;
  v31 = 0LL;
  v4 = *(_DWORD *)(a1 + 32);
  if ( (unsigned int)(v4 - 1) > 1 )
    KeBugCheckEx(0x34u, 0x1615uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v5 = v4 == 2;
LABEL_3:
  v6 = 0;
  v28 = 0;
  v7 = KeAcquireQueuedSpinLock(8uLL);
  if ( v29 )
  {
    CcQueueThrottle = 0;
    v29 = 0;
    CcReEngageWorkerThreads(
      (unsigned int)CcThreadsActiveBeforeThrottle,
      (unsigned int)CcExtraWBThreadsActiveBeforeThrottle);
  }
  if ( v31 == 35422 )
  {
    if ( *(_BYTE *)(NextWorkQueueEntry + 120) == 2 )
      *(_QWORD *)(*(_QWORD *)(NextWorkQueueEntry + 16) + 496LL) = NextWorkQueueEntry;
    v23 = (__int64 *)v2[1];
    if ( (__int64 *)*v23 != v2 )
      __fastfail(3u);
    *(_QWORD *)NextWorkQueueEntry = v2;
    *(_QWORD *)(NextWorkQueueEntry + 8) = v23;
    *v23 = NextWorkQueueEntry;
    v2[1] = NextWorkQueueEntry;
    v31 = 0LL;
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
            v32[1] = NextWorkQueueEntry;
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
                v25 = CcOkToAddWriteBehindThread();
                CcPrevExtraWBThreadCheckTime = v8;
                if ( CcActiveExtraWriteBehindThreads && v25 == 3 )
                  CcRemoveExtraThreadPending = 1;
                if ( v25 == 2 )
                {
                  v26 = CcIdleExtraWriteBehindThreadList;
                  Flink = CcIdleExtraWriteBehindThreadList->List.Flink;
                  if ( (PWORK_QUEUE_ITEM *)CcIdleExtraWriteBehindThreadList->List.Blink != &CcIdleExtraWriteBehindThreadList
                    || (PWORK_QUEUE_ITEM)Flink->Blink != CcIdleExtraWriteBehindThreadList )
                  {
                    __fastfail(3u);
                  }
                  CcIdleExtraWriteBehindThreadList = (PWORK_QUEUE_ITEM)CcIdleExtraWriteBehindThreadList->List.Flink;
                  Flink->Blink = (struct _LIST_ENTRY *)&CcIdleExtraWriteBehindThreadList;
                  ++CcActiveExtraWriteBehindThreads;
                  v26->List.Flink = 0LL;
                  ExQueueWorkItem(v26, CriticalWorkQueue);
                  v28 = 1;
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
                v21 = CcIdleExtraWriteBehindThreadList;
                if ( !CcActiveExtraWriteBehindThreads
                  && CcIdleExtraWriteBehindThreadList != (PWORK_QUEUE_ITEM)&CcIdleExtraWriteBehindThreadList )
                {
                  v22 = CcIdleExtraWriteBehindThreadList->List.Flink;
                  if ( (PWORK_QUEUE_ITEM *)CcIdleExtraWriteBehindThreadList->List.Blink != &CcIdleExtraWriteBehindThreadList
                    || (PWORK_QUEUE_ITEM)v22->Blink != CcIdleExtraWriteBehindThreadList )
                  {
                    __fastfail(3u);
                  }
                  CcIdleExtraWriteBehindThreadList = (PWORK_QUEUE_ITEM)CcIdleExtraWriteBehindThreadList->List.Flink;
                  v22->Blink = (struct _LIST_ENTRY *)&CcIdleExtraWriteBehindThreadList;
                  CcActiveExtraWriteBehindThreads = 1;
                  v21->List.Flink = 0LL;
                  ExQueueWorkItem(v21, CriticalWorkQueue);
                  CcPrevRegularQueueItemRunTime = v8;
                  v28 = 1;
                }
              }
              if ( v2 == &CcRegularWorkQueue )
                _InterlockedIncrement(&CcExecutingWriteBehindWorkItems);
              else
                _InterlockedIncrement(&CcExecutingHighPriorityWorkItem);
              KeReleaseQueuedSpinLock(8uLL, v7);
              v10 = xmmword_1403AA2D0;
              if ( (xmmword_1403AA2D0 & 0x20000) != 0 )
              {
                if ( v28 )
                {
                  CcLogExtraWBThreadAction(2LL);
                  v10 = xmmword_1403AA2D0;
                }
                if ( (v10 & 0x20000) != 0 )
                {
                  v32[0] = NextWorkQueueEntry;
                  v34[0] = v32;
                  v34[1] = 8LL;
                  EtwTraceKernelEvent((int)v34, 1, 0x80020000, 5633, 4200706);
                }
              }
              v11 = *(unsigned __int8 *)(NextWorkQueueEntry + 120);
              if ( v11 == 2 )
              {
                CurrentThread = KeGetCurrentThread();
                *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 2u;
                v13 = 0;
                do
                {
                  v31 = NextWorkQueueEntry;
                  CcWriteBehind(*(_QWORD *)(NextWorkQueueEntry + 16), (__int64)&v30);
                  if ( v13 >= 0xA )
                    break;
                  ++v13;
                }
                while ( v31 == 35422 );
                v14 = KeGetCurrentThread();
                *((_DWORD *)&v14[1].SwapListEntry + 3) &= ~2u;
              }
              else
              {
                v15 = v11 - 1;
                if ( v15 )
                {
                  v16 = v15 - 2;
                  if ( v16 )
                  {
                    if ( v16 == 1 )
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
              if ( v31 == 35422 )
              {
                if ( (xmmword_1403AA2D0 & 0x20000) != 0 )
                  CcPerfLogWorkItemEnqueue(v2, NextWorkQueueEntry, 1, 0);
              }
              else
              {
                if ( (xmmword_1403AA2D0 & 0x20000) != 0 )
                {
                  v33 = NextWorkQueueEntry;
                  v35[0] = &v33;
                  v35[1] = 8LL;
                  EtwTraceKernelEvent((int)v35, 1, 0x80020000, 5634, 4200706);
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
    v24 = (__int64 *)qword_1403232F8;
    if ( *(PWORK_QUEUE_ITEM **)qword_1403232F8 != &CcIdleExtraWriteBehindThreadList )
      __fastfail(3u);
    *(_QWORD *)a1 = &CcIdleExtraWriteBehindThreadList;
    *(_QWORD *)(a1 + 8) = v24;
    *v24 = a1;
    qword_1403232F8 = a1;
    --CcActiveExtraWriteBehindThreads;
    v20 = CcNumberActiveWorkerThreads;
  }
  else
  {
    v19 = (__int64 *)qword_140323098;
    if ( *(PWORK_QUEUE_ITEM **)qword_140323098 != &CcIdleWorkerThreadList )
      __fastfail(3u);
    *(_QWORD *)a1 = &CcIdleWorkerThreadList;
    *(_QWORD *)(a1 + 8) = v19;
    *v19 = a1;
    qword_140323098 = a1;
    v20 = --CcNumberActiveWorkerThreads;
  }
  if ( CcAddExtraWriteBehindThreads && !CcActiveExtraWriteBehindThreads && v20 <= 1 )
  {
    CcAddExtraWriteBehindThreads = 0;
    memset(CcThroughputStats, 0, 8LL * (unsigned int)(CcMaxExtraWriteBehindThreads + 1));
  }
  KeReleaseQueuedSpinLock(8uLL, v7);
  if ( (xmmword_1403AA2D0 & 0x20000) != 0 && v5 )
    CcLogExtraWBThreadAction(3LL);
}
