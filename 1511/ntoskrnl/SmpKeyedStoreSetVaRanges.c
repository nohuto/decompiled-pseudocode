/*
 * XREFs of SmpKeyedStoreSetVaRanges @ 0x1400F6008
 * Callers:
 *     SmStoreSetProcessVaRanges @ 0x1404D066C (SmStoreSetProcessVaRanges.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     SmpKeyedStoreEntryGet @ 0x1400926A8 (SmpKeyedStoreEntryGet.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14014FFF8 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

__int64 __fastcall SmpKeyedStoreSetVaRanges(__int64 BugCheckParameter2, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v5; // rsi
  struct _KTHREAD *v6; // rdi
  unsigned int AbEntrySummary; // edx
  __int64 v8; // rcx
  __int64 v9; // rbp
  int v10; // eax
  __int16 v11; // ax
  unsigned int v12; // edi
  struct _KPROCESS *Process; // rax
  unsigned __int64 v15; // rcx
  unsigned __int8 AbOrphanedEntrySummary; // al
  __int64 v17; // [rsp+58h] [rbp+10h] BYREF
  __int64 v18; // [rsp+68h] [rbp+20h]

  v18 = a4;
  v17 = a2;
  CurrentThread = KeGetCurrentThread();
  v5 = BugCheckParameter2;
  --CurrentThread->KernelApcDisable;
  if ( !KiAbEnabled )
  {
    v9 = 0LL;
    goto LABEL_11;
  }
  v6 = KeGetCurrentThread();
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    KeBugCheckEx(0x192u, (ULONG_PTR)v6, BugCheckParameter2, KeGetCurrentIrql(), 0LL);
  --v6->SpecialApcDisable;
  if ( !v6->AbEntrySummary )
  {
    if ( !v6->AbOrphanedEntrySummary )
    {
      v9 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(v6, BugCheckParameter2);
      goto LABEL_25;
    }
    AbOrphanedEntrySummary = v6->AbOrphanedEntrySummary;
    v6->AbOrphanedEntrySummary = 0;
    v6->AbEntrySummary |= AbOrphanedEntrySummary;
  }
  AbEntrySummary = v6->AbEntrySummary;
  _BitScanForward((unsigned int *)&v8, AbEntrySummary);
  LODWORD(v18) = v8;
  v6->AbEntrySummary = AbEntrySummary & ~(1 << v8);
  BugCheckParameter2 = 96 * v8;
  v9 = (__int64)v6->LockEntries + BugCheckParameter2;
  if ( !v9 )
  {
LABEL_25:
    _interlockedbittestandset((volatile signed __int32 *)&v6->116 + 1, 0xFu);
    goto LABEL_8;
  }
  if ( v5 + 0x70000000000LL > 0x7FFFFFFFFFLL
    || (Process = v6->ApcState.Process, (v15 = Process[1].ActiveProcessors.Bitmap[2]) == 0)
    || Process == PsInitialSystemProcess )
  {
    v10 = -1;
  }
  else
  {
    v10 = *(_DWORD *)(v15 + 8);
  }
  *(_DWORD *)(v9 + 40) = v10;
  BugCheckParameter2 = 0x7FFFFFFFFFFFFFFCLL;
  *(_QWORD *)(v9 + 32) = v5 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_8:
  v11 = v6->SpecialApcDisable + 1;
  v6->SpecialApcDisable = v11;
  if ( !v11 && ($E81C3296F15336D9BF9B2D43BB137B25 *)v6->ApcState.ApcListHead[0].Flink != &v6->152 )
    KiCheckForKernelApcDelivery(BugCheckParameter2);
LABEL_11:
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v5, v9, v5);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  v12 = SmpKeyedStoreEntryGet(v5, &v17, 0, 1) != 0 ? 0xFFFFFE96 : 0;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v5);
  KeAbPostRelease(v5);
  KeLeaveCriticalRegion();
  return v12 - 1073741275;
}
