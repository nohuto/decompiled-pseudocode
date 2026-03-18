/*
 * XREFs of CcLazyWriteScan @ 0x140100810
 * Callers:
 *     CcWorkerThread @ 0x1400B2610 (CcWorkerThread.c)
 * Callees:
 *     CcScanLogHandleList @ 0x14000CF98 (CcScanLogHandleList.c)
 *     CcCalculatePagesToWrite @ 0x14000D5E4 (CcCalculatePagesToWrite.c)
 *     KeAcquireQueuedSpinLock @ 0x1400B0A70 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
 *     CcShouldLazyWriteCacheMap @ 0x140100F0C (CcShouldLazyWriteCacheMap.c)
 *     CcPostWorkQueue @ 0x140100FF0 (CcPostWorkQueue.c)
 *     CcAllocateWorkQueueEntry @ 0x140101324 (CcAllocateWorkQueueEntry.c)
 *     CcSetLazyWriteScanQueued @ 0x140101C34 (CcSetLazyWriteScanQueued.c)
 *     CcAdjustThrottle @ 0x140101C68 (CcAdjustThrottle.c)
 *     CcRescheduleLazyWriteScan @ 0x140101E20 (CcRescheduleLazyWriteScan.c)
 *     CcUpdateTimeOnLogHandles @ 0x1401021F8 (CcUpdateTimeOnLogHandles.c)
 *     CcComputeNextScanTime @ 0x140102444 (CcComputeNextScanTime.c)
 *     CcPerfLogLoggedStreamsStats @ 0x140123E90 (CcPerfLogLoggedStreamsStats.c)
 *     CcPerfLogLazyWriteScan @ 0x140125148 (CcPerfLogLazyWriteScan.c)
 *     CcIncrementWriteBehindPriority @ 0x1401A8AD8 (CcIncrementWriteBehindPriority.c)
 *     CcPostDeferredWrites @ 0x1401A8F40 (CcPostDeferredWrites.c)
 */

