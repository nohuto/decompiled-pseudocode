/*
 * XREFs of LOCK_ADDRESS_SPACE @ 0x1400622C0
 * Callers:
 *     MiDeleteFinalPageTables @ 0x1400055B8 (MiDeleteFinalPageTables.c)
 *     MiBeginProcessClean @ 0x14001BE64 (MiBeginProcessClean.c)
 *     MiLockAddressSpaceToo @ 0x1400D5E5C (MiLockAddressSpaceToo.c)
 *     MiWaitForForkToComplete @ 0x14012FC18 (MiWaitForForkToComplete.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1401D059C (MiReleaseOutSwappedProcessCommit.c)
 *     MmCleanProcessAddressSpace @ 0x1403E7980 (MmCleanProcessAddressSpace.c)
 *     MiCreatePebOrTeb @ 0x1403F2500 (MiCreatePebOrTeb.c)
 *     MiMapViewOfImageSection @ 0x1403F5860 (MiMapViewOfImageSection.c)
 *     MiMapViewOfDataSection @ 0x140416C00 (MiMapViewOfDataSection.c)
 *     MiAllocateVirtualMemory @ 0x140419B20 (MiAllocateVirtualMemory.c)
 *     MiInitializeVadBitMap @ 0x140462CA0 (MiInitializeVadBitMap.c)
 *     MiFindNextEnclaveBoundary @ 0x14047B340 (MiFindNextEnclaveBoundary.c)
 *     MiMapLockedPagesInUserSpace @ 0x1404E65E0 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x14053B280 (MiMapViewOfPhysicalSection.c)
 *     MmCreateShadowMapping @ 0x1406264D0 (MmCreateShadowMapping.c)
 *     MmDeleteShadowMapping @ 0x140626638 (MmDeleteShadowMapping.c)
 *     MiResizeAweBitMap @ 0x1406270C0 (MiResizeAweBitMap.c)
 *     NtFreeUserPhysicalPages @ 0x140627AE0 (NtFreeUserPhysicalPages.c)
 *     MiAllocateEnclaveVad @ 0x140628DA0 (MiAllocateEnclaveVad.c)
 *     MiScrubProcesses @ 0x14062CF2C (MiScrubProcesses.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14014FFF8 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

void __fastcall LOCK_ADDRESS_SPACE(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  ULONG_PTR v3; // rsi
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int AbEntrySummary; // edx
  __int64 v6; // rcx
  __int64 v7; // rdi
  int v8; // eax
  __int16 v9; // ax
  struct _KPROCESS *Process; // rax
  unsigned __int64 v11; // rcx
  unsigned __int8 AbOrphanedEntrySummary; // al

  v2 = a1;
  --*(_WORD *)(a1 + 486);
  v3 = a2 + 872;
  if ( !KiAbEnabled )
  {
    v7 = 0LL;
    goto LABEL_11;
  }
  CurrentThread = KeGetCurrentThread();
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, a2 + 872, KeGetCurrentIrql(), 0LL);
  --CurrentThread->SpecialApcDisable;
  if ( !CurrentThread->AbEntrySummary )
  {
    if ( !CurrentThread->AbOrphanedEntrySummary )
    {
      v7 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(CurrentThread, a2 + 872);
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
  *(_BYTE *)(v2 + 1732) |= 1u;
}
