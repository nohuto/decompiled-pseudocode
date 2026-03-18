/*
 * XREFs of MiDereferenceExtendInfo @ 0x14010384C
 * Callers:
 *     MiDeleteVad @ 0x14006AE10 (MiDeleteVad.c)
 *     MiMapViewOfDataSection @ 0x140416C00 (MiMapViewOfDataSection.c)
 *     MiDeletePartialCloneVad @ 0x14062CC30 (MiDeletePartialCloneVad.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14014FFF8 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall MiDereferenceExtendInfo(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // r15
  __int64 v4; // r13
  void *v5; // r14
  struct _KTHREAD *v6; // rdi
  unsigned int AbEntrySummary; // edx
  __int64 v8; // rcx
  __int64 v9; // rbp
  int v10; // eax
  __int16 v11; // ax
  struct _KPROCESS *Process; // rax
  unsigned __int64 v14; // rcx
  unsigned __int8 AbOrphanedEntrySummary; // al

  CurrentThread = KeGetCurrentThread();
  v4 = a1;
  v5 = 0LL;
  --CurrentThread->SpecialApcDisable;
  if ( !KiAbEnabled )
  {
    v9 = 0LL;
    goto LABEL_11;
  }
  v6 = KeGetCurrentThread();
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    KeBugCheckEx(0x192u, (ULONG_PTR)v6, (ULONG_PTR)&qword_1402FE2A0, KeGetCurrentIrql(), 0LL);
  --v6->SpecialApcDisable;
  if ( !v6->AbEntrySummary )
  {
    if ( !v6->AbOrphanedEntrySummary )
    {
      v9 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(v6, &qword_1402FE2A0);
      goto LABEL_30;
    }
    AbOrphanedEntrySummary = v6->AbOrphanedEntrySummary;
    v6->AbOrphanedEntrySummary = 0;
    v6->AbEntrySummary |= AbOrphanedEntrySummary;
  }
  AbEntrySummary = v6->AbEntrySummary;
  _BitScanForward((unsigned int *)&v8, AbEntrySummary);
  v6->AbEntrySummary = AbEntrySummary & ~(1 << v8);
  a1 = 96 * v8;
  v9 = (__int64)v6->LockEntries + a1;
  if ( !v9 )
  {
LABEL_30:
    _interlockedbittestandset((volatile signed __int32 *)&v6->116 + 1, 0xFu);
    goto LABEL_8;
  }
  if ( (unsigned __int64)&qword_1402FE2A0 < 0xFFFFF90000000000uLL
    || (unsigned __int64)&qword_1402FE2A0 >= 0xFFFFF98000000000uLL
    || (Process = v6->ApcState.Process, (v14 = Process[1].ActiveProcessors.Bitmap[2]) == 0)
    || Process == PsInitialSystemProcess )
  {
    v10 = -1;
  }
  else
  {
    v10 = *(_DWORD *)(v14 + 8);
  }
  *(_DWORD *)(v9 + 40) = v10;
  a1 = 0x7FFFFFFFFFFFFFFCLL;
  *(_QWORD *)(v9 + 32) = (unsigned __int64)&qword_1402FE2A0 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_8:
  v11 = v6->SpecialApcDisable + 1;
  v6->SpecialApcDisable = v11;
  if ( !v11 && ($E81C3296F15336D9BF9B2D43BB137B25 *)v6->ApcState.ApcListHead[0].Flink != &v6->152 )
    KiCheckForKernelApcDelivery(a1);
LABEL_11:
  if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_1402FE2A0, 0LL) )
    ExfAcquirePushLockExclusiveEx(&qword_1402FE2A0, v9, (ULONG_PTR)&qword_1402FE2A0);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  if ( !--*(_DWORD *)(*(_QWORD *)(v4 + 120) + 8LL) )
  {
    v5 = *(void **)(v4 + 120);
    *(_QWORD *)(*(_QWORD *)a2 + 32LL) = 0LL;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1402FE2A0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_1402FE2A0);
  KeAbPostRelease((ULONG_PTR)&qword_1402FE2A0);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
}
