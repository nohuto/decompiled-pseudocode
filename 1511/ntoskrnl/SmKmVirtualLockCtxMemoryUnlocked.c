/*
 * XREFs of SmKmVirtualLockCtxMemoryUnlocked @ 0x1402090B0
 * Callers:
 *     SmKmStoreHelperCommandProcess @ 0x14011066C (SmKmStoreHelperCommandProcess.c)
 *     SmKmVirtualLockCtxLockMemory @ 0x140208F68 (SmKmVirtualLockCtxLockMemory.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     MmQueryWorkingSetInformation @ 0x1400E2C20 (MmQueryWorkingSetInformation.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14014FFF8 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     MmAdjustWorkingSetSize @ 0x1401D2A7C (MmAdjustWorkingSetSize.c)
 */

void __fastcall SmKmVirtualLockCtxMemoryUnlocked(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rax
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v6; // rsi
  unsigned __int8 AbOrphanedEntrySummary; // al
  unsigned int AbEntrySummary; // edx
  __int64 v9; // rcx
  __int64 v10; // rbp
  struct _KPROCESS *Process; // rax
  unsigned __int64 v12; // rcx
  int v13; // eax
  __int16 v14; // ax
  __int64 v15; // rcx
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rsi
  __int64 v19; // [rsp+30h] [rbp-48h] BYREF
  __int64 v20; // [rsp+38h] [rbp-40h] BYREF
  _QWORD v21[7]; // [rsp+40h] [rbp-38h] BYREF
  int v22; // [rsp+88h] [rbp+10h] BYREF
  unsigned __int64 v23; // [rsp+90h] [rbp+18h] BYREF
  unsigned __int64 v24; // [rsp+98h] [rbp+20h] BYREF

  _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 + 8), -a2);
  v3 = *(_QWORD *)(BugCheckParameter2 + 8);
  v4 = *(_QWORD *)(BugCheckParameter2 + 16);
  if ( v3 >= v4 || v3 && v4 - v3 < 0x800000 )
    return;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( KiAbEnabled )
  {
    v6 = KeGetCurrentThread();
    if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
      KeBugCheckEx(0x192u, (ULONG_PTR)v6, BugCheckParameter2, KeGetCurrentIrql(), 0LL);
    --v6->SpecialApcDisable;
    if ( !v6->AbEntrySummary )
    {
      if ( !v6->AbOrphanedEntrySummary )
      {
        v10 = 0LL;
        if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
          EtwTraceAutoBoostEntryExhaustion((__int64)v6, BugCheckParameter2);
        goto LABEL_11;
      }
      AbOrphanedEntrySummary = v6->AbOrphanedEntrySummary;
      v6->AbOrphanedEntrySummary = 0;
      v6->AbEntrySummary |= AbOrphanedEntrySummary;
    }
    AbEntrySummary = v6->AbEntrySummary;
    _BitScanForward((unsigned int *)&v9, AbEntrySummary);
    v6->AbEntrySummary = AbEntrySummary & ~(1 << v9);
    v3 = 96 * v9;
    v10 = (__int64)v6->LockEntries + v3;
    if ( v10 )
    {
      if ( BugCheckParameter2 + 0x70000000000LL > 0x7FFFFFFFFFLL
        || (Process = v6->ApcState.Process, (v12 = Process[1].ActiveProcessors.Bitmap[2]) == 0)
        || Process == PsInitialSystemProcess )
      {
        v13 = -1;
      }
      else
      {
        v13 = *(_DWORD *)(v12 + 8);
      }
      *(_DWORD *)(v10 + 40) = v13;
      v3 = 0x7FFFFFFFFFFFFFFCLL;
      *(_QWORD *)(v10 + 32) = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_20:
      v14 = v6->SpecialApcDisable + 1;
      v6->SpecialApcDisable = v14;
      if ( !v14 && ($E81C3296F15336D9BF9B2D43BB137B25 *)v6->ApcState.ApcListHead[0].Flink != &v6->152 )
        KiCheckForKernelApcDelivery(v3);
      goto LABEL_24;
    }
LABEL_11:
    _interlockedbittestandset((volatile signed __int32 *)&v6->116 + 1, 0xFu);
    goto LABEL_20;
  }
  v10 = 0LL;
LABEL_24:
  if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, v10, BugCheckParameter2);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  v15 = *(_QWORD *)(BugCheckParameter2 + 8);
  v16 = *(_QWORD *)(BugCheckParameter2 + 16) - v15;
  if ( (v16 >= 0x800000 || !v15 && *(_QWORD *)(BugCheckParameter2 + 16))
    && (int)MmQueryWorkingSetInformation(v21, &v20, &v19, &v23, &v24, &v22) >= 0 )
  {
    v17 = v23;
    v18 = v16 & 0xFFFFFFFFFFC00000uLL;
    *(_QWORD *)(BugCheckParameter2 + 16) -= v18;
    if ( v17 >= v18 )
    {
      v23 = v17 - v18;
      MmAdjustWorkingSetSize(v17 - v18, v24, 0LL, 0);
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
  KeAbPostRelease(BugCheckParameter2);
  KeLeaveCriticalRegion();
}
