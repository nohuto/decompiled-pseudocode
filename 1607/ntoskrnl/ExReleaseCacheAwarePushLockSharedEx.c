/*
 * XREFs of ExReleaseCacheAwarePushLockSharedEx @ 0x140013520
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     KiAbThreadClearAcquiredLockEntry @ 0x140013730 (KiAbThreadClearAcquiredLockEntry.c)
 *     MmGetSessionIdEx @ 0x140024B6C (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x140030BB0 (KiAbEntryRemoveFromTree.c)
 *     KiAbThreadUnboostCpuPriority @ 0x14009FD10 (KiAbThreadUnboostCpuPriority.c)
 *     KiAbThreadUnboostIoPriority @ 0x1400B0D88 (KiAbThreadUnboostIoPriority.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     EtwTraceAutoBoostClearFloor @ 0x140225734 (EtwTraceAutoBoostClearFloor.c)
 */

unsigned __int64 __fastcall ExReleaseCacheAwarePushLockSharedEx(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter1)
{
  char v2; // di
  unsigned __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rdi
  ULONG_PTR v6; // rbp
  int v7; // r14d
  __int64 SessionId; // r8
  __int64 v9; // rax
  unsigned int v10; // r8d
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // rbx
  __int64 v14; // rdx

  v2 = BugCheckParameter1;
  if ( (BugCheckParameter1 & 0xFFFFFFFC) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  result = _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL);
  if ( result != 17 )
    result = ExfReleasePushLockShared(BugCheckParameter2);
  if ( (v2 & 2) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v6 = *(_QWORD *)(BugCheckParameter2 + 16);
    v7 = 0;
    if ( v6 < qword_140326950 || v6 >= qword_140326950 + 0x8000000000LL )
      SessionId = 0xFFFFFFFFLL;
    else
      SessionId = (unsigned int)MmGetSessionIdEx(CurrentThread->ApcState.Process);
    if ( KeGetCurrentIrql() <= 1u )
    {
      v7 = 1;
      --CurrentThread->SpecialApcDisable;
    }
    v9 = KiAbThreadClearAcquiredLockEntry(CurrentThread, v6, SessionId);
    v11 = v9;
    if ( v9 )
    {
      *(_BYTE *)(v9 + 32) |= 2u;
      if ( *(__int64 *)(v9 + 32) < 0 )
        KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v9);
      v12 = *(_DWORD *)(v11 + 88);
      if ( (v12 & 0x1FFFF) != 0 )
      {
        if ( (v12 & 0x8000u) != 0 )
          KiAbThreadUnboostIoPriority(CurrentThread, 0LL);
        if ( (*(_BYTE *)(v11 + 90) & 1) != 0 )
        {
          _InterlockedDecrement(&CurrentThread->AbCompletedIoQoSBoostCount);
          _InterlockedDecrement((volatile signed __int32 *)&CurrentThread[1].Timer.DueTime.HighPart);
        }
        if ( (*(_WORD *)(v11 + 88) & 0x7FFF) != 0 )
          KiAbThreadUnboostCpuPriority((ULONG_PTR)CurrentThread);
        if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
          EtwTraceAutoBoostClearFloor(
            CurrentThread,
            *(_QWORD *)(v11 + 32) & 0x7FFFFFFFFFFFFFFCLL | 0x8000000000000000uLL,
            *(_DWORD *)(v11 + 88) & 0x1FFFF);
        *(_DWORD *)(v11 + 88) &= 0xFFFE0000;
      }
      *(_BYTE *)(v11 + 25) &= ~1u;
      *(_QWORD *)(v11 + 32) = 0LL;
      v13 = v11 - (_QWORD)CurrentThread - 800;
      result = (unsigned __int64)((unsigned __int128)(v13 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 63;
      v14 = v13 / 96;
      if ( v7 )
      {
        CurrentThread->AbEntrySummary |= 1 << v14;
        return KiLeaveGuardedRegionUnsafe(CurrentThread);
      }
      else
      {
        _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v14);
      }
    }
    else
    {
      result = *((unsigned int *)&CurrentThread->MiscFlags + 1);
      if ( (result & 0x8000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v6, v10, 0LL);
      if ( v7 )
        return KiLeaveGuardedRegionUnsafe(CurrentThread);
    }
  }
  return result;
}
