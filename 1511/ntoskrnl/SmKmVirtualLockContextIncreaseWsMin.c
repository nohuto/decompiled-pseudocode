/*
 * XREFs of SmKmVirtualLockContextIncreaseWsMin @ 0x140208CDC
 * Callers:
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

__int64 __fastcall SmKmVirtualLockContextIncreaseWsMin(__int64 BugCheckParameter2, __int64 a2, unsigned __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v6; // rsi
  struct _KTHREAD *v7; // rdi
  unsigned __int8 AbOrphanedEntrySummary; // al
  unsigned int AbEntrySummary; // edx
  __int64 v10; // rcx
  __int64 v11; // rbp
  struct _KPROCESS *Process; // rax
  unsigned __int64 v13; // rcx
  int v14; // eax
  __int16 v15; // ax
  int v16; // edi
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  int v20; // eax
  unsigned __int64 v21; // rax
  unsigned __int64 v23; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v24; // [rsp+38h] [rbp-50h] BYREF
  __int64 v25; // [rsp+40h] [rbp-48h] BYREF
  __int64 v26; // [rsp+48h] [rbp-40h] BYREF
  __int64 v27; // [rsp+50h] [rbp-38h] BYREF
  int v28; // [rsp+A8h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v6 = BugCheckParameter2;
  --CurrentThread->KernelApcDisable;
  if ( !KiAbEnabled )
  {
    v11 = 0LL;
    goto LABEL_21;
  }
  v7 = KeGetCurrentThread();
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    KeBugCheckEx(0x192u, (ULONG_PTR)v7, BugCheckParameter2, KeGetCurrentIrql(), 0LL);
  --v7->SpecialApcDisable;
  if ( !v7->AbEntrySummary )
  {
    if ( !v7->AbOrphanedEntrySummary )
    {
      v11 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion((__int64)v7, BugCheckParameter2);
      goto LABEL_8;
    }
    AbOrphanedEntrySummary = v7->AbOrphanedEntrySummary;
    v7->AbOrphanedEntrySummary = 0;
    v7->AbEntrySummary |= AbOrphanedEntrySummary;
  }
  AbEntrySummary = v7->AbEntrySummary;
  _BitScanForward((unsigned int *)&v10, AbEntrySummary);
  v7->AbEntrySummary = AbEntrySummary & ~(1 << v10);
  BugCheckParameter2 = 96 * v10;
  v11 = (__int64)v7->LockEntries + BugCheckParameter2;
  if ( !v11 )
  {
LABEL_8:
    _interlockedbittestandset((volatile signed __int32 *)&v7->116 + 1, 0xFu);
    goto LABEL_17;
  }
  if ( v6 + 0x70000000000LL > 0x7FFFFFFFFFLL
    || (Process = v7->ApcState.Process, (v13 = Process[1].ActiveProcessors.Bitmap[2]) == 0)
    || Process == PsInitialSystemProcess )
  {
    v14 = -1;
  }
  else
  {
    v14 = *(_DWORD *)(v13 + 8);
  }
  *(_DWORD *)(v11 + 40) = v14;
  BugCheckParameter2 = 0x7FFFFFFFFFFFFFFCLL;
  *(_QWORD *)(v11 + 32) = v6 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_17:
  v15 = v7->SpecialApcDisable + 1;
  v7->SpecialApcDisable = v15;
  if ( !v15 && ($E81C3296F15336D9BF9B2D43BB137B25 *)v7->ApcState.ApcListHead[0].Flink != &v7->152 )
    KiCheckForKernelApcDelivery(BugCheckParameter2);
LABEL_21:
  if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v6, v11, v6);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  if ( a3 >= *(_QWORD *)(v6 + 16) )
  {
    do
    {
      v16 = MmQueryWorkingSetInformation(&v27, &v26, &v25, &v23, &v24, &v28);
      if ( v16 < 0 )
        break;
      v17 = (a2 + 0x3FFFFF) & 0xFFFFFFFFFFC00000uLL;
      v18 = v17 + v23;
      if ( v17 + v23 <= v23 )
      {
        v16 = -1073741675;
        break;
      }
      v19 = v24;
      v23 += v17;
      if ( v18 > v24 )
        v19 = v18;
      v24 = v19;
      v20 = MmAdjustWorkingSetSize(v18, v19, 0LL, 1);
      v16 = v20;
      if ( v20 >= 0 )
      {
        v21 = *(_QWORD *)(v6 + 16);
        if ( v21 + v17 > v21 )
          *(_QWORD *)(v6 + 16) = v21 + v17;
        v16 = 0;
        break;
      }
    }
    while ( v20 == -1073741748 );
  }
  else
  {
    v16 = 1075380276;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v6);
  KeAbPostRelease(v6);
  KeLeaveCriticalRegion();
  return (unsigned int)v16;
}
