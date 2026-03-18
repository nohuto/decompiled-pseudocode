/*
 * XREFs of CcLazyWriteScan @ 0x140067780
 * Callers:
 *     CcWorkerThread @ 0x1400328D0 (CcWorkerThread.c)
 * Callees:
 *     CcPostWorkQueue @ 0x14003F5E0 (CcPostWorkQueue.c)
 *     KeAcquireQueuedSpinLock @ 0x140041D50 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     CcRescheduleLazyWriteScan @ 0x1400676E4 (CcRescheduleLazyWriteScan.c)
 *     CcShouldLazyWriteCacheMap @ 0x140067EE0 (CcShouldLazyWriteCacheMap.c)
 *     CcSetLazyWriteScanQueued @ 0x140067FC0 (CcSetLazyWriteScanQueued.c)
 *     CcScanLogHandleList @ 0x140067FF4 (CcScanLogHandleList.c)
 *     CcCalculatePagesToWrite @ 0x14006819C (CcCalculatePagesToWrite.c)
 *     CcAdjustThrottle @ 0x140068264 (CcAdjustThrottle.c)
 *     CcUpdateTimeOnLogHandles @ 0x140128D28 (CcUpdateTimeOnLogHandles.c)
 *     CcPerfLogLoggedStreamsStats @ 0x14012DBD8 (CcPerfLogLoggedStreamsStats.c)
 *     CcComputeNextScanTime @ 0x14012E150 (CcComputeNextScanTime.c)
 *     CcPerfLogLazyWriteScan @ 0x14012F6C0 (CcPerfLogLazyWriteScan.c)
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     CcIncrementWriteBehindPriority @ 0x1401DC810 (CcIncrementWriteBehindPriority.c)
 *     CcPostDeferredWrites @ 0x1401DD050 (CcPostDeferredWrites.c)
 */

