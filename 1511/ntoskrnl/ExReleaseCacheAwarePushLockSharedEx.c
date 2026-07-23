/*
 * XREFs of ExReleaseCacheAwarePushLockSharedEx @ 0x140042F70
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KiAbThreadUnboostCpuPriority @ 0x140031C60 (KiAbThreadUnboostCpuPriority.c)
 *     KiAbEntryRemoveFromTree @ 0x140033590 (KiAbEntryRemoveFromTree.c)
 *     MmGetSessionIdEx @ 0x14003AFB0 (MmGetSessionIdEx.c)
 *     PsBoostThreadIoEx @ 0x140040D00 (PsBoostThreadIoEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     KiAbThreadClearAcquiredLockEntry @ 0x140043130 (KiAbThreadClearAcquiredLockEntry.c)
 *     MmIsSessionAddress @ 0x1400431C0 (MmIsSessionAddress.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     EtwTraceAutoBoostClearFloor @ 0x14020DA64 (EtwTraceAutoBoostClearFloor.c)
 */

unsigned __int64 __fastcall ExReleaseCacheAwarePushLockSharedEx(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter1)
{
  char v2; // di
  unsigned __int64 result; // rax
  ULONG_PTR v5; // rsi
  struct _KTHREAD *CurrentThread; // rbx
  int v7; // r14d
  __int64 SessionId; // r8
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rdi
  __int16 v13; // ax
  __int64 v14; // rdi
  __int64 v15; // rdx

  v2 = BugCheckParameter1;
  if ( (BugCheckParameter1 & 0xFFFFFFFC) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  result = _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL);
  if ( result != 17 )
    result = ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
  if ( (v2 & 2) == 0 )
  {
    v5 = *(_QWORD *)(BugCheckParameter2 + 16);
    if ( KiAbEnabled )
    {
      CurrentThread = KeGetCurrentThread();
      v7 = 0;
      if ( (unsigned int)MmIsSessionAddress(v5) )
        SessionId = (unsigned int)MmGetSessionIdEx(CurrentThread->ApcState.Process);
      else
        SessionId = 0xFFFFFFFFLL;
      if ( KeGetCurrentIrql() <= 1u )
      {
        v7 = 1;
        --CurrentThread->SpecialApcDisable;
      }
      v9 = KiAbThreadClearAcquiredLockEntry(CurrentThread, v5, SessionId);
      v12 = v9;
      if ( v9 )
      {
        *(_BYTE *)(v9 + 32) |= 2u;
        if ( *(__int64 *)(v9 + 32) < 0 )
          KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v9, v10, v11);
        v13 = *(_WORD *)(v12 + 88);
        if ( v13 )
        {
          if ( (v13 & 1) != 0 )
          {
            _InterlockedDecrement(&CurrentThread->AbCompletedIoBoostCount);
            PsBoostThreadIoEx((__int64)CurrentThread, 1, 0, 0LL);
          }
          if ( (*(_WORD *)(v12 + 88) & 0xFFFE) != 0 )
            KiAbThreadUnboostCpuPriority((ULONG_PTR)CurrentThread, v12, v11);
          if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
            EtwTraceAutoBoostClearFloor(
              CurrentThread,
              *(_QWORD *)(v12 + 32) & 0x7FFFFFFFFFFFFFFCLL | 0x8000000000000000uLL,
              *(unsigned __int16 *)(v12 + 88));
          *(_WORD *)(v12 + 88) = 0;
        }
        *(_BYTE *)(v12 + 25) &= ~1u;
        *(_QWORD *)(v12 + 32) = 0LL;
        v14 = v12 - (_QWORD)CurrentThread - 800;
        result = (unsigned __int64)((unsigned __int128)(v14 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 63;
        v15 = v14 / 96;
        if ( v7 )
        {
          CurrentThread->AbEntrySummary |= 1 << v15;
          return KiLeaveGuardedRegionUnsafe(CurrentThread);
        }
        else
        {
          _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v15);
        }
      }
      else
      {
        result = *((unsigned int *)&CurrentThread->MiscFlags + 1);
        if ( (result & 0x8000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v5, (unsigned int)v11, 0LL);
        if ( v7 )
          return KiLeaveGuardedRegionUnsafe(CurrentThread);
      }
    }
  }
  return result;
}
