/*
 * XREFs of CcLazyWriteScan @ 0x140070820
 * Callers:
 *     CcWorkerThread @ 0x140071500 (CcWorkerThread.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14005F9DC (ExQueueWorkItem.c)
 *     KxReleaseQueuedSpinLock @ 0x1400690F0 (KxReleaseQueuedSpinLock.c)
 *     CcUpdateTimeOnLogHandles @ 0x14006D530 (CcUpdateTimeOnLogHandles.c)
 *     KeAcquireQueuedSpinLockAtDpcLevel @ 0x14006E240 (KeAcquireQueuedSpinLockAtDpcLevel.c)
 *     CcAdjustThrottle @ 0x14006E2A8 (CcAdjustThrottle.c)
 *     CcRescheduleLazyWriteScan @ 0x14006E458 (CcRescheduleLazyWriteScan.c)
 *     CcSetLazyWriteScanQueued @ 0x14006E57C (CcSetLazyWriteScanQueued.c)
 *     CcShouldLazyWriteCacheMap @ 0x140070F30 (CcShouldLazyWriteCacheMap.c)
 *     CcPostWorkQueue @ 0x140071028 (CcPostWorkQueue.c)
 *     CcAllocateWorkQueueEntry @ 0x140071C00 (CcAllocateWorkQueueEntry.c)
 *     CcComputeNextScanTime @ 0x1400AE78C (CcComputeNextScanTime.c)
 *     CcPerfLogLoggedStreamsStats @ 0x1400AEA84 (CcPerfLogLoggedStreamsStats.c)
 *     CcPerfLogLazyWriteScan @ 0x1400B0AC8 (CcPerfLogLazyWriteScan.c)
 *     CcCalculatePagesToWrite @ 0x1400C9AC0 (CcCalculatePagesToWrite.c)
 *     CcScanLogHandleList @ 0x1400CA8AC (CcScanLogHandleList.c)
 *     KeAcquireQueuedSpinLock @ 0x1400E6BD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
 *     CcPostDeferredWrites @ 0x1401B19E8 (CcPostDeferredWrites.c)
 */

