/*
 * XREFs of MiLockVad @ 0x140063AC0
 * Callers:
 *     MiCleanCfg @ 0x14001F518 (MiCleanCfg.c)
 *     MiInsertPrivateVad @ 0x1400BC014 (MiInsertPrivateVad.c)
 *     MiWaitForRotateToComplete @ 0x1401036B0 (MiWaitForRotateToComplete.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x14012D814 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MiInsertViewOfPhysicalSection @ 0x14013BD7C (MiInsertViewOfPhysicalSection.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1401D059C (MiReleaseOutSwappedProcessCommit.c)
 *     MiWaitForVadDeletion @ 0x1401E1DD8 (MiWaitForVadDeletion.c)
 *     MiMapUserLargePages @ 0x1401E1F60 (MiMapUserLargePages.c)
 *     MmCleanProcessAddressSpace @ 0x1403E7980 (MmCleanProcessAddressSpace.c)
 *     NtAreMappedFilesTheSame @ 0x1403E8334 (NtAreMappedFilesTheSame.c)
 *     MiLockVadRange @ 0x1403E8728 (MiLockVadRange.c)
 *     MiCreatePebOrTeb @ 0x1403F2500 (MiCreatePebOrTeb.c)
 *     MiMapViewOfImageSection @ 0x1403F5860 (MiMapViewOfImageSection.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1403F71D0 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MiMapViewOfDataSection @ 0x140416C00 (MiMapViewOfDataSection.c)
 *     MmQueryVirtualMemory @ 0x140418260 (MmQueryVirtualMemory.c)
 *     MiAllocateVirtualMemory @ 0x140419B20 (MiAllocateVirtualMemory.c)
 *     MiCfgInitializeProcess @ 0x14046372C (MiCfgInitializeProcess.c)
 *     MiMapLockedPagesInUserSpace @ 0x1404E65E0 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x14053B280 (MiMapViewOfPhysicalSection.c)
 *     MmIsFileMapped @ 0x140625E58 (MmIsFileMapped.c)
 *     MiAllocateEnclaveVad @ 0x140628DA0 (MiAllocateEnclaveVad.c)
 *     MiDeleteAllPartialCloneVads @ 0x14062CB58 (MiDeleteAllPartialCloneVads.c)
 *     MiScrubProcesses @ 0x14062CF2C (MiScrubProcesses.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14014FFF8 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

void __fastcall MiLockVad(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  ULONG_PTR v3; // r14
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int AbEntrySummary; // edx
  __int64 v6; // rcx
  __int64 v7; // rdi
  int v8; // eax
  __int16 v9; // ax
  struct _KPROCESS *Process; // rax
  unsigned __int64 v11; // rcx
  unsigned __int8 AbOrphanedEntrySummary; // di

  v2 = a1;
  --*(_WORD *)(a1 + 486);
  v3 = a2 + 40;
  if ( !KiAbEnabled )
  {
    v7 = 0LL;
    goto LABEL_11;
  }
  CurrentThread = KeGetCurrentThread();
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, a2 + 40, KeGetCurrentIrql(), 0LL);
  --CurrentThread->SpecialApcDisable;
  if ( !CurrentThread->AbEntrySummary )
  {
    v7 = 0LL;
    if ( !CurrentThread->AbOrphanedEntrySummary )
    {
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(CurrentThread, a2 + 40);
      goto LABEL_22;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    CurrentThread->AbEntrySummary |= AbOrphanedEntrySummary;
  }
  AbEntrySummary = CurrentThread->AbEntrySummary;
  _BitScanForward((unsigned int *)&v6, AbEntrySummary);
  CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v6);
  a1 = 96 * v6;
  v7 = (__int64)CurrentThread->LockEntries + a1;
  if ( !v7 )
  {
LABEL_22:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xFu);
    goto LABEL_8;
  }
  if ( v3 + 0x70000000000LL > 0x7FFFFFFFFFLL
    || (Process = CurrentThread->ApcState.Process, (v11 = Process[1].ActiveProcessors.Bitmap[2]) == 0)
    || Process == PsInitialSystemProcess )
  {
    v8 = -1;
  }
  else
  {
    v8 = *(_DWORD *)(v11 + 8);
  }
  *(_DWORD *)(v7 + 40) = v8;
  a1 = 0x7FFFFFFFFFFFFFFCLL;
  *(_QWORD *)(v7 + 32) = v3 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_8:
  v9 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v9;
  if ( !v9 && ($E81C3296F15336D9BF9B2D43BB137B25 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(a1);
LABEL_11:
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v3, v7, v3);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  *(_BYTE *)(v2 + 1732) |= 0x80u;
}