void __fastcall CcLazyWriteScan(int a1, unsigned int a2)
{
  char v4; // r15
  int v5; // esi
  KIRQL v6; // r12
  __int64 v7; // rdx
  unsigned __int128 v8; // rtt
  __int64 v9; // r10
  unsigned __int64 v10; // rdx
  __int64 v11; // r9
  unsigned __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // r9
  __int64 v15; // r8
  _QWORD *v16; // rax
  int v17; // ebx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r14
  __int64 v23; // rbx
  unsigned int v24; // r12d
  __int64 *v25; // rdi
  _QWORD *v26; // rcx
  char v27; // di
  __int64 v28; // rcx
  int v29; // ecx
  unsigned int v30; // eax
  unsigned int v31; // eax
  __int64 v32; // rsi
  KIRQL v33; // al
  __int64 *v34; // rdx
  KIRQL v35; // al
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rdx
  unsigned int v39; // ecx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 **v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rcx
  _QWORD **v46; // rcx
  _QWORD *v47; // rax
  __int64 v48; // rcx
  KIRQL v49; // al
  char v50; // [rsp+60h] [rbp-9h]
  char v51; // [rsp+61h] [rbp-8h]
  int v52; // [rsp+64h] [rbp-5h] BYREF
  __int64 v53; // [rsp+68h] [rbp-1h] BYREF
  __int64 v54; // [rsp+70h] [rbp+7h] BYREF
  __int64 v55; // [rsp+78h] [rbp+Fh] BYREF
  _QWORD *v56; // [rsp+80h] [rbp+17h] BYREF
  _QWORD **v57; // [rsp+88h] [rbp+1Fh]
  KIRQL v58; // [rsp+E0h] [rbp+77h]
  char v59; // [rsp+E8h] [rbp+7Fh]

  v59 = 0;
  v50 = 0;
  v51 = 0;
  v4 = 0;
  v5 = 0;
  CcScanLogHandleList(&v52, a2, &v55);
  v58 = KeAcquireQueuedSpinLock(5uLL);
  v6 = v58;
  CcSetLazyWriteScanQueued(a2, 0LL);
  *(_QWORD *)&v8 = qword_1402FDAC0;
  *((_QWORD *)&v8 + 1) = v7;
  v9 = v8 / (unsigned int)dword_1402FDAD0;
  CcAverageAvailablePages = v9;
  v10 = qword_1402FDAC8 % (unsigned __int64)(unsigned int)dword_1402FDAD0;
  CcAverageDirtyPages = qword_1402FDAC8 / (unsigned __int64)(unsigned int)dword_1402FDAD0;
  if ( (unsigned int)dword_1402FDAD0 <= 1 )
  {
    v14 = *(_QWORD *)(*(_QWORD *)qword_1402FEC28 + 5888LL);
    v13 = CcGlobalDirtyPageStatistics;
    v15 = CcGlobalDirtyPageStatistics;
  }
  else
  {
    v11 = (unsigned int)(dword_1402FDAD0 - 1);
    v12 = qword_1402FDAC8 / (unsigned __int64)(unsigned int)dword_1402FDAD0 * (unsigned int)v11;
    v10 = *(_QWORD *)qword_1402FEC28;
    v13 = CcGlobalDirtyPageStatistics;
    v14 = *(_QWORD *)(*(_QWORD *)qword_1402FEC28 + 5888LL) + v9 * v11;
    v15 = CcGlobalDirtyPageStatistics + v12;
  }
  qword_1402FDAC0 = v14;
  qword_1402FDAC8 = v15;
  if ( !v13 && !byte_1402FDBA1 )
  {
    if ( CcDeferredWrites.Flink == &CcDeferredWrites )
    {
      byte_1402FDBA0 = 0;
      KeReleaseQueuedSpinLock(5uLL, v58);
    }
    else
    {
      CcRescheduleLazyWriteScan(0LL, v10, v15, v14);
      KeReleaseQueuedSpinLock(5uLL, v58);
      CcPostDeferredWrites(v48);
    }
    return;
  }
  v57 = &v56;
  v56 = &v56;
  while ( 1 )
  {
    v16 = (_QWORD *)CcPostTickWorkQueue;
    if ( (__int64 *)CcPostTickWorkQueue == &CcPostTickWorkQueue )
      break;
    v45 = *(_QWORD *)CcPostTickWorkQueue;
    if ( *(__int64 **)(CcPostTickWorkQueue + 8) != &CcPostTickWorkQueue || *(_QWORD *)(v45 + 8) != CcPostTickWorkQueue )
      __fastfail(3u);
    CcPostTickWorkQueue = *(_QWORD *)CcPostTickWorkQueue;
    *(_QWORD *)(v45 + 8) = &CcPostTickWorkQueue;
    v46 = v57;
    *v16 = &v56;
    v16[1] = v46;
    if ( *v46 != &v56 )
      __fastfail(3u);
    *v46 = v16;
    v57 = (_QWORD **)v16;
  }
  byte_1402FDBA1 = 0;
  v52 = CcCalculatePagesToWrite(
          a2,
          (__int64)&CcGlobalDirtyPageStatistics,
          (unsigned __int64 *)&CcGlobalDirtyPageThresholds,
          0);
  v17 = v52;
  CcAdjustThrottle(&CcGlobalDirtyPageStatistics, &CcGlobalDirtyPageThresholds);
  v20 = (unsigned int)CcActiveExtraWriteBehindThreads;
  qword_1402FD948 = CcGlobalDirtyPageStatistics;
  v21 = (__int64)CcThroughputStats;
  LODWORD(qword_1402FD950) = v17;
  CcPagesYetToWrite = v17;
  *((_DWORD *)CcThroughputStats + 2 * (unsigned int)CcActiveExtraWriteBehindThreads) = v17;
  CcPrevExtraWBThreadCheckTime = MEMORY[0xFFFFF78000000014];
  if ( (xmmword_140382290 & 0x20000) != 0 )
    CcPerfLogLazyWriteScan(
      a1,
      a2,
      v18,
      CcGlobalDirtyPageStatistics,
      *(_QWORD *)(*(_QWORD *)qword_1402FEC28 + 5888LL),
      CcGlobalDirtyPageThresholds,
      (unsigned int)CcNumberOfMappedVacbs,
      qword_1402FDAA8,
      qword_1402FDAB0);
  v22 = 0LL;
  v23 = CcLazyWriterCursor - 136;
  if ( CcLazyWriterCursor == 136 )
    goto LABEL_21;
  v24 = v52;
  v20 = (unsigned __int64)&CcLazyWriterCursor;
  while ( 1 )
  {
    v25 = (__int64 *)(v23 + 136);
    if ( (__int64 *)(v23 + 136) == &CcLazyWriterCursor )
    {
LABEL_18:
      v6 = v58;
      goto LABEL_19;
    }
    if ( !v22 )
      v22 = v23;
    if ( !(unsigned __int8)CcShouldLazyWriteCacheMap(v23, v24, *(_QWORD *)(v23 + 96) & 0xFFFFFFFFFFFFFFF0uLL, a2) )
    {
      v21 = *(unsigned int *)(v23 + 152);
      if ( (*(_DWORD *)(v23 + 152) & 0x10020) == 0x10020 )
      {
        CcIncrementWriteBehindPriority(v23);
      }
      else if ( (unsigned int)++v5 >= 0x14 && (v21 & 0x820) == 0 )
      {
        ++*(_DWORD *)(v23 + 112);
        *(_DWORD *)(v23 + 152) = v21 | 0x20;
        KeReleaseQueuedSpinLock(5uLL, v58);
        v5 = 0;
        v35 = KeAcquireQueuedSpinLock(5uLL);
        *(_DWORD *)(v23 + 152) &= ~0x20u;
        --*(_DWORD *)(v23 + 112);
        v58 = v35;
      }
      goto LABEL_16;
    }
    if ( (*(_DWORD *)(v23 + 152) & 0x1000000) != 0 )
    {
      v50 = 1;
      *(_DWORD *)(*(_QWORD *)(v23 + 240) + 144LL) |= 1u;
      v36 = *(_QWORD *)(v23 + 240);
      v37 = *(_QWORD *)(v23 + 256);
      if ( v37 > *(_QWORD *)(v36 + 112) )
      {
        *(_QWORD *)(v36 + 112) = v37;
        if ( (xmmword_140382290 & 0x20000) != 0 )
          *(_QWORD *)(*(_QWORD *)(v23 + 240) + 128LL) = *(_QWORD *)((*(_QWORD *)(v23 + 96) & 0xFFFFFFFFFFFFFFF0uLL)
                                                                  + 0x18);
      }
      v24 = v52;
    }
    v29 = *(_DWORD *)(v23 + 152);
    v30 = *(_DWORD *)(v23 + 112);
    *(_DWORD *)(v23 + 192) = v30;
    if ( (v29 & 0x200) != 0 && v30 >= 0x40 )
    {
      if ( (v29 & 0x1000000) != 0 )
      {
        v38 = *(_QWORD *)(v23 + 240);
        v39 = *(_DWORD *)(v38 + 104);
        if ( v39 )
        {
          if ( v30 <= v39 )
            *(_DWORD *)(v38 + 104) = v39 - v30;
          else
            *(_DWORD *)(v38 + 104) = 0;
          ++CcDbgSkippedReductions;
        }
        else
        {
          *(_DWORD *)(v23 + 192) = v30 >> 3;
        }
      }
      else
      {
        *(_DWORD *)(v23 + 192) = v30 >> 3;
      }
    }
    if ( !v59 )
    {
      v31 = *(_DWORD *)(v23 + 192);
      if ( v31 >= v24 )
      {
        if ( (*(_DWORD *)(v23 + 152) & 0x200) != 0 || v22 == v23 && (*(_DWORD *)(v23 + 268) & 0xF) == 0 )
        {
          v4 = 1;
        }
        else
        {
          v40 = CcLazyWriterCursor;
          v41 = qword_1402FD9C8;
          if ( *(__int64 **)(CcLazyWriterCursor + 8) != &CcLazyWriterCursor
            || *(__int64 **)qword_1402FD9C8 != &CcLazyWriterCursor )
          {
            __fastfail(3u);
          }
          *(_QWORD *)qword_1402FD9C8 = CcLazyWriterCursor;
          *(_QWORD *)(v40 + 8) = v41;
          v42 = *(__int64 ***)(v23 + 144);
          CcLazyWriterCursor = v23 + 136;
          qword_1402FD9C8 = (__int64)v42;
          if ( *v42 != v25 )
            __fastfail(3u);
          *v42 = &CcLazyWriterCursor;
          *(_QWORD *)(v23 + 144) = &CcLazyWriterCursor;
        }
        v24 = 0;
        v59 = 1;
      }
      else
      {
        v24 -= v31;
      }
      v52 = v24;
    }
    *(_DWORD *)(v23 + 152) |= 0x20u;
    ++*(_DWORD *)(v23 + 112);
    KeReleaseQueuedSpinLock(5uLL, v58);
    if ( (int)CcAllocateWorkQueueEntry(&v54) < 0 )
      break;
    v32 = v54;
    *(_BYTE *)(v54 + 104) = 2;
    *(_QWORD *)(v32 + 16) = v23;
    v33 = KeAcquireQueuedSpinLock(5uLL);
    --*(_DWORD *)(v23 + 112);
    v58 = v33;
    if ( (*(_DWORD *)(v23 + 152) & 0x10000) != 0 )
    {
      v34 = &CcFastTeardownWorkQueue;
      *(_QWORD *)(v23 + 496) = v32 | 1;
    }
    else
    {
      *(_QWORD *)(v23 + 496) = v32;
      v34 = &CcRegularWorkQueue;
    }
    CcPostWorkQueue(v32, v34);
    v5 = 0;
    v51 = 1;
LABEL_16:
    v20 = (unsigned __int64)&CcLazyWriterCursor;
    v23 = *v25 - 136;
    if ( v4 )
    {
      v21 = CcLazyWriterCursor;
      v43 = qword_1402FD9C8;
      if ( *(__int64 **)(CcLazyWriterCursor + 8) != &CcLazyWriterCursor
        || *(__int64 **)qword_1402FD9C8 != &CcLazyWriterCursor )
      {
        __fastfail(3u);
      }
      *(_QWORD *)qword_1402FD9C8 = CcLazyWriterCursor;
      *(_QWORD *)(v21 + 8) = v43;
      v44 = *v25;
      CcLazyWriterCursor = v44;
      qword_1402FD9C8 = (__int64)v25;
      if ( *(__int64 **)(v44 + 8) != v25 )
        __fastfail(3u);
      *(_QWORD *)(v44 + 8) = &CcLazyWriterCursor;
      v4 = 0;
      *v25 = (__int64)&CcLazyWriterCursor;
    }
    if ( v23 == v22 )
      goto LABEL_18;
  }
  v49 = KeAcquireQueuedSpinLock(5uLL);
  *(_DWORD *)(v23 + 152) &= ~0x20u;
  v6 = v49;
  --*(_DWORD *)(v23 + 112);
LABEL_19:
  if ( v50 )
    CcUpdateTimeOnLogHandles(v21, v20);
LABEL_21:
  v26 = v56;
  if ( v56 == &v56 )
    v27 = v51;
  else
    v27 = 1;
  while ( v26 != &v56 )
  {
    v47 = (_QWORD *)*v26;
    if ( (_QWORD **)v26[1] != &v56 || (_QWORD *)v47[1] != v26 )
      __fastfail(3u);
    v56 = (_QWORD *)*v26;
    v47[1] = &v56;
    CcPostWorkQueue(v26, &CcRegularWorkQueue);
    v26 = v56;
  }
  v53 = 0LL;
  if ( (_BYTE)dword_140381118
    || v27
    || CcDeferredWrites.Flink != &CcDeferredWrites
    || (CcComputeNextScanTime(&v55, &v53), v53 != 0x7FFFFFFFFFFFFFFFLL) )
  {
    CcRescheduleLazyWriteScan(&v53, v20, v18, v19);
    if ( CcForcedDisableLazywriteScan )
      CcForcedDisableLazywriteScan = 0;
  }
  else
  {
    CcForcedDisableLazywriteScan = 1;
    byte_1402FDBA0 = 0;
  }
  KeReleaseQueuedSpinLock(5uLL, v6);
  if ( (xmmword_140382290 & 0x20000) != 0 )
    CcPerfLogLoggedStreamsStats(a2);
  if ( CcDeferredWrites.Flink != &CcDeferredWrites )
    CcPostDeferredWrites(v28);
}