void __fastcall CcLazyWriteScan(int a1, __int64 a2)
{
  unsigned int v3; // r13d
  char v4; // r12
  int v5; // esi
  KIRQL v6; // r15
  __int64 v7; // rdx
  unsigned __int128 v8; // rtt
  __int64 v9; // r10
  __int64 v10; // r9
  unsigned __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 v14; // r8
  _QWORD *v15; // rax
  int v16; // ebx
  int v17; // r8d
  __int64 v18; // r14
  __int64 v19; // rbx
  __int64 v20; // rdi
  int v21; // ecx
  _QWORD *v22; // rcx
  char v23; // di
  int v24; // ecx
  unsigned int v25; // eax
  unsigned int v26; // eax
  __int64 v27; // rsi
  KIRQL v28; // al
  __int64 *v29; // rdx
  KIRQL v30; // al
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rdx
  unsigned int v34; // ecx
  __int64 v35; // rax
  PWORK_QUEUE_ITEM v36; // r15
  __int64 v37; // rcx
  __int64 v38; // rax
  _QWORD *v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rcx
  _QWORD *v44; // rcx
  _QWORD *v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rdx
  _QWORD *v48; // rax
  __int64 *v49; // rax
  bool v50; // zf
  struct _LIST_ENTRY *Flink; // rax
  KIRQL v52; // al
  char v53; // [rsp+60h] [rbp-9h]
  char v54; // [rsp+61h] [rbp-8h]
  unsigned int v55; // [rsp+64h] [rbp-5h] BYREF
  __int64 v56; // [rsp+68h] [rbp-1h] BYREF
  __int64 v57; // [rsp+70h] [rbp+7h] BYREF
  char v58[8]; // [rsp+78h] [rbp+Fh] BYREF
  _QWORD *v59; // [rsp+80h] [rbp+17h] BYREF
  _QWORD **v60; // [rsp+88h] [rbp+1Fh]
  KIRQL v61; // [rsp+E0h] [rbp+77h]
  char v62; // [rsp+E8h] [rbp+7Fh]

  v62 = 0;
  v53 = 0;
  v54 = 0;
  v3 = a2;
  v4 = 0;
  v5 = 0;
  CcScanLogHandleList(&v55, a2, v58);
  v61 = KeAcquireQueuedSpinLock(5uLL);
  v6 = v61;
  CcSetLazyWriteScanQueued(v3, 0);
  *(_QWORD *)&v8 = qword_140323100;
  *((_QWORD *)&v8 + 1) = v7;
  v9 = v8 / (unsigned int)dword_140323110;
  CcAverageAvailablePages = v9;
  CcAverageDirtyPages = qword_140323108 / (unsigned __int64)(unsigned int)dword_140323110;
  if ( (unsigned int)dword_140323110 <= 1 )
  {
    v13 = *(_QWORD *)(*(_QWORD *)qword_140327038 + 6464LL);
    v12 = CcGlobalDirtyPageStatistics;
    v14 = CcGlobalDirtyPageStatistics;
  }
  else
  {
    v10 = (unsigned int)(dword_140323110 - 1);
    v11 = qword_140323108 / (unsigned __int64)(unsigned int)dword_140323110 * (unsigned int)v10;
    v12 = CcGlobalDirtyPageStatistics;
    v13 = *(_QWORD *)(*(_QWORD *)qword_140327038 + 6464LL) + v9 * v10;
    v14 = CcGlobalDirtyPageStatistics + v11;
  }
  qword_140323100 = v13;
  qword_140323108 = v14;
  if ( v12 || byte_1403231E1 )
  {
    v60 = &v59;
    v59 = &v59;
    while ( 1 )
    {
      v15 = (_QWORD *)CcPostTickWorkQueue;
      if ( (__int64 *)CcPostTickWorkQueue == &CcPostTickWorkQueue )
        break;
      v43 = *(_QWORD *)CcPostTickWorkQueue;
      if ( *(__int64 **)(CcPostTickWorkQueue + 8) != &CcPostTickWorkQueue || *(_QWORD *)(v43 + 8) != CcPostTickWorkQueue )
        __fastfail(3u);
      CcPostTickWorkQueue = *(_QWORD *)CcPostTickWorkQueue;
      *(_QWORD *)(v43 + 8) = &CcPostTickWorkQueue;
      v44 = v60;
      if ( *v60 != &v59 )
        __fastfail(3u);
      v15[1] = v60;
      *v15 = &v59;
      *v44 = v15;
      v60 = (_QWORD **)v15;
    }
    byte_1403231E1 = 0;
    v55 = CcCalculatePagesToWrite(v3, &CcGlobalDirtyPageStatistics, &CcGlobalDirtyPageThresholds, 0LL);
    v16 = v55;
    CcAdjustThrottle((__int64)&CcGlobalDirtyPageStatistics, (__int64)&CcGlobalDirtyPageThresholds);
    qword_140322F88 = CcGlobalDirtyPageStatistics;
    LODWORD(qword_140322F90) = v16;
    CcPagesYetToWrite = v16;
    *((_DWORD *)CcThroughputStats + 2 * (unsigned int)CcActiveExtraWriteBehindThreads) = v16;
    CcPrevExtraWBThreadCheckTime = MEMORY[0xFFFFF78000000014];
    if ( (xmmword_1403AA2D0 & 0x20000) != 0 )
      CcPerfLogLazyWriteScan(
        a1,
        v3,
        v17,
        CcGlobalDirtyPageStatistics,
        *(_QWORD *)(*(_QWORD *)qword_140327038 + 6464LL),
        CcGlobalDirtyPageThresholds,
        (unsigned int)CcNumberOfMappedVacbs,
        qword_1403230E8,
        qword_1403230F0);
    v18 = 0LL;
    v19 = CcLazyWriterCursor - 136;
    if ( CcLazyWriterCursor != 136 )
    {
      do
      {
        v20 = v19 + 136;
        if ( (__int64 *)(v19 + 136) == &CcLazyWriterCursor )
          break;
        if ( !v18 )
          v18 = v19;
        if ( (unsigned __int8)CcShouldLazyWriteCacheMap(v19, v55, *(_QWORD *)(v19 + 96) & 0xFFFFFFFFFFFFFFF0uLL, v3) )
        {
          if ( (*(_DWORD *)(v19 + 152) & 0x1000000) != 0 )
          {
            v53 = 1;
            *(_DWORD *)(*(_QWORD *)(v19 + 240) + 144LL) |= 1u;
            v31 = *(_QWORD *)(v19 + 240);
            v32 = *(_QWORD *)(v19 + 256);
            if ( v32 > *(_QWORD *)(v31 + 112) )
            {
              *(_QWORD *)(v31 + 112) = v32;
              if ( (xmmword_1403AA2D0 & 0x20000) != 0 )
                *(_QWORD *)(*(_QWORD *)(v19 + 240) + 128LL) = *(_QWORD *)((*(_QWORD *)(v19 + 96) & 0xFFFFFFFFFFFFFFF0uLL)
                                                                        + 0x18);
            }
          }
          v24 = *(_DWORD *)(v19 + 152);
          v25 = *(_DWORD *)(v19 + 112);
          *(_DWORD *)(v19 + 192) = v25;
          if ( (v24 & 0x200) != 0 && v25 >= 0x40 )
          {
            if ( (v24 & 0x1000000) != 0 )
            {
              v33 = *(_QWORD *)(v19 + 240);
              v34 = *(_DWORD *)(v33 + 104);
              if ( v34 )
              {
                ++CcDbgSkippedReductions;
                if ( v25 > v34 )
                  *(_DWORD *)(v33 + 104) = 0;
                else
                  *(_DWORD *)(v33 + 104) = v34 - v25;
              }
              else
              {
                *(_DWORD *)(v19 + 192) = v25 >> 3;
              }
            }
            else
            {
              *(_DWORD *)(v19 + 192) = v25 >> 3;
            }
          }
          if ( !v62 )
          {
            v26 = *(_DWORD *)(v19 + 192);
            if ( v26 >= v55 )
            {
              if ( (*(_DWORD *)(v19 + 152) & 0x200) != 0 || v18 == v19 && (*(_DWORD *)(v19 + 268) & 0xF) == 0 )
              {
                v4 = 1;
              }
              else
              {
                v37 = CcLazyWriterCursor;
                v38 = qword_140323008;
                if ( *(__int64 **)(CcLazyWriterCursor + 8) != &CcLazyWriterCursor
                  || *(__int64 **)qword_140323008 != &CcLazyWriterCursor )
                {
                  __fastfail(3u);
                }
                *(_QWORD *)qword_140323008 = CcLazyWriterCursor;
                *(_QWORD *)(v37 + 8) = v38;
                v39 = *(_QWORD **)(v19 + 144);
                if ( *v39 != v20 )
                  __fastfail(3u);
                CcLazyWriterCursor = v19 + 136;
                qword_140323008 = (__int64)v39;
                *v39 = &CcLazyWriterCursor;
                *(_QWORD *)(v19 + 144) = &CcLazyWriterCursor;
              }
              v55 = 0;
              v62 = 1;
            }
            else
            {
              v55 -= v26;
            }
          }
          *(_DWORD *)(v19 + 152) |= 0x20u;
          ++*(_DWORD *)(v19 + 112);
          KeReleaseQueuedSpinLock(5uLL, v6);
          if ( (int)CcAllocateWorkQueueEntry(&v57) < 0 )
          {
            v52 = KeAcquireQueuedSpinLock(5uLL);
            *(_DWORD *)(v19 + 152) &= ~0x20u;
            v6 = v52;
            --*(_DWORD *)(v19 + 112);
            break;
          }
          v27 = v57;
          *(_BYTE *)(v57 + 120) = 2;
          *(_QWORD *)(v27 + 16) = v19;
          v28 = KeAcquireQueuedSpinLock(5uLL);
          --*(_DWORD *)(v19 + 112);
          v6 = v28;
          v61 = v28;
          if ( (*(_DWORD *)(v19 + 152) & 0x10000) != 0 )
          {
            v29 = &CcFastTeardownWorkQueue;
            *(_QWORD *)(v19 + 496) = v27 | 1;
          }
          else
          {
            *(_QWORD *)(v19 + 496) = v27;
            v29 = &CcRegularWorkQueue;
          }
          CcPostWorkQueue(v27, v29);
          v5 = 0;
          v54 = 1;
        }
        else
        {
          v21 = *(_DWORD *)(v19 + 152);
          if ( (v21 & 0x10020) == 0x10020 )
          {
            v35 = *(_QWORD *)(v19 + 496);
            v36 = 0LL;
            if ( v35 && (v35 & 1) == 0 )
            {
              KeAcquireQueuedSpinLockAtDpcLevel((__int64)KeGetPcr()->NtTib.ArbitraryUserPointer + 128);
              v46 = *(_QWORD *)(v19 + 496);
              if ( v46 )
              {
                *(_QWORD *)(v19 + 496) = v46 | 1;
                v47 = *(_QWORD *)v46;
                v48 = *(_QWORD **)(v46 + 8);
                if ( *(_QWORD *)(*(_QWORD *)v46 + 8LL) != v46 || *v48 != v46 )
                  __fastfail(3u);
                *v48 = v47;
                *(_QWORD *)(v47 + 8) = v48;
                *(_QWORD *)(v46 + 8) = 0LL;
                *(_QWORD *)v46 = 0LL;
                v49 = (__int64 *)qword_1403230A8;
                if ( *(__int64 **)qword_1403230A8 != &CcFastTeardownWorkQueue )
                  __fastfail(3u);
                v50 = CcQueueThrottle == 0;
                *(_QWORD *)v46 = &CcFastTeardownWorkQueue;
                *(_QWORD *)(v46 + 8) = v49;
                *v49 = v46;
                qword_1403230A8 = v46;
                if ( v50 && CcIdleWorkerThreadList != (PWORK_QUEUE_ITEM)&CcIdleWorkerThreadList )
                {
                  v36 = CcIdleWorkerThreadList;
                  Flink = CcIdleWorkerThreadList->List.Flink;
                  if ( (PWORK_QUEUE_ITEM *)CcIdleWorkerThreadList->List.Blink != &CcIdleWorkerThreadList
                    || (PWORK_QUEUE_ITEM)Flink->Blink != CcIdleWorkerThreadList )
                  {
                    __fastfail(3u);
                  }
                  ++CcNumberActiveWorkerThreads;
                  CcIdleWorkerThreadList = (PWORK_QUEUE_ITEM)Flink;
                  Flink->Blink = (struct _LIST_ENTRY *)&CcIdleWorkerThreadList;
                }
                KxReleaseQueuedSpinLock((volatile signed __int64 **)KeGetPcr()->NtTib.ArbitraryUserPointer + 16);
                if ( v36 )
                {
                  v36->List.Flink = 0LL;
                  ExQueueWorkItem(v36, CriticalWorkQueue);
                }
              }
              else
              {
                KxReleaseQueuedSpinLock((volatile signed __int64 **)KeGetPcr()->NtTib.ArbitraryUserPointer + 16);
              }
            }
            v6 = v61;
          }
          else if ( (unsigned int)++v5 >= 0x14 && (v21 & 0x820) == 0 )
          {
            ++*(_DWORD *)(v19 + 112);
            *(_DWORD *)(v19 + 152) = v21 | 0x20;
            KeReleaseQueuedSpinLock(5uLL, v6);
            v5 = 0;
            v30 = KeAcquireQueuedSpinLock(5uLL);
            *(_DWORD *)(v19 + 152) &= ~0x20u;
            v6 = v30;
            --*(_DWORD *)(v19 + 112);
            v61 = v30;
          }
        }
        v19 = *(_QWORD *)v20 - 136LL;
        if ( v4 )
        {
          v40 = CcLazyWriterCursor;
          v41 = qword_140323008;
          if ( *(__int64 **)(CcLazyWriterCursor + 8) != &CcLazyWriterCursor
            || *(__int64 **)qword_140323008 != &CcLazyWriterCursor )
          {
            __fastfail(3u);
          }
          *(_QWORD *)qword_140323008 = CcLazyWriterCursor;
          *(_QWORD *)(v40 + 8) = v41;
          v42 = *(_QWORD *)v20;
          if ( *(_QWORD *)(*(_QWORD *)v20 + 8LL) != v20 )
            __fastfail(3u);
          CcLazyWriterCursor = *(_QWORD *)v20;
          v4 = 0;
          qword_140323008 = v20;
          *(_QWORD *)(v42 + 8) = &CcLazyWriterCursor;
          *(_QWORD *)v20 = &CcLazyWriterCursor;
        }
      }
      while ( v19 != v18 );
      if ( v53 )
        CcUpdateTimeOnLogHandles();
    }
    v22 = v59;
    if ( v59 == &v59 )
      v23 = v54;
    else
      v23 = 1;
    while ( v22 != &v59 )
    {
      v45 = (_QWORD *)*v22;
      if ( (_QWORD **)v22[1] != &v59 || (_QWORD *)v45[1] != v22 )
        __fastfail(3u);
      v59 = (_QWORD *)*v22;
      v45[1] = &v59;
      CcPostWorkQueue(v22, &CcRegularWorkQueue);
      v22 = v59;
    }
    v56 = 0LL;
    if ( (_BYTE)dword_1403A9160
      || v23
      || CcDeferredWrites.Flink != &CcDeferredWrites
      || (CcComputeNextScanTime(v58, &v56), v56 != 0x7FFFFFFFFFFFFFFFLL) )
    {
      CcRescheduleLazyWriteScan(&v56);
      if ( CcForcedDisableLazywriteScan )
        CcForcedDisableLazywriteScan = 0;
    }
    else
    {
      CcForcedDisableLazywriteScan = 1;
      byte_1403231E0 = 0;
    }
    KeReleaseQueuedSpinLock(5uLL, v6);
    if ( (xmmword_1403AA2D0 & 0x20000) != 0 )
      CcPerfLogLoggedStreamsStats(v3);
    if ( CcDeferredWrites.Flink != &CcDeferredWrites )
      CcPostDeferredWrites();
  }
  else if ( CcDeferredWrites.Flink == &CcDeferredWrites )
  {
    byte_1403231E0 = 0;
    KeReleaseQueuedSpinLock(5uLL, v61);
  }
  else
  {
    CcRescheduleLazyWriteScan(0LL);
    KeReleaseQueuedSpinLock(5uLL, v61);
    CcPostDeferredWrites();
  }
}
