/*
 * XREFs of MiReleaseControlAreaPartition @ 0x14006DC60
 * Callers:
 *     MiInsertSharedCommitNode @ 0x14041B4F0 (MiInsertSharedCommitNode.c)
 *     MiRemoveSharedCommitNode @ 0x14041B910 (MiRemoveSharedCommitNode.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiSubsectionUsingExtents @ 0x1400A8E40 (MiSubsectionUsingExtents.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14014FFF8 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     MiReturnSubsectionCharges @ 0x1401E3170 (MiReturnSubsectionCharges.c)
 */

__int64 __fastcall MiReleaseControlAreaPartition(__int64 a1, __int64 a2)
{
  int *v2; // r8
  unsigned __int16 v3; // ax
  __int64 v5; // rbx
  int *AbEntrySummary; // rdx
  __int64 result; // rax
  __int64 v8; // r14
  struct _KTHREAD *CurrentThread; // r15
  __int64 v10; // r13
  volatile signed __int32 *v11; // rsi
  struct _KTHREAD *v12; // rdi
  unsigned __int8 AbOrphanedEntrySummary; // al
  __int64 v14; // rcx
  __int64 v15; // rbp
  struct _KPROCESS *Process; // rax
  unsigned __int64 v17; // rcx
  int v18; // eax
  __int16 v19; // ax
  unsigned int v20; // ecx
  __int64 v21; // rcx
  __int64 v22; // rcx

  v2 = &MiSystemPartition;
  v3 = *(_WORD *)(a1 + 60) & 0x3FF;
  v5 = a1;
  if ( v3 == 1023 )
  {
    AbEntrySummary = &MiSystemPartition;
  }
  else
  {
    a1 = v3;
    AbEntrySummary = *(int **)(qword_1402FEC28 + 8LL * v3);
  }
  result = *(unsigned __int16 *)(a2 + 1460);
  if ( (_WORD)result != 1023 )
  {
    result = (unsigned __int16)result;
    v2 = *(int **)(qword_1402FEC28 + 8LL * (unsigned __int16)result);
  }
  if ( AbEntrySummary != v2 )
  {
    v8 = 0LL;
    CurrentThread = KeGetCurrentThread();
    v10 = *(_QWORD *)v5;
    --CurrentThread->SpecialApcDisable;
    v11 = (volatile signed __int32 *)(v10 + 40);
    if ( !KiAbEnabled )
    {
      v15 = 0LL;
LABEL_28:
      if ( _interlockedbittestandset64(v11, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v10 + 40), v15, v10 + 40);
      if ( v15 )
        *(_BYTE *)(v15 + 26) |= 1u;
      v20 = *(_DWORD *)(v5 + 60);
      if ( v20 >> 10 != 0x3FFFFF )
      {
        *(_DWORD *)(v5 + 60) = v20 & 0x3FF | (((v20 >> 10) - 1) << 10);
        if ( !(((v20 >> 10) - 1) << 10) )
        {
          v8 = *(unsigned int *)(v10 + 8);
          if ( (*(_DWORD *)(v5 + 56) & 0x40000000) != 0 )
          {
            v8 = 0LL;
            v21 = v5 + 120;
            if ( v5 != -120 )
            {
              do
              {
                if ( !(unsigned int)MiSubsectionUsingExtents(v21, AbEntrySummary, v2) )
                  v8 += *(unsigned int *)(v22 + 44);
                v21 = *(_QWORD *)(v22 + 16);
              }
              while ( v21 );
            }
          }
        }
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v10 + 40));
      KeAbPostRelease(v10 + 40);
      result = KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      if ( v8 )
        return MiReturnSubsectionCharges(v8);
      return result;
    }
    v12 = KeGetCurrentThread();
    if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
      KeBugCheckEx(0x192u, (ULONG_PTR)v12, v10 + 40, KeGetCurrentIrql(), 0LL);
    --v12->SpecialApcDisable;
    if ( !v12->AbEntrySummary )
    {
      if ( !v12->AbOrphanedEntrySummary )
      {
        v15 = 0LL;
        if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
          EtwTraceAutoBoostEntryExhaustion(v12, v10 + 40);
        goto LABEL_21;
      }
      AbOrphanedEntrySummary = v12->AbOrphanedEntrySummary;
      v12->AbOrphanedEntrySummary = 0;
      v12->AbEntrySummary |= AbOrphanedEntrySummary;
    }
    AbEntrySummary = (int *)v12->AbEntrySummary;
    _BitScanForward((unsigned int *)&v14, (unsigned int)AbEntrySummary);
    v12->AbEntrySummary = (unsigned __int8)AbEntrySummary & ~(1 << v14);
    a1 = 96 * v14;
    v15 = (__int64)v12->LockEntries + a1;
    if ( v15 )
    {
      if ( (unsigned __int64)(v10 + 0x70000000028LL) > 0x7FFFFFFFFFLL
        || (Process = v12->ApcState.Process, (v17 = Process[1].ActiveProcessors.Bitmap[2]) == 0)
        || Process == PsInitialSystemProcess )
      {
        v18 = -1;
      }
      else
      {
        v18 = *(_DWORD *)(v17 + 8);
      }
      *(_DWORD *)(v15 + 40) = v18;
      a1 = 0x7FFFFFFFFFFFFFFCLL;
      *(_QWORD *)(v15 + 32) = (unsigned __int64)v11 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_24:
      v19 = v12->SpecialApcDisable + 1;
      v12->SpecialApcDisable = v19;
      if ( !v19 && ($E81C3296F15336D9BF9B2D43BB137B25 *)v12->ApcState.ApcListHead[0].Flink != &v12->152 )
        KiCheckForKernelApcDelivery(a1);
      goto LABEL_28;
    }
LABEL_21:
    _interlockedbittestandset((volatile signed __int32 *)&v12->116 + 1, 0xFu);
    goto LABEL_24;
  }
  return result;
}