void __fastcall CcLazyWriteScan(int a1, __int64 a2)
{
  char v3; // r15
  unsigned int v4; // r12d
  char v5; // r13
  int v6; // edi
  KIRQL v7; // r14
  __int64 v8; // rdx
  unsigned __int128 v9; // rtt
  __int64 v10; // r10
  __int64 v11; // r9
  unsigned __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // rcx
  _QWORD *v17; // rax
  __int64 v18; // rcx
  _QWORD **v19; // rcx
  int v20; // ebx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r12
  __int64 v24; // rbx
  __int64 *v25; // r15
  __int64 v26; // rax
  __int64 v27; // rcx
  int v28; // ecx
  unsigned int v29; // eax
  __int64 v30; // rdx
  unsigned int v31; // ecx
  unsigned int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 **v35; // rax
  struct _KPRCB *CurrentPrcb; // r14
  _GENERAL_LOOKASIDE *P; // rsi
  __int64 v38; // rdi
  _GENERAL_LOOKASIDE *L; // rsi
  __int64 Size; // rdx
  __int64 Tag; // r8
  __int64 Type; // rcx
  KIRQL v43; // al
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 *v46; // rdx
  int v47; // ecx
  KIRQL v48; // al
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rcx
  char v53; // di
  _QWORD *v54; // rax
  KIRQL v55; // al
  char v56; // [rsp+60h] [rbp-9h]
  unsigned int v57; // [rsp+64h] [rbp-5h] BYREF
  __int64 v58; // [rsp+68h] [rbp-1h] BYREF
  char v59[8]; // [rsp+70h] [rbp+7h] BYREF
  _QWORD *v60; // [rsp+78h] [rbp+Fh] BYREF
  _QWORD **v61; // [rsp+80h] [rbp+17h]
  unsigned int v62; // [rsp+D8h] [rbp+6Fh]
  char v63; // [rsp+E0h] [rbp+77h]
  char v64; // [rsp+E8h] [rbp+7Fh]

  v62 = a2;
  v64 = 0;
  v3 = 0;
  v56 = 0;
  v63 = 0;
  v4 = a2;
  v5 = 0;
  v6 = 0;
  CcScanLogHandleList(&v57, a2, v59);
  v7 = KeAcquireQueuedSpinLock(5uLL);
  CcSetLazyWriteScanQueued(v4, 0LL);
  *(_QWORD *)&v9 = qword_14034DF60;
  *((_QWORD *)&v9 + 1) = v8;
  v10 = v9 / (unsigned int)dword_14034DF70;
  CcAverageAvailablePages = v10;
  CcAverageDirtyPages = qword_14034DF68 / (unsigned __int64)(unsigned int)dword_14034DF70;
  if ( (unsigned int)dword_14034DF70 <= 1 )
  {
    v14 = *(_QWORD *)(*(_QWORD *)qword_14034F0E8 + 5504LL);
    v13 = CcGlobalDirtyPageStatistics;
    v15 = CcGlobalDirtyPageStatistics;
  }
  else
  {
    v11 = (unsigned int)(dword_14034DF70 - 1);
    v12 = qword_14034DF68 / (unsigned __int64)(unsigned int)dword_14034DF70 * (unsigned int)v11;
    v13 = CcGlobalDirtyPageStatistics;
    v14 = *(_QWORD *)(*(_QWORD *)qword_14034F0E8 + 5504LL) + v10 * v11;
    v15 = CcGlobalDirtyPageStatistics + v12;
  }
  qword_14034DF60 = v14;
  qword_14034DF68 = v15;
  if ( !v13 && !byte_14034E041 )
  {
    if ( CcDeferredWrites.Flink == &CcDeferredWrites )
    {
      byte_14034E040 = 0;
      KeReleaseQueuedSpinLock(5uLL, v7);
      return;
    }
    CcRescheduleLazyWriteScan(0LL);
    KeReleaseQueuedSpinLock(5uLL, v7);
    goto LABEL_92;
  }
  v61 = &v60;
  v60 = &v60;
  while ( 1 )
  {
    v17 = (_QWORD *)CcPostTickWorkQueue;
    if ( (__int64 *)CcPostTickWorkQueue == &CcPostTickWorkQueue )
      break;
    v18 = *(_QWORD *)CcPostTickWorkQueue;
    if ( *(__int64 **)(CcPostTickWorkQueue + 8) != &CcPostTickWorkQueue || *(_QWORD *)(v18 + 8) != CcPostTickWorkQueue )
      __fastfail(3u);
    CcPostTickWorkQueue = *(_QWORD *)CcPostTickWorkQueue;
    *(_QWORD *)(v18 + 8) = &CcPostTickWorkQueue;
    v19 = v61;
    *v17 = &v60;
    v17[1] = v19;
    if ( *v19 != &v60 )
      __fastfail(3u);
    *v19 = v17;
    v61 = (_QWORD **)v17;
  }
  byte_14034E041 = 0;
  v57 = CcCalculatePagesToWrite(v4, &CcGlobalDirtyPageStatistics, &CcGlobalDirtyPageThresholds, 0LL);
  v20 = v57;
  CcAdjustThrottle(&CcGlobalDirtyPageStatistics, &CcGlobalDirtyPageThresholds);
  qword_14034DDE8 = CcGlobalDirtyPageStatistics;
  LODWORD(qword_14034DDF0) = v20;
  CcPagesYetToWrite = v20;
  *((_DWORD *)CcThroughputStats + 2 * (unsigned int)CcActiveExtraWriteBehindThreads) = v20;
  CcPrevExtraWBThreadCheckTime = MEMORY[0xFFFFF78000000014];
  if ( (xmmword_1403D1290 & 0x20000) != 0 )
    CcPerfLogLazyWriteScan(
      a1,
      v4,
      v21,
      CcGlobalDirtyPageStatistics,
      *(_QWORD *)(*(_QWORD *)qword_14034F0E8 + 5504LL),
      CcGlobalDirtyPageThresholds,
      (unsigned int)CcNumberOfMappedVacbs,
      qword_14034DF48,
      qword_14034DF50);
  v23 = 0LL;
  v24 = CcLazyWriterCursor - 136;
  if ( CcLazyWriterCursor != 136 )
  {
    do
    {
      v25 = (__int64 *)(v24 + 136);
      if ( (__int64 *)(v24 + 136) == &CcLazyWriterCursor )
        break;
      if ( !v23 )
        v23 = v24;
      if ( (unsigned __int8)CcShouldLazyWriteCacheMap(v24, v57, *(_QWORD *)(v24 + 96) & 0xFFFFFFFFFFFFFFF0uLL, v62) )
      {
        if ( (*(_DWORD *)(v24 + 152) & 0x1000000) != 0 )
        {
          v56 = 1;
          *(_DWORD *)(*(_QWORD *)(v24 + 240) + 144LL) |= 1u;
          v26 = *(_QWORD *)(v24 + 240);
          v27 = *(_QWORD *)(v24 + 256);
          if ( v27 > *(_QWORD *)(v26 + 112) )
          {
            *(_QWORD *)(v26 + 112) = v27;
            if ( (xmmword_1403D1290 & 0x20000) != 0 )
              *(_QWORD *)(*(_QWORD *)(v24 + 240) + 128LL) = *(_QWORD *)((*(_QWORD *)(v24 + 96) & 0xFFFFFFFFFFFFFFF0uLL)
                                                                      + 0x18);
          }
        }
        v28 = *(_DWORD *)(v24 + 152);
        v29 = *(_DWORD *)(v24 + 112);
        *(_DWORD *)(v24 + 192) = v29;
        if ( (v28 & 0x200) != 0 && v29 >= 0x40 )
        {
          if ( (v28 & 0x1000000) != 0 )
          {
            v30 = *(_QWORD *)(v24 + 240);
            v31 = *(_DWORD *)(v30 + 104);
            if ( v31 )
            {
              if ( v29 <= v31 )
                *(_DWORD *)(v30 + 104) = v31 - v29;
              else
                *(_DWORD *)(v30 + 104) = 0;
              ++CcDbgSkippedReductions;
            }
            else
            {
              *(_DWORD *)(v24 + 192) = v29 >> 3;
            }
          }
          else
          {
            *(_DWORD *)(v24 + 192) = v29 >> 3;
          }
        }
        if ( !v64 )
        {
          v32 = *(_DWORD *)(v24 + 192);
          if ( v32 < v57 )
          {
            v57 -= v32;
          }
          else if ( (*(_DWORD *)(v24 + 152) & 0x200) != 0 || v23 == v24 && (*(_DWORD *)(v24 + 268) & 0xF) == 0 )
          {
            v5 = 1;
            v57 = 0;
            v64 = 1;
          }
          else
          {
            v33 = CcLazyWriterCursor;
            v34 = qword_14034DE68;
            if ( *(__int64 **)(CcLazyWriterCursor + 8) != &CcLazyWriterCursor
              || *(__int64 **)qword_14034DE68 != &CcLazyWriterCursor )
            {
              __fastfail(3u);
            }
            *(_QWORD *)qword_14034DE68 = CcLazyWriterCursor;
            *(_QWORD *)(v33 + 8) = v34;
            v35 = *(__int64 ***)(v24 + 144);
            CcLazyWriterCursor = v24 + 136;
            qword_14034DE68 = (__int64)v35;
            if ( *v35 != v25 )
              __fastfail(3u);
            *v35 = &CcLazyWriterCursor;
            *(_QWORD *)(v24 + 144) = &CcLazyWriterCursor;
            v57 = 0;
            v64 = 1;
          }
        }
        *(_DWORD *)(v24 + 152) |= 0x20u;
        ++*(_DWORD *)(v24 + 112);
        KeReleaseQueuedSpinLock(5uLL, v7);
        CurrentPrcb = KeGetCurrentPrcb();
        P = CurrentPrcb->PPLookasideList[6].P;
        ++P->TotalAllocates;
        v38 = (__int64)RtlpInterlockedPopEntrySList(&P->ListHead);
        if ( !v38 )
        {
          ++P->AllocateMisses;
          L = CurrentPrcb->PPLookasideList[6].L;
          ++L->TotalAllocates;
          v38 = (__int64)RtlpInterlockedPopEntrySList(&L->ListHead);
          if ( !v38 )
          {
            Size = L->Size;
            Tag = L->Tag;
            Type = (unsigned int)L->Type;
            ++L->AllocateMisses;
            v38 = ((__int64 (__fastcall *)(__int64, __int64, __int64))L->AllocateEx)(Type, Size, Tag);
            if ( !v38 )
            {
              v55 = KeAcquireQueuedSpinLock(5uLL);
              *(_DWORD *)(v24 + 152) &= ~0x20u;
              v7 = v55;
              --*(_DWORD *)(v24 + 112);
              break;
            }
          }
        }
        *(_DWORD *)v38 = CurrentPrcb->Number;
        *(_BYTE *)(v38 + 104) = 2;
        *(_QWORD *)(v38 + 16) = v24;
        v43 = KeAcquireQueuedSpinLock(5uLL);
        --*(_DWORD *)(v24 + 112);
        v7 = v43;
        if ( (*(_DWORD *)(v24 + 152) & 0x10000) != 0 )
        {
          v46 = &CcFastTeardownWorkQueue;
          *(_QWORD *)(v24 + 496) = v38 | 1;
        }
        else
        {
          *(_QWORD *)(v24 + 496) = v38;
          v46 = &CcRegularWorkQueue;
        }
        CcPostWorkQueue(v38, (__int64)v46, v44, v45);
        v6 = 0;
        v63 = 1;
      }
      else
      {
        v47 = *(_DWORD *)(v24 + 152);
        if ( (v47 & 0x10020) == 0x10020 )
        {
          CcIncrementWriteBehindPriority(v24);
        }
        else if ( (unsigned int)++v6 >= 0x14 && (v47 & 0x820) == 0 )
        {
          ++*(_DWORD *)(v24 + 112);
          *(_DWORD *)(v24 + 152) = v47 | 0x20;
          KeReleaseQueuedSpinLock(5uLL, v7);
          v6 = 0;
          v48 = KeAcquireQueuedSpinLock(5uLL);
          *(_DWORD *)(v24 + 152) &= ~0x20u;
          v7 = v48;
          --*(_DWORD *)(v24 + 112);
        }
      }
      v24 = *v25 - 136;
      if ( v5 )
      {
        v49 = CcLazyWriterCursor;
        v50 = qword_14034DE68;
        if ( *(__int64 **)(CcLazyWriterCursor + 8) != &CcLazyWriterCursor
          || *(__int64 **)qword_14034DE68 != &CcLazyWriterCursor )
        {
          __fastfail(3u);
        }
        *(_QWORD *)qword_14034DE68 = CcLazyWriterCursor;
        *(_QWORD *)(v49 + 8) = v50;
        v51 = *v25;
        CcLazyWriterCursor = v51;
        qword_14034DE68 = (__int64)v25;
        if ( *(__int64 **)(v51 + 8) != v25 )
          __fastfail(3u);
        *(_QWORD *)(v51 + 8) = &CcLazyWriterCursor;
        v5 = 0;
        *v25 = (__int64)&CcLazyWriterCursor;
      }
    }
    while ( v24 != v23 );
    if ( v56 )
      CcUpdateTimeOnLogHandles();
    v3 = v63;
  }
  v52 = (__int64)v60;
  v53 = v3;
  if ( v60 != &v60 )
    v53 = 1;
  while ( (_QWORD **)v52 != &v60 )
  {
    v54 = *(_QWORD **)v52;
    if ( *(_QWORD ***)(v52 + 8) != &v60 || v54[1] != v52 )
      __fastfail(3u);
    v60 = *(_QWORD **)v52;
    v54[1] = &v60;
    CcPostWorkQueue(v52, (__int64)&CcRegularWorkQueue, v21, v22);
    v52 = (__int64)v60;
  }
  v58 = 0LL;
  if ( (_BYTE)dword_1403D0108
    || v53
    || CcDeferredWrites.Flink != &CcDeferredWrites
    || (CcComputeNextScanTime(v59, &v58), v58 != 0x7FFFFFFFFFFFFFFFLL) )
  {
    CcRescheduleLazyWriteScan(&v58);
    if ( CcForcedDisableLazywriteScan )
      CcForcedDisableLazywriteScan = 0;
  }
  else
  {
    CcForcedDisableLazywriteScan = 1;
    byte_14034E040 = 0;
  }
  KeReleaseQueuedSpinLock(5uLL, v7);
  if ( (xmmword_1403D1290 & 0x20000) != 0 )
    CcPerfLogLoggedStreamsStats(v62);
  if ( CcDeferredWrites.Flink != &CcDeferredWrites )
LABEL_92:
    CcPostDeferredWrites(v16);
}
