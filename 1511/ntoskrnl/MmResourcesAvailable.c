/*
 * XREFs of MmResourcesAvailable @ 0x140041CA0
 * Callers:
 *     ExAllocatePoolWithTagPriority @ 0x140041DC0 (ExAllocatePoolWithTagPriority.c)
 * Callees:
 *     KePulseEvent @ 0x140014A90 (KePulseEvent.c)
 *     MiFreeExcessSegments @ 0x140015B78 (MiFreeExcessSegments.c)
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     MiTrimSegmentCache @ 0x14014231C (MiTrimSegmentCache.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14014FFF8 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     MI_FREE_PAGED_SESSION_POOL_PAGES_LEFT @ 0x1401DBB44 (MI_FREE_PAGED_SESSION_POOL_PAGES_LEFT.c)
 *     MiIssuePageExtendRequestNoWait @ 0x1401DCE50 (MiIssuePageExtendRequestNoWait.c)
 */

__int64 __fastcall MmResourcesAvailable(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  int v4; // esi
  int v5; // r14d
  unsigned __int64 v6; // r9
  char v7; // di
  unsigned __int64 v8; // r10
  int v9; // ebx
  __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  unsigned int v12; // r15d
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  int v16; // edi
  struct _KTHREAD *CurrentThread; // r13
  struct _KTHREAD *v18; // r13
  unsigned __int8 AbOrphanedEntrySummary; // al
  unsigned int AbEntrySummary; // edx
  __int64 v21; // rcx
  __int64 v22; // r12
  struct _KPROCESS *Process; // rax
  unsigned __int64 v24; // rcx
  int v25; // eax
  __int16 v26; // ax
  int v27; // esi
  unsigned __int64 v28; // rax
  int v29; // [rsp+50h] [rbp+0h] BYREF

  v3 = (unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL;
  v4 = 0;
  v5 = a3;
  v6 = a2;
  v7 = a1;
  v8 = ((a2 & 0xFFF) != 0) + (a2 >> 12);
  v9 = a1 & 1;
  if ( (a1 & 1) != 0 )
  {
    if ( (a1 & 0x20) != 0 )
      v10 = MI_FREE_PAGED_SESSION_POOL_PAGES_LEFT(a1, a2, a3, a2);
    else
      v10 = qword_1402FF7A8 - qword_1402FF798;
  }
  else
  {
    v10 = MiState[0] - qword_1402FE198;
  }
  v11 = v10 << 12;
  v12 = 0;
  if ( v5 == 16 )
    v13 = v6 + 0x80000;
  else
    v13 = v6 + 0x200000;
  if ( v13 <= v11 )
  {
    if ( v9
      && (qword_140301488 > (unsigned __int64)qword_1403010C8 ? (v14 = 0LL) : (v14 = qword_1403010C8 - qword_140301488),
          v8 > v14) )
    {
      MiIssuePageExtendRequestNoWait(&MiSystemPartition, v8, 0LL);
    }
    else
    {
      if ( v6 + 10485760 < v11 || qword_140301390 < 0x40000 )
        return 1LL;
      v12 = 1;
    }
  }
  v16 = v7 & 0x20;
  if ( !v16 )
  {
    if ( !v9 )
    {
      ++dword_1402FE21C;
      KeAcquireInStackQueuedSpinLock(&qword_140300DC0, (PKLOCK_QUEUE_HANDLE)(v3 + 16));
      if ( !qword_1402FFE60->Header.SignalState )
        KePulseEvent(qword_1402FFE60, 0, 0);
      KeReleaseInStackQueuedSpinLock((PKLOCK_QUEUE_HANDLE)(v3 + 16));
LABEL_55:
      if ( !(unsigned int)MiFreeExcessSegments() )
        MiTrimSegmentCache();
      goto LABEL_57;
    }
    ++dword_1402FE220;
    CurrentThread = KeGetCurrentThread();
    *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = CurrentThread;
    --CurrentThread->SpecialApcDisable;
    if ( !KiAbEnabled )
    {
      v22 = 0LL;
LABEL_46:
      if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_1402FF768, 0LL) )
        ExfAcquirePushLockExclusiveEx(&qword_1402FF768, v22, (ULONG_PTR)&qword_1402FF768);
      if ( v22 )
        *(_BYTE *)(v22 + 26) |= 1u;
      if ( !qword_1402FFE50->Header.SignalState )
        KePulseEvent(qword_1402FFE50, 0, 0);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1402FF768, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_1402FF768);
      KeAbPostRelease((ULONG_PTR)&qword_1402FF768);
      KiLeaveGuardedRegionUnsafe(CurrentThread);
      goto LABEL_55;
    }
    v18 = KeGetCurrentThread();
    if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
      KeBugCheckEx(0x192u, (ULONG_PTR)v18, (ULONG_PTR)&qword_1402FF768, KeGetCurrentIrql(), 0LL);
    --v18->SpecialApcDisable;
    if ( !v18->AbEntrySummary )
    {
      if ( !v18->AbOrphanedEntrySummary )
      {
        v22 = 0LL;
        if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
          EtwTraceAutoBoostEntryExhaustion(v18, &qword_1402FF768);
        goto LABEL_38;
      }
      AbOrphanedEntrySummary = v18->AbOrphanedEntrySummary;
      v18->AbOrphanedEntrySummary = 0;
      v18->AbEntrySummary |= AbOrphanedEntrySummary;
    }
    AbEntrySummary = v18->AbEntrySummary;
    _BitScanForward((unsigned int *)&v21, AbEntrySummary);
    *(_DWORD *)v3 = v21;
    v18->AbEntrySummary = AbEntrySummary & ~(1 << v21);
    v11 = 96 * v21;
    v22 = (__int64)v18->LockEntries + v11;
    if ( v22 )
    {
      if ( (unsigned __int64)(&qword_1402FF768 + 0xE000000000LL) > 0x7FFFFFFFFFLL
        || (Process = v18->ApcState.Process, (v24 = Process[1].ActiveProcessors.Bitmap[2]) == 0)
        || Process == PsInitialSystemProcess )
      {
        v25 = -1;
      }
      else
      {
        v25 = *(_DWORD *)(v24 + 8);
      }
      *(_DWORD *)(v22 + 40) = v25;
      v11 = 0x7FFFFFFFFFFFFFFCLL;
      *(_QWORD *)(v22 + 32) = (unsigned __int64)&qword_1402FF768 & 0x7FFFFFFFFFFFFFFCLL;
      goto LABEL_41;
    }
LABEL_38:
    _interlockedbittestandset((volatile signed __int32 *)&v18->116 + 1, 0xFu);
LABEL_41:
    v26 = v18->SpecialApcDisable + 1;
    v18->SpecialApcDisable = v26;
    if ( !v26 && ($E81C3296F15336D9BF9B2D43BB137B25 *)v18->ApcState.ApcListHead[0].Flink != &v18->152 )
      KiCheckForKernelApcDelivery(v11);
    CurrentThread = *(struct _KTHREAD **)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
    goto LABEL_46;
  }
LABEL_57:
  if ( !v12 )
  {
    LOBYTE(v4) = v5 != 16;
    v27 = v4 + 1;
    if ( v9 )
    {
      if ( v16 )
      {
        ++*((_DWORD *)&MiState[9] + v27);
        v28 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
        ++*(_DWORD *)(v28 + 88);
      }
      else
      {
        ++*((_DWORD *)&MiState[7] + v27 + 1);
      }
    }
    else
    {
      ++*((_DWORD *)&MiState[6] + v27);
    }
    ++dword_1402FE1D8;
    if ( (MiAllocationDebug & 1) != 0 )
      __debugbreak();
  }
  return v12;
}
